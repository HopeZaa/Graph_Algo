class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        for(int k=0;k<dist.size();++k){
            for(int i=0;i<dist.size();++i){
                for(int j=0;j<dist.size();++j){
                    if (dist[i][k] != 100000000 && dist[k][j] != 100000000) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
        return;
    }
};
