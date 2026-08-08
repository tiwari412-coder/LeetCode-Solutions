class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin() , temp.end());

        int n = nums.size();
        int mid = (n+1)/2;    // to handle the odd size also use n+1

        int left = mid-1;
        int right = n-1;

        for(int i=0; i<n; i++){
            if(i % 2 == 0){
                nums[i] = temp[left];
                left--;
            }
            else{
                nums[i] = temp[right];
                right--;
            }            
        }
    }
};