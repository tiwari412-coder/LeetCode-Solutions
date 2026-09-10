class Solution {
public:
    bool check(int n){
        if(n < 2)return false;
        
        for(int i=2; i*i <= n; i++){
            if(n % i == 0){
                return false;
                break;
        }
    }
        return true;
    }
    
    int sumOfPrimesInRange(int n) {
        int temp = n;
        int num = 0;

        while(temp > 0){
            int rem = temp % 10;
            num  = num*10 + rem;
            temp /= 10;
        }
        
        int low = min(n ,num);
        int high = max(n , num);

        int sum = 0;
        for(int i=low; i<=high; i++){
            if(check(i)) sum += i;
        }

        return sum;
        
    }
};