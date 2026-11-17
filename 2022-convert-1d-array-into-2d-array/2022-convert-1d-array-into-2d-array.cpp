class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int x = original.size();

        if(m*n != x) return {};
        else {
            for(int i=0; i<x; i+=n){
                vector<int>result;
                for(int j=i; j<i+n; j++) result.push_back(original[j]);
                ans.push_back(result);
            }
        }
        return ans; 
    }
};