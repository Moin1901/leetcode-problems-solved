class Solution {
public:
    bool check(int start,int V,vector<vector<int>>graph,int vis[]){
        queue<int>q;
        q.push(start);
        vis[start]=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:graph[node]){
                if(vis[it]==-1){
                    vis[it]=!vis[node];
                    q.push(it);
                    
                }
                else if(vis[it]==vis[node]){
                    return false;
                }
            }
        }
        return true;
        
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        int vis[V];
        for(int i=0;i<V;i++){
            vis[i]=-1;
        }
        for(int i=0;i<V;i++){
            if(vis[i]==-1){
               if(check(i,V,graph,vis)==false)return false;
            }
        }
        return true;
    }
};