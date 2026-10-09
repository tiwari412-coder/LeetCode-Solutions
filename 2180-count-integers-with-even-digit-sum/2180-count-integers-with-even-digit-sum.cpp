class Solution {
public:

    bool check(int val){
        int sum = 0;
        while(val > 0){
            int rem = val % 10;
            sum += rem;
            val /= 10;
        }

        if(sum % 2 == 0) return true;
        return false;
    };

    int countEven(int num) {
        int count = 0;

        for(int i=2; i<=num; i++){
            if(check(i) == true) count++;        
        }

        return count;
    }
};