class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> prefix(cost.size());
        prefix[0] = cost[0];

        for(int i=1; i<cost.size(); i++){
            prefix[i] = min(prefix[i-1] , cost[i]);
        }

        return prefix;
    }
};