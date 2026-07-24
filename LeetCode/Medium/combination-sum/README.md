# Combination Sum

![Platform](https://img.shields.io/badge/LeetCode-%23FFA116-blue?style=flat-square) ![Difficulty](https://img.shields.io/badge/Medium-%23FFC01E?style=flat-square) ![Language](https://img.shields.io/badge/C%2B%2B-333333?style=flat-square)

| Property | Value |
|----------|-------|
| **Platform** | 🟡 LeetCode |
| **Problem** | [Combination Sum](https://leetcode.com/problems/combination-sum/) |
| **Difficulty** | Medium |
| **Language** | C++ |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Date** | Jul 25, 2026 |
| **Tags** | `Array`, `Backtracking` |

## 📝 Problem Description

Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

Example 3:

Input: candidates = [2], target = 1
Output: []

 

Constraints:

	- 1 <= candidates.length <= 30

	- 2 <= candidates[i] <= 40

	- All elements of candidates are distinct.

	- 1 <= target <= 40

### 💡 Intuition
The Combination Sum problem is a classic example of a combinatorial optimization problem. At its core, it involves finding all possible combinations of a given set of numbers that sum up to a target value. The key mathematical pattern behind this solution is the concept of backtracking, which is a form of recursion that allows us to explore all possible combinations of the input array.

In essence, backtracking works by recursively adding or removing elements from the current combination, and checking if the resulting sum equals the target value. If it does, we have found a valid combination, and we can add it to our result set. If not, we backtrack and try a different combination.

The intuition behind this approach is that we can represent the problem as a tree, where each node represents a possible combination of elements, and each edge represents the addition or removal of an element. By traversing this tree recursively, we can explore all possible combinations and find the ones that sum up to the target value.

### 🎯 Approach & Strategy
Our approach will be to use a recursive backtracking algorithm to explore all possible combinations of the input array. We will start by initializing an empty combination, and then recursively add or remove elements from the current combination, checking if the resulting sum equals the target value.

This approach is suitable for this problem because it allows us to efficiently explore all possible combinations of the input array, without having to explicitly generate all combinations. By using backtracking, we can avoid the exponential time complexity of generating all combinations, and instead achieve a time complexity of O(N^((T/M)+1)), where N is the length of the input array, T is the target sum, and M is the minimum value in the array.

### 🔍 Line-by-Line / Block Explanation

```cpp
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(result, current, candidates, target, 0);
        return result;
    }
    
    void backtrack(vector<vector<int>>& result, vector<int>& current, vector<int>& candidates, int remain, int start) {
        if (remain == 0) {
            result.push_back(current);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > remain) break;
            current.push_back(candidates[i]);
            backtrack(result, current, candidates, remain - candidates[i], i);
            current.pop_back();
        }
    }
};
```

*   `combinationSum` function: This is the main function that initializes the result set and the current combination, and calls the `backtrack` function to start the recursion.
*   `backtrack` function: This is the recursive function that explores all possible combinations of the input array. It takes five parameters: the result set, the current combination, the input array, the remaining sum, and the starting index.
*   `if (remain == 0)` block: This block checks if the remaining sum is zero, which means we have found a valid combination. If so, we add the current combination to the result set.
*   `for (int i = start; i < candidates.size(); i++)` loop: This loop iterates over the input array, starting from the current index. For each element, we check if it is greater than the remaining sum, and if so, we break the loop because all subsequent elements will also be greater.
*   `current.push_back(candidates[i])` and `backtrack(result, current, candidates, remain - candidates[i], i)` lines: These lines add the current element to the current combination and recursively call the `backtrack` function with the updated remaining sum and starting index.
*   `current.pop_back()` line: This line removes the last element from the current combination, which is necessary for backtracking.

### 🧪 Step-by-Step Dry Run

Let's consider an example with the input array `[2, 3, 5]` and the target sum `8`. We will walk through the recursion step by step:

| Step | Current Combination | Remaining Sum | Starting Index |
| --- | --- | --- | --- |
| 1   | `[]`                | 8             | 0              |
| 2   | `[2]`                | 6             | 0              |
| 3   | `[2, 2]`             | 4             | 0              |
| 4   | `[2, 2, 2]`          | 2             | 0              |
| 5   | `[2, 2, 2, 2]`       | 0             | 0              |
| 6   | `[2, 3]`             | 3             | 1              |
| 7   | `[2, 3, 3]`          | 0             | 1              |
| 8   | `[2, 5]`             | 1             | 2              |
| 9   | `[3]`                | 5             | 1              |
| 10  | `[3, 3]`             | 2             | 1              |
| 11  | `[3, 3, 2]`          | 0             | 1              |
| 12  | `[3, 5]`             | 0             | 2              |
| 13  | `[5]`                | 3             | 2              |
| 14  | `[5, 3]`             | 0             | 2              |

The final result set will contain the following combinations: `[2, 2, 2, 2], [2, 3, 3], [3, 3, 2], [3, 5], [5, 3]`.

### 📊 Complexity Analysis

| Metric | Complexity | Explanation |
| --- | --- | --- |
| **Time Complexity** | O(N^((T/M)+1)) | The time complexity is exponential in the worst case, where N is the length of the input array, T is the target sum, and M is the minimum value in the array. This is because we are using backtracking to explore all possible combinations. |
| **Space Complexity** | O(T/M) | The space complexity is linear in the worst case, where T is the target sum and M is the minimum value in the array. This is because we are using a recursive call stack to store the current combination and the remaining sum. |

### ⚠️ Critical Edge Cases

*   **Empty input array**: If the input array is empty, the function should return an empty result set.
*   **Single element input array**: If the input array contains only one element, the function should return a result set containing only that element if it equals the target sum.
*   **Repeated values in input array**: If the input array contains repeated values, the function should return a result set containing all possible combinations of those values.
*   **Overflow limits**: If the target sum is greater than the maximum value that can be represented by the data type, the function should handle the overflow correctly.

### 🎤 Interview Follow-Ups & Key Insights

*   **What if the input array contains negative numbers?** In this case, the problem becomes more complex because we need to consider all possible combinations of positive and negative numbers. We can modify the backtracking algorithm to handle negative numbers by adding an additional check for negative numbers.
*   **What if the target sum is zero?** In this case, the function should return a result set containing an empty combination.
*   **How can we optimize the algorithm for large input arrays?** We can optimize the algorithm by using a more efficient data structure, such as a hash set, to store the current combination and the remaining sum.

### 🔄 Alternative Approaches

| Approach | Time Complexity | Space Complexity | Description |
| --- | --- | --- | --- |
| **Brute Force** | O(N^T) | O(T) | This approach involves generating all possible combinations of the input array and checking if each combination sums up to the target value. |
| **Dynamic Programming** | O(N*T) | O(T) | This approach involves using a dynamic programming table to store the results of subproblems and avoiding redundant calculations. |
| **Backtracking** | O(N^((T/M)+1)) | O(T/M) | This approach involves using a recursive backtracking algorithm to explore all possible combinations of the input array. |

Note that the time and space complexities of the alternative approaches are different from the backtracking algorithm, and the choice of approach depends on the specific requirements of the problem.

## 💻 Solution

```c++
candidates
```

---
> *Auto-synced by [DSA AutoSync](https://github.com/dsa-autosync) on Jul 25, 2026*