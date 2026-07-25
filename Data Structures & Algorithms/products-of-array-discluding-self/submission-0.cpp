class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
         vector<int> res(n);

         for(int i = 0; i < n;i++){
            int prod = 1;
            for(int j= 0;j < n;j++){
                if(i !=j){
                    prod *= nums[j];
                }
             
                
            }
            res[i] = prod;
         }
        return res;
    }
};
