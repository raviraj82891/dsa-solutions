# Longest Palindromic Substring

![Platform](https://img.shields.io/badge/LeetCode-%23FFA116-blue?style=flat-square) ![Difficulty](https://img.shields.io/badge/Medium-%23FFC01E?style=flat-square) ![Language](https://img.shields.io/badge/C%2B%2B-333333?style=flat-square)

| Property | Value |
|----------|-------|
| **Platform** | 🟡 LeetCode |
| **Problem** | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) |
| **Difficulty** | Medium |
| **Language** | C++ |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Date** | Jul 25, 2026 |
| **Tags** | `Two Pointers`, `String`, `Dynamic Programming` |

## 📝 Problem Description

Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:

Input: s = "cbbd"
Output: "bb"

 

Constraints:

	- 1 <= s.length <= 1000

	- s consist of only digits and English letters.

## 🎯 Approach

<!-- Describe your approach to solving this problem -->

## 📊 Complexity Analysis

| Metric | Complexity |
|--------|-----------|
| **Time** | `O(?)` |
| **Space** | `O(?)` |

## 💻 Solution

```c++
            right++;
        }
    }

    string longestPalindrome(string s) {
        if (s.size() <= 1) return s;

        for (int i = 0; i < s.size(); i++) {
            expand(s, i, i);       // Odd length
            expand(s, i, i + 1);   // Even length
        }

        return s.substr(start, maxLen);
    }
};

```

---
> *Auto-synced by [DSA AutoSync](https://github.com/dsa-autosync) on Jul 25, 2026*