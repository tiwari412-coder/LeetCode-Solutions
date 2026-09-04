class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2;
        int minodd = INT_MAX;

        for(int x : nums1){
             if(x % 2 != 0) minodd = min(minodd , x);
        }

        for(int x : nums1){
            if(x % 2 == 0 && minodd != INT_MAX && x > minodd){
                nums2.push_back(x - minodd);
            }
            else nums2.push_back(x);
        }

        int even = 0;
        int odd = 0;
        
        for(int x : nums2){ 
            if(x % 2 != 0) odd++;
            else even++;
        }

        if(odd == 0 || even == 0) return true;
        return false;

    }
};