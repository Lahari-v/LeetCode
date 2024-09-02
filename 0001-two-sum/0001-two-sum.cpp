//Better Solution: TC - O(N), SC - O(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            int rem = target - nums[i]; 
            if(map.find(rem) != map.end()) {
                return {i, map[rem]};
            }
            map[nums[i]] = i;
            //map[key] = val;
        }
        return {};
    }
};