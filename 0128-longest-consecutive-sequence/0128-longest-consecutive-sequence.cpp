class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        int longest = 0;  
        for(int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        
        for(int num : nums) {
            if(st.find(num - 1) == st.end()) {
                int currentNum = num;
                int currentStreak = 1;
                
                while(st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    currentStreak++;
                }
                
                longest = max(longest, currentStreak);
            }
        }
        
        return longest;
    }
};