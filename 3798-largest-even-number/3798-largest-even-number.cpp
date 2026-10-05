class Solution {
public:
    string largestEven(string s) {
        
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != '2') s.erase(i ,1);
            else break;
        }

        return s;
    }
};