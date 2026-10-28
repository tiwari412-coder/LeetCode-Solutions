class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for(int i=0; i<words.size(); i++){
            bool check = true;

            for(int j=0; j<words[i].size(); j++){
                char ch = words[i][j];
                if(allowed.find(ch) == string :: npos){
                    check = false;
                    break;
                }
            }
            if(check) count++;
        }

        return count;
    }
};