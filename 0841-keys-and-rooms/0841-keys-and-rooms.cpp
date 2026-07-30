class Solution {
public:

    void dfs(int start , vector<vector<int>>&rooms ,vector<bool> &visited){

        visited[start] = true;

        for(auto neigh : rooms[start]){
            if(!visited[neigh]){
                dfs(neigh, rooms , visited);
            }
        }
    };
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        
        vector<bool> visited(n , false);

        dfs(0 , rooms , visited);

        for(int i=0; i<n; i++){
            if(!visited[i]){
                return false;
            }
        }

        return true;
    }
};