class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {

        vector<pair<int, int>> engineers;

        // Store (efficiency, speed)
        for (int i = 0; i < n; i++) {
            engineers.push_back({efficiency[i], speed[i]});
        }

        // Sort in descending order of efficiency
        sort(engineers.rbegin(), engineers.rend());

        // Min Heap to store speeds
        priority_queue<int, vector<int>, greater<int>> minHeap;

        long long speedSum = 0;
        long long ans = 0;
        int MOD = 1e9 + 7;

        for (auto engineer : engineers) {

            // Add current engineer's speed
            speedSum += engineer.second;
            minHeap.push(engineer.second);

            // If team size exceeds k, remove the smallest speed
            if (minHeap.size() > k) {
                speedSum -= minHeap.top();
                minHeap.pop();
            }

            // Calculate performance
            ans = max(ans, speedSum * engineer.first);
        }

        return ans % MOD;
    }
};