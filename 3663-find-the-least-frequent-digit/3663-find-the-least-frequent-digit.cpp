class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int temp = n;
        unordered_map<int,int>mp;
    
        while(temp > 0){
            int rem = temp % 10;
            mp[rem]++;
            temp /= 10;
        }

        int minfreq = mp.begin()->second;
        for(auto it : mp){
            if(minfreq > it.second) minfreq = it.second;
        }

        vector<int>ans;
        for(auto it :  mp){
            if(it.second == minfreq) ans.push_back(it.first);
        }

        int mini = *min_element(ans.begin() , ans.end());
        return mini;
    }
};