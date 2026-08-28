class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sumA = 0;
        int sumC = 0;

        for(int x  : apple){
            sumA += x;
        }
        sort(capacity.rbegin() , capacity.rend());
        int countC = 0;

        for(int x : capacity){
            if(sumA <= sumC) break;
            else {
                sumC += x;
                countC++;
        }
    }
        return countC;
    }
};