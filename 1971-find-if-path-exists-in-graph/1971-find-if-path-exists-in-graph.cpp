class Solution {
public:

    void dfs(int start , vector<vector<int>> &ans , vector<bool> &visited){
        visited[start] = true;

        for(auto neigh : ans[start]){
            if(!visited[neigh]){
                dfs(neigh , ans , visited);
            }
        }
    };

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> ans(n);

        for(auto x : edges){
            int u = x[0];
            int v = x[1];

            ans[u].push_back(v);
            ans[v].push_back(u);
        }

        vector<bool> visited(n , false);

        dfs(source, ans, visited);

        return visited[destination];

    }
};








