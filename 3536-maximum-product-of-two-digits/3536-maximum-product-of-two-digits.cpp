class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;

        while(n > 0){
            int result = n % 10;
            ans.push_back(result);
            n = n/10;
        }

        reverse(ans.begin(), ans.end());
        int maxsum = 0;

        for(int i=0; i<ans.size(); i++){
            for(int j=i+1; j<ans.size(); j++){
                int prod = ans[i]* ans[j];
                maxsum = max(maxsum , prod);
            }
        }
        return maxsum;
    }
};




