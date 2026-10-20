class Solution {
public:
    vector<int> evenOddBit(int n) {
        string ans = "";

        while(n > 0){
            int rem = n % 2;
            ans += to_string(rem);
            n /= 2;
        }

        // as if we do reverse then the original bits representation we will get but in question said to move from right to left so without reversing we can get the ans

        int even = 0;
        int odd = 0;

        for(int i=0 ;i<ans.size(); i++){
            if(i % 2 == 0 && ans[i] == '1') even++;
            else if(i % 2 != 0 && ans[i] == '1') odd++;
        }

        return {even , odd};
    }
};