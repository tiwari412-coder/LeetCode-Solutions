class Solution {
public:
    int countSegments(string s) {
        string a = "";
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                a += s[i];
            }
            else{
                if(!a.empty()){
                    count++;
                    a = "";
                }
            }
        }
        
        if(!a.empty()) count++;

        return count;
    }
};