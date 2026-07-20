class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
           
                    int greater = -1;

                    int k = (i+1) % n;        // if i=3 then k= 4

                    while(k != i){
                        if(nums[i] < nums[k]){  // if statisfied means if i get the answer in k=4 ok
                            greater = nums[k];
                            break;
                        }
                            k =(k+1) % n;     // otherwise k is updated to k+1 =5 means k =0 starts from 0th index i.e. moving next interation
                        }
    
                    result.push_back(greater);
                }
        return result;
    }
};