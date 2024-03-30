/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除有序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 2;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[idx - 2]) {
                nums[idx ++] = nums[i];
            }
        }
        return idx < nums.size() ? idx : nums.size();
    }
};
// @lc code=end

