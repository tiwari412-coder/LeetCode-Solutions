#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        return mini;
    }
};