class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s;

        int mid = s.size()/2;

        string ans;
        string result;

       
        if(s.size() % 2 != 0){
            for(int i=0; i<mid; i++){
            ans.push_back(s[i]);
            }

            for(int i=mid+1; i<s.size(); i++){
                result.push_back(s[i]);
            }
        }

         else if(s.size() % 2 == 0){
            for(int i=0; i<mid; i++){
                ans.push_back(s[i]);
            }

            for(int i=mid; i<s.size(); i++){
                result.push_back(s[i]);
            }
        }

        sort(ans.begin() , ans.end());

        if(s.size() % 2 != 0){
            ans.push_back(s[mid]);
        }
        
        sort(result.rbegin() , result.rend());

        string final = ans + result;

        return final;    
    }
};












