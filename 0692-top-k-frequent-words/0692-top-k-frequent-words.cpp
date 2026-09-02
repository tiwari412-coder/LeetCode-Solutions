class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string , int> mp;

        for(string ch : words){
            mp[ch]++;
        }

        vector<pair<string , int>> ans;
        for(auto it : mp){
            ans.push_back({it.first ,it.second});
        }

        sort(ans.begin() , ans.end() , [](pair<string, int>& a , pair<string , int>& b){
            if(a.second != b.second) return a.second > b.second;
            return a.first < b.first;
           });

        words.clear();
        
        for(int i=0; i<k; i++){
            words.push_back(ans[i].first);
        }

        return words;
    }
};