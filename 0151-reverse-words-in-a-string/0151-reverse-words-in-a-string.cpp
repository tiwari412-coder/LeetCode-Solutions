class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;

        while(ss >> word){
            ans.push_back(word);
        }

        reverse(ans.begin(), ans.end());
        string final = "";

       for(int i=0; i<ans.size(); i++){
        final += ans[i];

        if(i != ans.size()-1){
            final += " ";
        }
    }

    return final;

    }
};