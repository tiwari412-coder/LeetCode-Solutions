class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<vector<int>> ans;
        
        for(int i=0; i<arr.size(); i++){
            vector<int> result;
            for(int j=i; j<arr.size(); j++){
                result.push_back(arr[j]);
                if(result.size() % 2 != 0){
                    ans.push_back(result);
                }
            }
        }
        int total = 0;

        for(int i=0; i<ans.size(); i++){
            for(int x : ans[i]){
                total += x;
            }
        }
        return total;
    }
};