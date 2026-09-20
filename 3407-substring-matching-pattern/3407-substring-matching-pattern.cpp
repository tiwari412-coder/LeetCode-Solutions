class Solution {
public:
    bool hasMatch(string s, string p) {
        string x = "";
        string y = "";

        int star = p.find('*');

        for(int i=0; i<star; i++) x += p[i];
        for(int i=star+1; i<p.size(); i++) y += p[i];

        string z = "";
        if(s.find(x) == string :: npos) return false;
        else {
            int a = s.find(x);
            a = a + x.size();
            for(int i=a; i<s.size(); i++){
                z += s[i];
            }
        }

        if(z.find(y) == string :: npos) return false;
        return true;
    }
};