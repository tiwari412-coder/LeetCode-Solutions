class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_map<string,int>mp;

        string s = "";
        for(int i=0; i<word.size(); i++){
            if(isdigit(word[i])) s+= word[i];
            else{
                if(!s.empty()){
                    while(s.size() > 1 && s[0] == '0') s.erase(0 ,1);
                    mp[s]++;
                    s = "";
                }
            }
          }

          // handle the last string if contain the digit 0
          if(!s.empty()){
            while(s.size() > 1 && s[0] == '0') s.erase(0 ,1);
            mp[s]++;
          }
        return mp.size();
    }
};