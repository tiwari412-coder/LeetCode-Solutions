class Solution {
public:
    string lastNonEmptyString(string s) {
        vector<int>ans(26,0);
        int maxi = 0;
        string result = "";
        
        for(char ch : s){
            ans[ch- 'a']++;
            maxi = max(maxi , ans[ch -'a']);
        }

        for(int i =s.size()-1; i>=0; i--){
            char res = s[i];
            if(ans[res - 'a'] == maxi){
                result += res;
                ans[res - 'a']--;
            }
        }

        reverse(result.begin() , result.end());
        return result;
        
    }
};