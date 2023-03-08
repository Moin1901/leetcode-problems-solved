
class Solution {
public:
int minEatingSpeed(vector<int>& piles, int H) {
      int l=1,max=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>max){
                max=piles[i];
            }
        }
        int r = max;
        while (l <r) {
            int m = (l + r) / 2, total = 0;
            for (int p : piles)
                total += (p + m - 1) / m;
            if (total > H)
                l = m + 1;
            else
                r = m;
        }
        return l;
    }
};


// class Solution {
// public:
//     int check(vector<int>& piles, int h,int m){
//         int total=0;
//          for (int p : piles)
//                 total += (p + m - 1) / m;
//         return total;
//     }
//     int minEatingSpeed(vector<int>& p, int h) {
//         int l=0,max=0;
//         for(int i=0;i<p.size();i++){
//             if(p[i]>max){
//                 max=p[i];
//             }
//         }
//         int hi=max;
//         while(l<=hi){
//             int mid=(l+hi)/2;
//             if(check(p,h,mid)>h)l=mid+1;
//             else if(check(p,h,mid)<=h){
//                 hi=mid-1;
//             }
//         }
//         return l;
//     }
// };