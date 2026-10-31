class Solution {
public:
    bool halvesAreAlike(string s) {
        transform(s.begin() , s.end() , s.begin(), :: tolower);
        int n = s.size();
        int count1 = 0 , count2 = 0;
        for(int i=0; i<n/2; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count1 ++;
        }

        for(int i=n/2; i<n; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') count2 ++;
        }

        return count1 == count2;
    }
};