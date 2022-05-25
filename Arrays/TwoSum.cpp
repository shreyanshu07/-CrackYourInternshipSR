class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++) {
            int ele = nums[i];
            int eleToFind = target - ele;
            if(seen.find(eleToFind) != seen.end() && seen[eleToFind] != i) {
                ans.push_back(i);
                ans.push_back(seen[eleToFind]);
                break;
            }
            
            seen[nums[i]] = i;
        }
        
        return ans;
    }
};
//hello 