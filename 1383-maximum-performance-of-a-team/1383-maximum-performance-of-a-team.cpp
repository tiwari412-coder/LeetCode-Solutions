class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
        vector<pair<int, int>> engineers;
        
        for (int i = 0; i < n; i++) {
            engineers.push_back({efficiency[i], speed[i]});
        }
        
        sort(engineers.rbegin(), engineers.rend()); // sort by efficiency descending
        
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        long long speedSum = 0;
        long long ans = 0;
        const int MOD = 1e9 + 7;
        
        for (auto &[eff, spd] : engineers) {
            
            speedSum += spd;
            minHeap.push(spd);
            
            if (minHeap.size() > k) {
                speedSum -= minHeap.top();
                minHeap.pop();
            }
            
            ans = max(ans, speedSum * eff);
        }
        
        return ans % MOD;
    }
};