class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> ans;

        for(int i=0;i<n;i++){
            ans.push_back({efficiency[i] , speed[i]});
        } 

        sort(ans.rbegin() , ans.rend());

        priority_queue<int,vector<int>,greater<int>> minheap;

        long long speedsum = 0;
        long long result = 0;
        int mod = 1e9 + 7;

        for(auto eng : ans){
            speedsum += eng.second;
            minheap.push(eng.second);

            if(minheap.size() > k){
                speedsum -= minheap.top();
                minheap.pop();
            }

            result = max(result , speedsum*eng.first);
        }
        return result % mod;
    }
};






