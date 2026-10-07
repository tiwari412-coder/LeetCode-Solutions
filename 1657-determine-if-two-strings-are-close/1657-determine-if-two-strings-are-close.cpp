class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp;
        map<char,int>rj;

        for(char ch : word1) mp[ch]++;
        for(char ch : word2) rj[ch]++;

        vector<int>ans;
        vector<int>result;

        // checking whether the no.character are or not
        if(mp.size() != rj.size()) return false;

        for(auto it : mp){
            if(rj.find(it.first) == rj.end()) return false;
        }

        for(auto it : mp) ans.push_back(it.second);
        for(auto it : rj) result.push_back(it.second);
        sort(ans.begin() , ans.end());
        sort(result.begin() , result.end());

        for(int i=0; i<ans.size(); i++){
            if(ans[i] != result[i]) return false;
        }

        return true;
    }
};