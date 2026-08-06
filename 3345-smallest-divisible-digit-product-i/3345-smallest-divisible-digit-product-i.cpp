class Solution {
public:


    int smallestNumber(int n, int t) {
        int value = n;
        int prod = 1;
        while(value > 0){
            int rem = value % 10;
            prod *= rem;
            value /= 10;
        }

        if(prod % t == 0){
            return n;
        }

        return smallestNumber(n+1 , t);
    }
};









