class Solution {
  public:
    using pii = pair<int, int>;
    int spanningTree(int V, vector<vector<int>>& edges) {
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        vector<bool> vi(V, false);
        vector<pii> g[1001];
        int sum = 0;
        for(auto e : edges){
            g[e[0]].emplace_back(e[1], e[2]);
            g[e[1]].emplace_back(e[0], e[2]);
        }
        pq.emplace(0, 0);
        while(!pq.empty()){
            auto [w, u] = pq.top();
            pq.pop();
            if(vi[u]){
                continue;
            }
            vi[u] = true;
            sum += w;
            for(auto [v, edW] : g[u]){
                if(!vi[v]){
                    pq.emplace(edW, v);
                }
            }
        }
        return sum;
    }
};
