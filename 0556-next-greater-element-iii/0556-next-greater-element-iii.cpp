class Solution {
public:
    int nextGreaterElement(int n) {
        string str = to_string(n);

        if(next_permutation(str.begin(), str.end())){
            long long value = stoll(str);

            if(value > INT_MAX){
                return -1;
            }
            return int(value);
        }

        else {
            return -1;
        }
        
    }
};