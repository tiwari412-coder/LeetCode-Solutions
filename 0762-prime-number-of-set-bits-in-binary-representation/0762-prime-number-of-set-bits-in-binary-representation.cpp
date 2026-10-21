class Solution {
public:
    
    bool check(int val){
        if(val < 2) return false;
        
        for(int i=2; i<=sqrt(val); i++){
            if(val % i == 0) return false;
        }

        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        
        for(int i=left; i<=right; i++){
            int bits = 0;
            int temp = i;

            while(temp > 0){
                int rem = temp % 2;
                if(rem == 1) bits++;
                temp /= 2;
            }

            if(check(bits)) count++;
        }

        return count;
    }
};