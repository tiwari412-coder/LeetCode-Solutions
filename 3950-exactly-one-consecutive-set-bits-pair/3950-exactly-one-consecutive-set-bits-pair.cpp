class Solution {
public:
    bool consecutiveSetBits(int n) {
        string ans = "";

        while(n > 0){
            int rem = n % 2;
            ans += to_string(rem);
            n /= 2;
        }

        reverse(ans.begin(), ans.end());

        int count = 0;
        
        for(int i=0; i+1<ans.size(); i++){
            if(ans[i] == '1' && ans[i+1] == '1') count++;
        }

        return count == 1;

    }
};