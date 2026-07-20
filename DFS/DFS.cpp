class Solution {
  public:
    vector<int> ans;
    bool vi[(int)1e4 + 1];
    void recur(int u, vector<vector<int>>& adj){
        if(vi[u]){
            return;
        }
        vi[u] = true;
        ans.emplace_back(u);
        for(auto v : adj[u]){
            if(!vi[v]){
                recur(v, adj);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        memset(vi, false, sizeof(vi));
        recur(0, adj);
        return ans;
    }
};
