class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=1000,res=1;
        
        if(nums.empty()) return 0;
        int n=nums.size(),curr=nums[0];
        
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]) res++; 
        }//finding number of blank spaces at last of array i.e number of repeated elements
        bool p=false;
        
        for(int i=0;i<n-1;i++){
            if(p) nums[i]=x;
            if(curr==nums[i+1]) p=true;
            else{
                p=false;
                curr=nums[i+1];
            }
        }// Setting the repeated value as 1000 so that when we sort it 1000 value comes at the last of array
        if(p) nums[n-1]=x;
        sort(nums.begin(),nums.end());
        return res;
        
    }
};
