class Solution {
public:
    long long sumAndMultiply(int n) {
        
        vector<int> ans;
        while(n>= 1){
            int digit = n % 10;
            ans.push_back(digit);
            n = n/10;
        }

        reverse(ans.begin() ,ans.end());
        ans.erase(remove(ans.begin() , ans.end() , 0) , ans.end());

        long long sum =0;
        long long prod = 0;
        int m = ans.size();

        for(int i=0; i<ans.size(); i++){
            if(m == 1){
                prod = ans[i];
            }
            else{
            prod = prod*10 + ans[i];
            }
            sum += ans[i];
        }

        return (sum*prod);
    }
};