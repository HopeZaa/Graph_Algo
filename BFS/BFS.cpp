class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<bool> vi((int)(1e4 + 1), false);
        vector<int> ans;
        queue<int> q;
        q.emplace(0);
        while(!q.empty()){
            auto u = q.front();
            q.pop();
            if(vi[u]){
                continue;
            }
            vi[u] = true;
            ans.emplace_back(u);
            for(auto v : adj[u]){
                if(!vi[v]){
                    q.emplace(v);
                }
            }
        }
        return ans;
    }
};
