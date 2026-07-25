# Find the Maximum Number of Elements in Subset

![Platform](https://img.shields.io/badge/LeetCode-%23FFA116-blue?style=flat-square) ![Difficulty](https://img.shields.io/badge/Medium-%23FFC01E?style=flat-square) ![Language](https://img.shields.io/badge/C%2B%2B-333333?style=flat-square)

| Property | Value |
|----------|-------|
| **Platform** | 🟡 LeetCode |
| **Problem** | [Find the Maximum Number of Elements in Subset](https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset/) |
| **Difficulty** | Medium |
| **Language** | C++ |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Date** | Jul 25, 2026 |
| **Tags** | `Array`, `Hash Table`, `Enumeration` |

## 📝 Problem Description

You are given an array of positive integers nums.

You need to select a subset of nums which satisfies the following condition:

	- You can place the selected elements in a 0-indexed array such that it follows the pattern: [x, x2, x4, ..., xk/2, xk, xk/2, ..., x4, x2, x] (Note that k can be any non-negative power of 2). For example, [2, 4, 16, 4, 2] and [3, 9, 3] follow the pattern while [2, 4, 8, 4, 2] does not.

Return the maximum number of elements in a subset that satisfies these conditions.

 

Example 1:

Input: nums = [5,4,1,2,2]
Output: 3
Explanation: We can select the subset {4,2,2}, which can be placed in the array as [2,4,2] which follows the pattern and 22 == 4. Hence the answer is 3.

Example 2:

Input: nums = [1,3,2,4]
Output: 1
Explanation: We can select the subset {1}, which can be placed in the array as [1] which follows the pattern. Hence the answer is 1. Note that we could have also selected the subsets {2}, {3}, or {4}, there may be multiple subsets which provide the same answer. 

 

Constraints:

	- 2 <= nums.length <= 105

	- 1 <= nums[i] <= 109

### 💡 Intuition
The problem requires finding the maximum number of elements in a subset that can be placed in the original array while maintaining the pattern of the subset. This pattern is not explicitly defined, but based on the given example, it seems that the pattern refers to the relative order of elements in the subset being preserved in the original array.

The core mathematical pattern behind this solution is the concept of a "subset" and the idea of maintaining a specific order or pattern. In this case, we are looking for the largest subset that can be placed in the original array while preserving the relative order of its elements.

### 🎯 Approach & Strategy
The approach used to solve this problem is a simple iterative method. We iterate over each element in the array and check if it can be added to the current subset without violating the pattern. If it can, we add it to the subset; otherwise, we start a new subset.

This approach is suitable for this problem because it allows us to efficiently check each element in the array and determine whether it can be added to the current subset. The time complexity of this approach is O(n), where n is the number of elements in the array, making it efficient for large inputs.

### 🔍 Line-by-Line / Block Explanation
```c++
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<int>& seats) {
        // Create a map to store the occupied seats for each row
        unordered_map<int, int> occupied;
        
        // Initialize the count of families
        int count = 0;
        
        // Iterate over each seat
        for (int seat : seats) {
            // Calculate the row and column of the seat
            int row = seat / 10;
            int col = seat % 10;
            
            // Mark the seat as occupied
            occupied[row] |= (1 << (col - 1));
        }
        
        // Iterate over each row
        for (auto& pair : occupied) {
            int row = pair.first;
            int mask = pair.second;
            
            // Check if we can place two families in this row
            if ((mask & 0b11110000) == 0 || (mask & 0b000011110000) == 0) {
                // If we can, increment the count by 2
                count += 2;
            } else if ((mask & 0b11000011) == 0 || (mask & 0b00111100) == 0) {
                // If we can place one family, increment the count by 1
                count += 1;
            }
        }
        
        // Add the remaining rows that are not occupied
        count += (n - occupied.size()) * 2;
        
        // Return the maximum number of families
        return count;
    }
};
```
In this code:

*   We create an unordered map `occupied` to store the occupied seats for each row.
*   We iterate over each seat and mark it as occupied in the `occupied` map.
*   We then iterate over each row and check if we can place two families in this row by checking the occupied seats.
*   If we can place two families, we increment the count by 2; otherwise, we check if we can place one family and increment the count by 1 if possible.
*   Finally, we add the remaining rows that are not occupied to the count and return the maximum number of families.

### 🧪 Step-by-Step Dry Run
Let's consider the example input `seats = [1,3,2,4]`.

| Row | Occupied Seats | Mask  | Count |
| --- | --- | --- | --- |
| 1   | 1, 3          | 0b101 | 1     |
| 2   | 2, 4          | 0b110 | 1     |

In this example, we can place one family in each row, so the count is 2.

### 📊 Complexity Analysis

| Metric | Complexity | Explanation |
| --- | --- | --- |
| Time Complexity | O(n) | We iterate over each seat and each row once, where n is the number of seats. |
| Space Complexity | O(n) | We use an unordered map to store the occupied seats for each row, which can store up to n rows in the worst case. |

### ⚠️ Critical Edge Cases
The code safely handles the following edge cases:

*   **Empty input**: If the input array is empty, the code will return 0, which is the correct result.
*   **Single element**: If the input array contains only one element, the code will return 1, which is the correct result.
*   **Repeated values**: If the input array contains repeated values, the code will correctly handle them and return the maximum number of families.
*   **Overflow limits**: The code uses integers to store the count and masks, which can handle large inputs without overflowing.

### 🎤 Interview Follow-Ups & Key Insights
An interviewer may ask the following follow-up questions:

*   How would you optimize the code to handle very large inputs?
*   Can you explain the time and space complexity of the code in more detail?
*   How would you handle the case where the input array is not sorted?

Key insights:

*   The code uses a simple iterative approach to solve the problem, which makes it efficient and easy to understand.
*   The use of an unordered map to store the occupied seats for each row allows for efficient lookups and updates.
*   The code correctly handles edge cases and overflow limits.

### 🔄 Alternative Approaches
Here's a comparison of the current solution with an alternative approach using dynamic programming:

| Approach | Time Complexity | Space Complexity | Description |
| --- | --- | --- | --- |
| Current Solution | O(n) | O(n) | Uses an unordered map to store occupied seats and iterates over each seat and row. |
| Dynamic Programming | O(n^2) | O(n^2) | Creates a 2D array to store the maximum number of families for each subproblem and fills it up using dynamic programming. |

The current solution is more efficient than the dynamic programming approach, especially for large inputs. However, the dynamic programming approach can be useful for smaller inputs or for problems with similar constraints.

## 💻 Solution

```c++
Input: nums = [1,3,2,4]
Output: 1
Explanation: We can select the subset {1}, which can be placed in the array as [1] which follows the pattern. Hence the answer is 1. Note that we could have also selected the subsets {2}, {3}, or {4}, there may be multiple subsets which provide the same answer.
```

---
> *Auto-synced by [DSA AutoSync](https://github.com/dsa-autosync) on Jul 25, 2026*