class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> st;
        
        for(int i=0;i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(st.find(grid[i][j]) != st.end()){
                    ans.push_back(grid[i][j]);
                }
                st.insert(grid[i][j]);
            }
        }

        int maxi =*max_element(st.begin() , st.end());

        int total = (maxi*(maxi+1))/2;
        int sum = 0;

        for(int x : st){
            sum += x;
        }

        int diff = total - sum;

        if(diff == 0){
            ans.push_back(maxi+1);
        }
        else{
            ans.push_back(diff);
        }

        return ans;
    }
};














