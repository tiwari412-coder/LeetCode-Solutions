class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int total = original;
        bool found = true;
    
        while(found == true){
            if(find(nums.begin() , nums.end() , total) != nums.end()){
                total *= 2;
                found = true;
            }
            else found = false;
        }
        return total;
    }
};