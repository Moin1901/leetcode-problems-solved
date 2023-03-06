class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1,j=0,count=0;
        while(count!=k){
            
            if(j<arr.size() && arr[j]==i ){
                j++;
                i++;
                continue;
            }
            else{
                count++;
                i++;
            }
        }
        return i-1;
    }
};