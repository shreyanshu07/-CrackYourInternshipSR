class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n,0);
        for(int x:nums){
            if(a[x-1]==0){
                a[x-1]++;
            }
            else{
                return x;
            }
        }
        return 0;
    }
};
