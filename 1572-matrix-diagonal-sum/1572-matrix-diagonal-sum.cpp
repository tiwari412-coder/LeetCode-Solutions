class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;

        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                if(i==j){
                    sum += mat[i][j];
                }
            }
        }

        int left = 0;
        int right = mat.size()-1;

        while(left < mat.size()){
            if(left != right){
            sum += mat[left][right];
            }
            left++;
            right--;
        }

        return sum;
    }
};



