class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>left;
        unordered_map<int,int>right;

        for(int i=0; i<matches.size(); i++){
            left[matches[i][0]]++;
            right[matches[i][1]]++;
        }

        vector<int>second;
        for(auto it : right){
            if(it.second == 1) second.push_back(it.first);
        }

        vector<int>first;
        for(auto it : left){
            if(right.find(it.first) == right.end()) first.push_back(it.first);
        }

        sort(second.begin() , second.end());
        sort(first.begin() , first.end());

        vector<vector<int>>ans;

        ans.push_back(first);
        ans.push_back(second);

        return ans;
    }
};