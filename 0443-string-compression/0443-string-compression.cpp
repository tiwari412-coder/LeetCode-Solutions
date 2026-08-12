class Solution {
public:

    void separate(vector<char> &ans, int count){
        string s = to_string(count);
        for(char ch : s){
            ans.push_back(ch);
        }
    };

    int compress(vector<char>& chars) {
        vector<char> ans;
        char ch = chars[0];
        int count = 1;

        if(chars.size() == 1){
            return 1;
        }
        
        for(int i=1; i<chars.size(); i++){

            if(ch == chars[i]){
                count++;
            }

            else{            //  when i get a new character then it will push it
                ans.push_back(ch);

                if(count > 1){
                    separate(ans ,count);
                }

                ch = chars[i];
                count = 1;
            }
        }

            ans.push_back(ch);
            if(count > 1){
                    separate(ans ,count);
                }


        chars = ans;
        
        return chars.size();
    }
};