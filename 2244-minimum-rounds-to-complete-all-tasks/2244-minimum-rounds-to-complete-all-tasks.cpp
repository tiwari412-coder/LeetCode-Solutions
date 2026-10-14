class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;

        for(int x : tasks) mp[x]++;
        int count = 0;

        for(auto it : mp){
            int freq = it.second;

            if(freq == 1) return -1;

            count += (freq + 2)/3;
        }
        return count;
    }
};