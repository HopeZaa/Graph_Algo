class Solution {
  public:
    using tiii = tuple<int, int, int>;
    int par[1001], sum = 0;
    int find(int a){
        return par[a] = (a == par[a] ? a : find(par[a]));
    }
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        priority_queue<tiii, vector<tiii>, greater<tiii>> pq;
        for(int i=0;i<V;++i){
            par[i] = i;
        }
        for(auto e : edges){
            pq.emplace(e[2], e[0], e[1]);
        }
        while(!pq.empty()){
            auto [c, a, b] = pq.top();
            pq.pop();
            if(find(a) != find(b)){
                par[find(a)] = find(b);
                sum += c;
            }
        }
        return sum;
    }
};
