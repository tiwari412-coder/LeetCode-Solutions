class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for(int i=low; i<=high; i++){
            string s = to_string(i);
            int n = s.size();
            
            if(n % 2 != 0) continue;
            int mid = n/2;
            int sum1 = 0 , sum2 = 0;
            for(int j=0; j<mid; j++) sum1 += s[j] - '0';

            for(int k=mid; k<n; k++) sum2 += s[k] - '0';
            if(sum1 == sum2) count++;
            }

        return count;
    }
};