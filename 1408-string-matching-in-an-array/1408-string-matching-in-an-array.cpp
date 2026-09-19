class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            bool check = false;
            for(int j=0; j<words.size(); j++){
                if(i != j){
                    if(words[j].find(s) != string :: npos){
                        check = true;
                    }
                }
            }
            if(check) ans.push_back(s);
        }

        return ans;
    }
};