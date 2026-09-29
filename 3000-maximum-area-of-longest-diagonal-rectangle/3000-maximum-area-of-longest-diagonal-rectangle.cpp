class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxi = 0;
        int result = 0;

        for(int i=0; i<dimensions.size(); i++){
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            int value = length*length + width*width;
            int area = length*width;
            
            if(value > maxi){
                maxi = value;
                result = area;
            }
            else if(value == maxi){
                result = max(result, area);
            }
        }
        return result;
    }
};