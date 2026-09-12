class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans = heights;
        sort(heights.begin() , heights.end());
        int count = 0;

        for(int i=0; i<ans.size(); i++){
            if(ans[i] != heights[i]) count++;
        }
        
        return count;
    }
};