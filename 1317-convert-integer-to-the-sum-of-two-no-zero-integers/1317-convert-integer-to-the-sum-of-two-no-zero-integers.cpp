class Solution {
public:

    bool check(int num){
        while(num > 0){
            if(num % 10 == 0) return false;
            num /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;

        for(int i=1; i<=n; i++){
            int a = i;
            int b = n - i;
            if(check(a) && check(b)){
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};