class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;

        int maxi = 0;
        for(auto  it : mp) maxi = max(maxi , it.second);

        int count = 0;
        for(auto it : mp){
          if(maxi == it.second) count++;
        }

        return maxi*count;
    }
};