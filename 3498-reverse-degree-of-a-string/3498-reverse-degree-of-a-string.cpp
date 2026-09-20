class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for(int i=0; i<s.size(); i++){
            int x = 'z' + 1 - s[i];
            sum = sum + x*(i+1);
        }

        return sum;
    }
};