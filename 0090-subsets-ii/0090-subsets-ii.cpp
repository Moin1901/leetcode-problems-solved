class Solution {
private:
    void sums2(int ind,vector<int>&ds,vector<int>&arr,vector<vector<int>>&ans){
        if(ind<=arr.size()){
        ans.push_back(ds);}
        for(int i=ind;i<arr.size();i++){
            if(i!=ind&&arr[i]==arr[i-1])continue;
            ds.push_back(arr[i]);
            sums2(i+1,ds,arr,ans);
            ds.pop_back();
        }
    }
    public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        sums2(0,ds,nums,ans);
        return ans;
        
    }
    
};
