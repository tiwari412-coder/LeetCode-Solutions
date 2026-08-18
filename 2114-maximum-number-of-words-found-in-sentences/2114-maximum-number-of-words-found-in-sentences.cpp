class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        int ans = 1;

        for(int i=0; i<sentences.size(); i++){
            string s = sentences[i];
            for(int i=0; i<s.size(); i++){
                if(s[i] == ' ') ans++;
            }
            maxi = max(maxi , ans);
            ans = 1;
        }
        return maxi;
    }
};