class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int>nums;
        for(int i = 1; i<n; i++){
            nums.push_back(i);
            fact = fact*i;
        }
       nums.push_back(n);
       k--;
       string ans  = "";
       while(true ){
        string p = to_string(nums[k/fact]);
        ans = ans +p;

        nums.erase(nums.begin()+k/fact);
        if(nums.size()==0) return ans ;
        k = k%fact;
        fact = fact/nums.size();
        
       }
       return ans ;
    
    }
};