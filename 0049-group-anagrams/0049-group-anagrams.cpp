class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;

        for(string ch : strs){
            string temp = ch;
            sort(temp.begin() , temp.end());
            mp[temp].push_back(ch);
        }

        vector<vector<string>> ans;
        for(auto p : mp){
            ans.push_back(p.second);
        }

        return ans;
    }
};