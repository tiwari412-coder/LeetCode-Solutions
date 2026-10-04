class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";

        for(char ch='a'; ch<='z'; ch++){
            ans.push_back(ch);
        }

        string result = "";
        for(int i=0; i<s.size(); i++){
            int count = k;
            int sum = 0;
            while(count > 0){
                int index = ans.find(s[i]);
                sum += index;
                i++;
                count--;
            }
            sum = sum % 26;
            result.push_back(ans[sum]);
            i--;
        }

        return result;
    }
};