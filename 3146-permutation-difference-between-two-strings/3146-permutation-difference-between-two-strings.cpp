class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int total = 0;

        for(int i=0; i<s.size(); i++){
            int pos = t.find(s[i]);
            total  += abs(pos - i);
        }

        return total;
    }
};