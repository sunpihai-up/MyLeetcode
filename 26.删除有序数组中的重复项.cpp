/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1])
                nums[idx ++] = nums[i];
        }
        
        return idx;
    }
};
// @lc code=end

