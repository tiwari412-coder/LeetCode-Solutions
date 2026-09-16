class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum = 0;
        sort(costs.begin() , costs.end());

        for(int i=0; i<costs.size(); i++){
            if(sum + costs[i]> coins) return i;
            sum += costs[i];
        }
        return costs.size(); // if successfully buyed all the icecreams
    }
};