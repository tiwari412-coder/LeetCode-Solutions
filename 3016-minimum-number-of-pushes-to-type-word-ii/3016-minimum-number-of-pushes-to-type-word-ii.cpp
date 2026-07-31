class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char ,int> mp;

        for(char ch : word){
            mp[ch]++;
        }

        vector<int> ans;
        for(auto p : mp){
            ans.push_back(p.second);
        }

        sort(ans.rbegin() , ans.rend());
        int count =0;
        int push = 0;
        
        for(int i=0; i<ans.size(); i++){
            count++;

            if(count < 9){
                push = push + ans[i];
            }
            else if(count < 17){
                push = push + 2*ans[i];
            }
            else if(count < 25){
                push = push + 3*ans[i];
            }

            else {
                push = push + 4*ans[i];
            }
        }

        return push;
    }
};



