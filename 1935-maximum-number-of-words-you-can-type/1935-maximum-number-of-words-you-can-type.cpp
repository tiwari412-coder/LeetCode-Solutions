class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        stringstream ss(text);
        string word;
        vector<string>ans;

        while(ss >> word) ans.push_back(word);

        for(int i=0; i<ans.size(); i++){
            bool check = true;

            for(int j=0; j<brokenLetters.size(); j++){
                char ch = brokenLetters[j];
                if(ans[i].find(ch) != string :: npos){
                    check = false;
                    break;
                }
            }
            if(check) count++;
        }

        return count;
    }
};