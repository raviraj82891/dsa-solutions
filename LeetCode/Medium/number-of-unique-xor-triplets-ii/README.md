# Number of Unique XOR Triplets II

![Platform](https://img.shields.io/badge/LeetCode-%23FFA116-blue?style=flat-square) ![Difficulty](https://img.shields.io/badge/Medium-%23FFC01E?style=flat-square) ![Language](https://img.shields.io/badge/C%2B%2B-333333?style=flat-square)

| Property | Value |
|----------|-------|
| **Platform** | 🟡 LeetCode |
| **Problem** | [Number of Unique XOR Triplets II](https://leetcode.com/problems/number-of-unique-xor-triplets-ii/) |
| **Difficulty** | Medium |
| **Language** | C++ |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Date** | Jul 25, 2026 |
| **Tags** | `Array`, `Math`, `Bit Manipulation`, `Enumeration` |

## 📝 Problem Description

You are given an integer array nums.

A XOR triplet is defined as the XOR of three elements nums[i] XOR nums[j] XOR nums[k] where i <= j <= k.

Return the number of unique XOR triplet values from all possible triplets (i, j, k).

 

Example 1:

Input: nums = [1,3]

Output: 2

Explanation:

The possible XOR triplet values are:

	(0, 0, 0) → 1 XOR 1 XOR 1 = 1

	(0, 0, 1) → 1 XOR 1 XOR 3 = 3

	(0, 1, 1) → 1 XOR 3 XOR 3 = 1

	(1, 1, 1) → 3 XOR 3 XOR 3 = 3

The unique XOR values are {1, 3}. Thus, the output is 2.

Example 2:

Input: nums = [6,7,8,9]

Output: 4

Explanation:

The possible XOR triplet values are {6, 7, 8, 9}. Thus, the output is 4.

 

Constraints:

	- 1 <= nums.length <= 1500

	- 1 <= nums[i] <= 1500

## 🎯 Approach

<!-- Describe your approach to solving this problem -->

## 📊 Complexity Analysis

| Metric | Complexity |
|--------|-----------|
| **Time** | `O(?)` |
| **Space** | `O(?)` |

## 💻 Solution

```c++
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) 
    {
        const int MAXX = 2048;

        vector<bool> dp(MAXX, false), ndp
        (MAXX);

        dp[0] = true;

        for (int t = 0; t < 3; t++) {
            fill(ndp.begin(), ndp.end(), 
            false);

            for (int x = 0; x < MAXX; x++) {
                if (!dp[x]) continue;


```

---
> *Auto-synced by [DSA AutoSync](https://github.com/dsa-autosync) on Jul 25, 2026*