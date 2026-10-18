class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string>ans;
        stringstream ss(sentence);
        string word;

        while(ss >> word) ans.push_back(word);
        int n = ans.size();

        if(ans.size() == 1){
            if(ans[0].front() == ans[0].back()) return true;
            else return false;
        }
        else {
            for(int i=1; i<ans.size(); i++){
                if(ans[0].front() == ans[n-1].back()){
                    if(ans[i-1].back() != ans[i].front()) return false;
                }
                else return false;
            }
        }

        return true;
    }
};