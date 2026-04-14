class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>m;
       int prd;
       for(int i=0;i<nums.size();i++){
           prd=1;
        for(int j=0;j<nums.size();j++){
          if(i!=j)
          prd=nums[j]*prd;
        }
          m.push_back(prd);

       }
       
       return m;
       
       }

};
