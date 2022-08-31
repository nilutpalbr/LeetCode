class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dist(n,INT_MAX);
        dist[src]=0;
        for(int i=0;i<k+1;i++){
            vector<int> temp=dist;
            for(auto it:flights){
                if(dist[it[0]]==INT_MAX)continue;
                if(temp[it[1]]>dist[it[0]]+it[2]){
                    temp[it[1]]=dist[it[0]]+it[2];
                 }
            }
            dist=temp;
        }
        return dist[dst]==INT_MAX? -1: dist[dst];
    }
};