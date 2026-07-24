# 4Sum

![Platform](https://img.shields.io/badge/LeetCode-%23FFA116-blue?style=flat-square) ![Difficulty](https://img.shields.io/badge/Medium-%23FFC01E?style=flat-square) ![Language](https://img.shields.io/badge/C%2B%2B-333333?style=flat-square)

| Property | Value |
|----------|-------|
| **Platform** | 🟡 LeetCode |
| **Problem** | [4Sum](https://leetcode.com/problems/4sum/) |
| **Difficulty** | Medium |
| **Language** | C++ |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Date** | Jul 25, 2026 |
| **Tags** | `Array`, `Two Pointers`, `Sorting` |

## 📝 Problem Description

Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

	- 0 <= a, b, c, d < n

	- a, b, c, and d are distinct.

	- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

 

Constraints:

	- 1 <= nums.length <= 200

	- -109 <= nums[i] <= 109

	- -109 <= target <= 109

## 🎯 Approach

<!-- Describe your approach to solving this problem -->

## 📊 Complexity Analysis

| Metric | Complexity |
|--------|-----------|
| **Time** | `O(?)` |
| **Space** | `O(?)` |

## 💻 Solution

```c++
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] +

```

---
> *Auto-synced by [DSA AutoSync](https://github.com/dsa-autosync) on Jul 25, 2026*