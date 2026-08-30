class Solution {
public:
    int differenceOfSums(int n, int m) {
        int notdiv = 0;
        int div = 0;

        for(int i=1; i<=n; i++){
            if(i % m != 0) notdiv += i;
            else div += i;
        }

        return notdiv - div;
    }
};