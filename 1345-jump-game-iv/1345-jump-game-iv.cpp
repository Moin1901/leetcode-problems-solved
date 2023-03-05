class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>>csm;
        for (int i = 0; i < n; i++)
           csm[arr[i]].push_back(i);
         vector<int>vis(n,0);
        queue<int> q; 
        vis[0]=1;
        q.push(0);
        int step = 0;
       
        while (!q.empty()) {
            for (int size = q.size(); size > 0; --size) {
                int i = q.front(); q.pop();
                if (i == n - 1) return step; 
                vector<int>& next = csm[arr[i]];
                next.push_back(i - 1); next.push_back(i + 1);
                for (int j : next) {
                    if (j >= 0 && j < n && !vis[j]) {
                        vis[j] =1;
                        q.push(j);
                   }
               }
               next.clear(); 
            
            }
            step++;
        }
     return 0;   
    }
};