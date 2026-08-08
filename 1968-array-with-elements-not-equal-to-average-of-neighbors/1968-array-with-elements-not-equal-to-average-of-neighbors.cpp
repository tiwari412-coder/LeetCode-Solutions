class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size();
        int mid = (n+1)/2;   // to handle odd size of nums use n+1

        int left = mid-1;
        int right = mid;

        for(int i=0; i<n; i++){
            if(i % 2 == 0){
                nums[i] = temp[left];
                left--;
            }
            else{
                nums[i] = temp[right];
                right++;
            }
        }

        return nums;
    }
};