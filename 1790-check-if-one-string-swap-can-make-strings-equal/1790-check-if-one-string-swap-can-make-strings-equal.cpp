class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int>ans;

        for(int i=0; i<s1.size(); i++){
            if(s1[i] != s2[i]) ans.push_back(i);
        }

        if(ans.size() == 0) return true;
        if(ans.size() != 2) return false;

        int i = ans[0];
        int j = ans[1];

        if(s1[i] == s2[j] && s1[j] == s2[i]) return true;

        return false; 
    }
};