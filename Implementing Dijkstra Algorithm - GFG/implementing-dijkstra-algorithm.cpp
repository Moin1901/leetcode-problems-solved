//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        set<pair<int,int>>st;
        vector<int>dist(V,0);
        for(int i=0;i<V;i++)dist[i]=INT_MAX;
        dist[S]=0;
        st.insert({0,S});
        while(!st.empty()){
            auto it=*st.begin();
            int dis=it.first;
            int node=it.second;
            st.erase(it);
            for(auto it:adj[node]){
                int edgewt=it[1];
                int adjnode=it[0];
                if(dis + edgewt < dist[adjnode]){
                    if(dist[adjnode]!=INT_MAX){
                        st.erase({dist[adjnode],adjnode});
                    }
                    dist[adjnode]=edgewt+dis;
                    st.insert({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends