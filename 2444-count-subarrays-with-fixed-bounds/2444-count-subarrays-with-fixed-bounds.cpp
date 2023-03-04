class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
       long res=0;
        bool minFound = false, maxFound = false;
        int start=0;
        int minstart=0;
        int maxstart=0;
        for(int i=0;i<nums.size();i++){
          int num = nums[i];
            if (num < mink || num > maxk) {
                minFound = false;
                maxFound = false;
                start = i+1;
            }
           if (num == mink) {
                minFound = true;
                minstart = i;
            }
            if (num == maxk) {
                maxFound = true;
                maxstart = i;
            }
             if (minFound && maxFound) {
                res += (min(minstart, maxstart) - start + 1);
            }
        }
        return res;
    }
};