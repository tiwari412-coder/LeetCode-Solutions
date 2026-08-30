class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        reverse(s.begin() , s.end());
        string a = "";
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(count == 3){
                a += '.';
                count = 0;
            }
            a += s[i];
            count++;
        }
        reverse(a.begin() , a.end());
        return a;
    }
};