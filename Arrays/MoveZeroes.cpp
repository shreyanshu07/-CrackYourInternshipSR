class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();int zero=0,nzero=0;
        while(nzero<nums.size()){
            if(nums[nzero]==0){
                nzero++;
            }
            else{
                swap(nums[zero],nums[nzero]);
                zero++;nzero++;
            }
        }
            
        
    }
};
//TC : O(n) || Two Pointer Approach
