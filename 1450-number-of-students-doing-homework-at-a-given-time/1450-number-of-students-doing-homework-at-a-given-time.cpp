class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        vector<pair<int,int>>ans;

        for(int i=0;i<startTime.size(); i++){
            ans.push_back({startTime[i] , endTime[i]});
        }
        int count = 0;

        for(auto it : ans){
            if(it.first <= queryTime && it.second >= queryTime) count++;
        }
        ans.clear();
        return count;
    }
};