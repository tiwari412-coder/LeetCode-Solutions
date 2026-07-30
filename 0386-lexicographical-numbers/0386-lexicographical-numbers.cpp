class Solution {
public:
    vector<int> lexicalOrder(int n) {
       vector<string> ans;

       for(int i=1;i<=n;i++){
        ans.push_back(to_string(i));
       }

       sort(ans.begin() , ans.end());

       vector<int> final;
       for( string ch : ans){
        final.push_back(stoi(ch));
       }

       return final;
    }
};