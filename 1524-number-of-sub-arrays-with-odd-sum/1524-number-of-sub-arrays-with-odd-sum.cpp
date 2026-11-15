class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long count = 0;
        int sum = 0;
        int even = 1, odd = 0;
        int mod = 1e9 + 7;

        for(int x : arr){
            sum += x;

            if(sum % 2 == 0){
                count += odd;
                even++; 
            }
            else{
                count += even;
                odd++;
            }

            count %= mod;
        }

        return count;
    }
};