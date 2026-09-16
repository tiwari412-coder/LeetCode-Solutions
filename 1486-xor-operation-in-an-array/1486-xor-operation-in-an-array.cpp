class Solution {
public:
    int xorOperation(int n, int start) {
        int x = start;

        for(int i = 1; i<n; i++){
            int val = start + 2*i;
            x = x ^ val; 
        }
        return x;
    }
};