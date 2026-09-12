class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        vector<vector<int>>ans;
        int mini = INT_MAX;

        for(int i=1;i<arr.size(); i++){
            int a = arr[i-1];
            int b = arr[i];
            if(a < b){
                mini = min(mini ,b-a);
            }
        }


        for(int i=1; i<arr.size(); i++){
            int b = arr[i-1];
            int c = arr[i];
            if(mini == (c-b)) ans.push_back({b,c});
        }
        return ans;
    }
};