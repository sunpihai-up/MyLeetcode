/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1, res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != res)
                cnt --;
            else
                cnt ++;
            
            if (cnt == 0)
                cnt = 1, res = nums[i];
        }
        return res;
    }
};
// @lc code=end

