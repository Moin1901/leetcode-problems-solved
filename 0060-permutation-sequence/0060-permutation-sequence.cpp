class Solution {
public:
    string getPermutation(int n, int k) {
    vector<int>numbers;
        int fact=1;
        for(int i=1;i<n;i++){
            fact=fact*i;
            numbers.push_back(i);
            
        }
        numbers.push_back(n);
        k=k-1;
        string ans  ="";
        while(true){
        ans=ans+to_string(numbers[k/fact]);
        numbers.erase(numbers.begin()+k/fact);
        if(numbers.size()==NULL){
            break;
        }
        k=k%fact;
        fact=fact/numbers.size();
        }
        return ans;
        
    }
};