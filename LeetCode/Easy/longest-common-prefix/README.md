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

### 💡 Intuition
The problem of finding the longest common prefix among a list of strings can be solved by exploiting the properties of sorted strings. When the list of strings is sorted, the first and last strings will have the most differences. By comparing these two strings, we can find the common prefix that is shared among all strings. This approach is based on the observation that the common prefix will be the same for all strings, regardless of their order.

### 🎯 Approach & Strategy
The approach used in this solution is to sort the list of strings and then compare the first and last strings to find the common prefix. This approach is suitable for this problem because it takes advantage of the fact that the common prefix will be the same for all strings. By sorting the list, we can easily identify the first and last strings, which will have the most differences. This approach also has a time complexity of O(n log n) due to the sorting step, which is acceptable for this problem.

### 🔍 Line-by-Line / Block Explanation

*   `sort(strs.begin(), strs.end());`: This line sorts the list of strings in ascending order. This is the key step that allows us to find the common prefix by comparing the first and last strings.
*   `string first = strs.front(); string second = strs.back();`: These lines extract the first and last strings from the sorted list.
*   `string result = "";`: This line initializes an empty string to store the common prefix.
*   `for (int i = 0; i < min(first.length(), second.length()); i++)`: This loop iterates over the characters of the first and last strings, up to the length of the shorter string.
*   `if (first[i] != second[i]) break;`: This line checks if the current characters in the first and last strings are different. If they are, the loop breaks, and the common prefix is returned.
*   `result = result + first[i];`: This line appends the current character to the common prefix.

### 🧪 Step-by-Step Dry Run

| Iteration | `i` | `first[i]` | `second[i]` | `result` |
| --- | --- | --- | --- | --- |
| 1 | 0 | 'f' | 'f' | 'f' |
| 2 | 1 | 'l' | 'l' | 'fl' |
| 3 | 2 | 'o' | 'o' | 'flo' |
| 4 | 3 | 'w' | 'w' | 'flow' |

Example input: `strs = ["flower", "flow", "flight"]`

### 📊 Complexity Analysis

| Metric | Complexity | Explanation |
| --- | --- | --- |
| **Time Complexity** | O(n log n) | The sorting step dominates the time complexity, where n is the number of strings. The subsequent loop has a time complexity of O(m), where m is the length of the shorter string. However, since m is typically much smaller than n, the overall time complexity is O(n log n). |
| **Space Complexity** | O(1) | The space complexity is constant, as we only use a few extra variables to store the first and last strings, and the common prefix. The input list of strings is sorted in-place, so no additional space is required. |

### ⚠️ Critical Edge Cases

*   **Empty input list**: The code handles this case correctly by returning an empty string.
*   **Single element in the input list**: The code handles this case correctly by returning the single string as the common prefix.
*   **Repeated values in the input list**: The code handles this case correctly by treating repeated values as distinct strings.
*   **Overflow limits**: The code does not have any overflow limits, as it uses the `std::string` class to store the input strings and the common prefix.

### 🎤 Interview Follow-Ups & Key Insights

*   **What if the input list is very large?**: In this case, the sorting step could be slow. An alternative approach would be to use a trie data structure to store the input strings, which would allow for faster lookup and prefix matching.
*   **What if the input strings have different lengths?**: The code handles this case correctly by using the `min` function to find the length of the shorter string.
*   **What if the input strings have non-ASCII characters?**: The code handles this case correctly by using the `std::string` class, which supports Unicode characters.

### 🔄 Alternative Approaches

| Approach | Time Complexity | Space Complexity | Description |
| --- | --- | --- | --- |
| **Brute Force** | O(n \* m) | O(1) | Compare each string with every other string to find the common prefix. |
| **Trie** | O(n \* m) | O(n \* m) | Store the input strings in a trie data structure and then traverse the trie to find the common prefix. |
| **Dynamic Programming** | O(n \* m) | O(n \* m) | Use a 2D array to store the lengths of the common prefixes between each pair of strings, and then find the longest common prefix. |

Note: The time and space complexities of the alternative approaches assume that the input list of strings has n strings, each of length m.

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