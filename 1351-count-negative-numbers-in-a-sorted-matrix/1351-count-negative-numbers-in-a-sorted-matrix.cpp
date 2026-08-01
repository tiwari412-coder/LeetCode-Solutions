class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int neg = 0;
        for(int i=0;i<grid.size(); i++){
            for(int x : grid[i]){
                if(x < 0){
                    neg++;
                }
            }
        }
        return neg;
    }
};