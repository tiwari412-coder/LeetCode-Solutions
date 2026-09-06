class Solution {
public:
    int countKeyChanges(string s) {
        transform(s.begin() , s.end() , s.begin(), :: tolower);
        char a = s[0];
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(a != s[i]){
                count++;
                a = s[i];
            }
        }

        return count;
    }
};