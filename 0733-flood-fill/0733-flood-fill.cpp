class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>>ans=image;
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        dfs(sr,sc,image,color,ans,delrow,delcol);
        return ans;
        
        
    }
    void dfs(int row,int col,vector<vector<int>>&image,int newcolor,
            vector<vector<int>>&ans,int delrow[],int delcol[]){
        ans[row][col] = newcolor; 
        int m=image.size();
        int n=image[0].size();
        int initcol=image[row][col];
        image[row][col]=newcolor;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0&&nrow<m&&ncol>=0&&ncol<n&&image[nrow][ncol]==initcol&&ans[nrow][ncol]!=newcolor){
                dfs(nrow,ncol,image,newcolor,ans,delrow,delcol);
            }
                
        }
        
        
        
    }
};