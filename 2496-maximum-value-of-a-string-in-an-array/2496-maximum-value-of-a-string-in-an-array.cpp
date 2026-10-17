class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi = 0;

        for(int i=0; i<strs.size(); i++){
            bool check = true;

            for(char ch : strs[i]){
                if(!isdigit(ch)){
                    check = false;
                    break;
                }
            }

                if(check){
                    int n = stoi(strs[i]);
                    maxi = max(maxi , n);
                }
                else{
                    maxi = max(maxi , (int)strs[i].size());
                }
            }

        return maxi;
    }
};