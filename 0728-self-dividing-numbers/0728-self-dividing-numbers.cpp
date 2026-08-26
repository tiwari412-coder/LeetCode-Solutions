class Solution {
public:
    void check(int x, vector<int>& ans){
        int temp = x;
        bool valid = true;

        while(temp > 0){
            int rem = temp % 10;
            if(rem ==0 || x % rem != 0){
                return;    // function khatam
            }
            temp /= 10;
        }
        ans.push_back(x); // sirf tab chelega jab function khatam na hoaa ho
    };


    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i=left; i<=right; i++){
            check(i , ans);
        }
        return ans;
    }
};