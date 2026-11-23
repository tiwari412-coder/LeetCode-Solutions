class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;

        while(ss >> word) ans.push_back(word);
        vector<string> result(ans.size());

        for(int i=0; i<ans.size(); i++){
            for(int j=1; j<=ans.size(); j++){
                string digit = to_string(j);

                if(ans[i].find(digit) != string :: npos){
                    string ch = ans[i];
                    ch.pop_back();
                    result[j - 1] = ch;
                    break;
                }
            }
        }

        string finalans = "";

        for(int i=0; i<result.size(); i++){
            if(i > 0) finalans +=  " ";
            finalans += result[i];
        }

        return finalans;
    }
};