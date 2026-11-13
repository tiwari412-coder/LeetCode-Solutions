class Solution {
public:
    int minimumSum(int num) {
        vector<int>ans;

        while(num > 0){
            int rem = num % 10;
            ans.push_back(rem);
            num /= 10;
        }

        sort(ans.begin() , ans.end());
        vector<int>result;
        result.push_back(ans[2]);
        result.push_back(ans[3]);
        ans.pop_back();
        ans.pop_back();

        int new1 = 1, new2 =1;
        if(ans[0] == 0) new1 *= result[1];
        else new1 = ans[0]*10 + result[1];

        if(ans[1] == 0) new2 *= result[0];
        else new2 = ans[1]*10 + result[0];

        return new1 + new2;
        

    }
};



