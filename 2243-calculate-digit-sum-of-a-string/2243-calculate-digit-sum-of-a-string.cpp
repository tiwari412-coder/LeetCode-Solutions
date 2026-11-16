class Solution {
public:
    string digitSum(string s, int k) {
         while(s.size() > k) {
            string ch = "";

            for(int i = 0; i < s.size(); i += k) {
                int sum = 0;

                for(int j = i; j < min(i + k, (int)s.size()); j++) {
                    sum += s[j] - '0';
                }

                ch += to_string(sum);
            }

            s = ch;
        }

        return s;
    }
};