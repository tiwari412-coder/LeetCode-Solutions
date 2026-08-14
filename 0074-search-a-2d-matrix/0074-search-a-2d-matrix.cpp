class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ch=false;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(target==matrix[i][j]){
                    ch=true;
                }
            }
        }
        return ch;
    }
};