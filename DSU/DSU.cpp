class Solution {
  public:
    int par[1001];
    int find(int a){
        return par[a] = (a == par[a] ? a : find(par[a]));
    }
    vector<int> DSU(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=1;i<=n;++i){
            par[i] = i;
        }
        for(int i=0;i<queries.size();++i){
            if(queries[i][0] == 1){
                par[find(queries[i][1])] = par[find(queries[i][2])];
            }
            if(queries[i][0] == 2){
                ans.emplace_back(find(queries[i][1]));
            }
        }
        return ans;
    }
};
