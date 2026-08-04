#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int numTrees(int n){
        long long a=2*n;

         long long r = 1;

        for(int i = 1; i <= n; i++){
            r = r * (n + i);   // multiply
            r = r / i;         // divide immediately (prevents overflow)
        }

        long long result = r / (n + 1);

        return result;
    }
};








