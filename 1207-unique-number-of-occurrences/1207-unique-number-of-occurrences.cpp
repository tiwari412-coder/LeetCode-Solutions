class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>ans;
        
        for(int x : arr) mp[x]++;

        for(auto it : mp) ans.push_back(it.second);

        sort(ans.begin() , ans.end());
        int x = ans[0];

        for(int i=1; i<ans.size();i++){
            if(x == ans[i]) return false;
            x = ans[i];
        }

        return true;
        
    }
};