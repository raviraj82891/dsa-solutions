# Longest Common Prefix

![Platform](https://img.shields.io/badge/LeetCode-%23FFA116-blue?style=flat-square) ![Difficulty](https://img.shields.io/badge/Easy-%2300B8A3?style=flat-square) ![Language](https://img.shields.io/badge/C%2B%2B-333333?style=flat-square)

| Property | Value |
|----------|-------|
| **Platform** | 🟡 LeetCode |
| **Problem** | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) |
| **Difficulty** | Easy |
| **Language** | C++ |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Date** | Jul 25, 2026 |
| **Tags** | `Array`, `String`, `Trie` |

## 📝 Problem Description

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

 

Constraints:

	- 1 <= strs.length <= 200

	- 0 <= strs[i].length <= 200

	- strs[i] consists of only lowercase English letters if it is non-empty.

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
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());

        string first=strs.front();
        string second=strs.back();

        string result="";

        for(int i=0;i<min(first.length(),second.length());i++){
            if(first[i]!=second[i])
            break;
            result=result+first[i];
        }
        return result;
    }
};

```

---
> *Auto-synced by [DSA AutoSync](https://github.com/dsa-autosync) on Jul 25, 2026*