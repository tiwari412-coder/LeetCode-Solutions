class Solution {
public:
    string sortString(string s) {
        sort(s.begin() , s.end());
        unordered_map<char , int>mp;

        for(char x : s) mp[x]++;
        string ch = "";
        int count = 0;

        while(ch.size() < s.size()){
            count ++;
            string a = "";
            for(char c = 'a' ; c<='z'; c++){
                if(mp[c] > 0){
                a += c;
                mp[c]--;
            }
         }
            if(count % 2 == 0) reverse(a.begin() , a.end());
            ch += a;
        }

        return ch;
    }
};