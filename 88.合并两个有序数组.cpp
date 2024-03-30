/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m + n - 1, i1 = m - 1, i2 = n - 1;
        while (i1 >= 0 && i2 >= 0) {
            if (nums1[i1] > nums2[i2]) {
                nums1[idx] = nums1[i1];
                i1 --;
            }
            else {
                nums1[idx] = nums2[i2];
                i2 --;
            }
            idx --;
        }

        while (i1 >= 0) {
            nums1[idx] = nums1[i1];
            idx --, i1 --;
        }

        while (i2 >= 0) {
            nums1[idx] = nums2[i2];
            i2 --, idx --;
        }
    }
};
// @lc code=end

