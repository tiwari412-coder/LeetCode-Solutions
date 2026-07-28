class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s;

        int mid = s.size()/2;

        string ans;
        string result;

       
        if(s.size() % 2 != 0){    // when odd is the size of the s string
            for(int i=0; i<mid; i++){
            ans.push_back(s[i]);
            }

            for(int i=mid+1; i<s.size(); i++){
                result.push_back(s[i]);
            }
        }

         else if(s.size() % 2 == 0){      // when even is the size of the s string
            for(int i=0; i<mid; i++){
                ans.push_back(s[i]);
            }

            for(int i=mid; i<s.size(); i++){
                result.push_back(s[i]);
            }
        }

        sort(ans.begin() , ans.end());     // left side from the mid will be sorted 

        if(s.size() % 2 != 0){
            ans.push_back(s[mid]);
        }

        sort(result.rbegin() , result.rend());   // right side from the mid will be sorted

        string final = ans + result;

        return final;    
    }
};




// Count the frequency of each character.
// Put half of each character into the left half.
// Sort the left half (this makes it lexicographically smallest).
// Put the odd-frequency character (if any) in the middle.
// Append the reverse of the left half.







