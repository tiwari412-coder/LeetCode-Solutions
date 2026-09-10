class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0; i<image.size(); i++){
            reverse(image[i].begin() , image[i].end());
        }

        for(int i=0; i<image.size(); i++){
            for(int j=0; j<image[i].size(); j++){
                if(image[j][i] == 1) image[j][i] = 0;
                else image[j][i] = 1;
            }
        }
        return image;
    }
};