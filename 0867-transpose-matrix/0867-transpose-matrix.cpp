class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int colms = matrix[0].size();

        vector<vector<int>> transpose(colms , vector<int>(rows));

        for(int i=0; i<rows; i++){
            for(int j=0; j<colms; j++){
                transpose[j][i] = matrix[i][j];
            }
        }

        return transpose;
    }
};