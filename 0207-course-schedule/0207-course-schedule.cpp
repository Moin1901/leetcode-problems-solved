class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& pre) {
        vector<int>adj[V];
	    for(auto it:pre){
	        adj[it[1]].push_back(it[0]);
	    }
	    vector<int>ingr(V,0);
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]){
	            ingr[it]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(ingr[i]==0){
	            q.push(i);
	        }
	    }
	    vector<int>topo;
	    while(!q.empty()){
	        int node=q.front();
	        q.pop();
	        topo.push_back(node);
	        for(auto it:adj[node]){
	            ingr[it]--;
	            if(ingr[it]==0)q.push(it);
	        }
	    }
	    if(topo.size()==V)return true;
	    return false;
        
    }
};