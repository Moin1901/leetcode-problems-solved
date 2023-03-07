class Solution {
public:
    long long int check(vector<int>&a , long long int givenTime)
    {
        long long int totalTrips = 0;
        for(auto x : a)
        {
            long long int val = x;
			
            totalTrips += (givenTime / val);
        }
        return totalTrips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
      long long l= 1;
      long long h = 1e14;
        while(l<h)
        {
            long long  mid =(l+h)/2;
            
            if(check(time , mid) >= totalTrips)
                h = mid;
            else
                l= mid+1;
        }
        return l;
        
        
    }
};