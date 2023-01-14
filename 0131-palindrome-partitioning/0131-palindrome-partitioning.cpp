class Solution {
private:
    void part(int index,string s,vector<string>&path,vector<vector<string>>&ans){
        if(index==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(ispalindrome(s,index,i)){
            path.push_back(s.substr(index,i-index+1));
            part(i+1,s,path,ans);
            path.pop_back();
            }
        }
        
    }
    bool ispalindrome(string s,int start,int end){
        while(start<=end){
        if(s[start++]!=s[end--])
            return false;
      }
            return true;
    }
    public:
    vector<vector<string>> partition(string s) {
        vector<string>path;
        vector<vector<string>>ans;
        part(0,s,path,ans);
        return ans;        
        
    }
};