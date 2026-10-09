class Solution {
public:
    vector<string> cellsInRange(string s) {
        char left = s[0];
        int val1 = s[1] - '0';
        char right = s[3];
        int val2 = s[4] - '0';

        vector<string>ans;

        string var = "";
        for(char ch = left ;ch<=right; ch++){
            for(int j=val1; j<=val2; j++){
                var = "";
                var += ch;
                var += to_string(j);
                ans.push_back(var);
            }
        }

        return ans;
    }
};