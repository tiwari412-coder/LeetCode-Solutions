class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.length()-1;
        int count = 0;

        for(int i=n ; i>=0; i--){

             // skip the space at the end
            if(s[i] == ' '  && count == 0) continue;  
             // skip the space at the end

            if(s[i] == ' ') break;   // count will increase if no space found from counting from the end and if found at that break the loop

            else count ++;   
        }

        return count;
    }
};