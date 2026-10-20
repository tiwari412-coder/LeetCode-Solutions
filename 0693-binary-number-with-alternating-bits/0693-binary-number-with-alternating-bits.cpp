class Solution {
public:
    bool hasAlternatingBits(int n) {
        string ans = "";

        while(n > 0){
            int rem = n % 2;
            ans += to_string(rem);
            n /= 2;
        }

        for(int i=0; i<ans.size(); i+=1){
            if(ans[i] == '1' && ans[i+1] == '1' || ans[i] == '0' && ans[i+1] == '0') 
            return false;
        }

        return true;
    }
};