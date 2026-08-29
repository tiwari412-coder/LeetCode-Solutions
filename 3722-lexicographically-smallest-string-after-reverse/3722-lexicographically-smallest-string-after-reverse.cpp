class Solution {
public:
    string lexSmallest(string s) {
        string ans = s;
        int n = s.size();

        for(int k=1; k<=n; k++){
            string a = s;
            string b = s;

            reverse(a.begin() , a.begin() + k);
            reverse(b.begin() + n - k , b.end());

            ans = min(ans , a);
            ans = min(ans , b);
        }
        return ans;
    }
};