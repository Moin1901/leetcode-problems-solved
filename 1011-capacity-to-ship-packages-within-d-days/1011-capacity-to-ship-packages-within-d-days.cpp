class Solution {
public:
    bool func(int mid,vector<int>weight,int n,int D){
         int days=1;
        int sum=0;
            for(int i=0;i<n;i++){
                if(sum+weight[i]<=mid){
                    sum+=weight[i];
                }
                else{
                    sum=weight[i];
                    days++;
                }
            }
        if(days<=D)return true ;
        return false;
    }
    int shipWithinDays(vector<int>& weight, int D) {
        int n=weight.size();
        int max=0,sum=0;
        int ans;
        for(int i=0;i<n;i++){
            if(max<weight[i]){
                max=weight[i];
            }
            sum+=weight[i];
        }
        int l=max;
        int h=sum;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
           
            if(func(mid,weight,n,D)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return ans;
    }
};