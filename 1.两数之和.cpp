/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        bool f = false;
        for (int i = 0; i < nums.size() && !f; i++)
        {
            int x = target - nums[i];
            for (int j = i + 1; j < nums.size() && !f; j++)
            {
                if (nums[j] == x)
                {
                    res.push_back(i);
                    res.push_back(j);
                    f = true;
                }
            }
        }
        return res;
    }
};
// @lc code=end

