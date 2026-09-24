class Solution {
public:
    int minSwaps(vector<int>& nums) {
     vector<pair<int,int>>ans;

     for(int i=0; i<nums.size(); i++){
            int sum = 0;
            int temp = nums[i];
            while(temp > 0){
                int rem = temp % 10;
                sum += rem;
                temp /= 10;
            }
            ans.push_back({nums[i] , sum});
        }
     

     sort(ans.begin() , ans.end() ,[](const pair<int,int>& a , const pair<int,int>& b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
     });

    unordered_map<int,int>mp;
    for(int i=0; i<nums.size(); i++) mp[nums[i]] = i;

    int swaps = 0;

    for(int i=0; i<nums.size(); i++){
        if(ans[i].first == nums[i]) continue;

        // find the position of ans array element where it is shifted and swap with the currect nums array value

        int j = mp[ans[i].first];
        swap(nums[i] , nums[j]);
        swaps++;

        // also update the position the map (which will store the index in correct order) that will represent that this index value of the arrays aana chahiye aur vahi swaps ho jayega

        mp[nums[j]] = j;
        mp[nums[i]] = i;
    }

    return swaps;
    }
};