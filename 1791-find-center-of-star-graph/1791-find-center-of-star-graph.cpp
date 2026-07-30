class Solution{
public:
    int findCenter(vector<vector<int>>&edges){
        vector<int> ans;

        for(int i=0; i<edges.size(); i++){
            for(int x : edges[i]){
                ans.push_back(x);
            }
        }

        unordered_map<int , int> mp;

        for(auto p : ans){
            mp[p]++;
        }

        int maxi = 0 , key;
        for(auto it : mp){
            if(it.second > maxi){
                maxi = max(maxi ,it.second);
                key = it.first;
        }
    }

    return key;
    }
};