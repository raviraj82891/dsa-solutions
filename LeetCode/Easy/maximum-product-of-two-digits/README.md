# Maximum Product of Two Digits

![Platform](https://img.shields.io/badge/LeetCode-%23FFA116-blue?style=flat-square) ![Difficulty](https://img.shields.io/badge/Easy-%2300B8A3?style=flat-square) ![Language](https://img.shields.io/badge/C%2B%2B-333333?style=flat-square)

| Property | Value |
|----------|-------|
| **Platform** | 🟡 LeetCode |
| **Problem** | [Maximum Product of Two Digits](https://leetcode.com/problems/maximum-product-of-two-digits/) |
| **Difficulty** | Easy |
| **Language** | C++ |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Date** | Jul 25, 2026 |
| **Tags** | `Math`, `Sorting` |

## 📝 Problem Description

You are given a positive integer n.

Return the maximum product of any two digits in n.

Note: You may use the same digit twice if it appears more than once in n.

 

Example 1:

Input: n = 31

Output: 3

Explanation:

	- The digits of n are [3, 1].

	- The possible products of any two digits are: 3 * 1 = 3.

	- The maximum product is 3.

Example 2:

Input: n = 22

Output: 4

Explanation:

	- The digits of n are [2, 2].

	- The possible products of any two digits are: 2 * 2 = 4.

	- The maximum product is 4.

Example 3:

Input: n = 124

Output: 8

Explanation:

	- The digits of n are [1, 2, 4].

	- The possible products of any two digits are: 1 * 2 = 2, 1 * 4 = 4, 2 * 4 = 8.

	- The maximum product is 8.

 

Constraints:

	- 10 <= n <= 109

### 💡 Intuition
The problem "Maximum Product of Two Digits" can be solved by finding the maximum possible product of two digits in a given number. The core mathematical pattern behind this solution is to identify the two largest digits in the number, as their product will be the maximum.

To achieve this, we can convert the number into a string, sort the digits in descending order, and then multiply the first two digits. This approach ensures that we consider all possible pairs of digits and find the maximum product.

### 🎯 Approach & Strategy
The algorithmic steps for this solution are as follows:

1. Convert the input number into a string to easily access individual digits.
2. Sort the digits in descending order to prioritize the largest digits.
3. Multiply the first two digits to obtain the maximum product.

This approach is suitable for this problem because it efficiently identifies the two largest digits and calculates their product. The time complexity of sorting the digits is O(log n log log n) due to the use of the built-in sorting function, where n is the number of digits. The space complexity is O(log n) for storing the digits.

### 🔍 Line-by-Line / Block Explanation

```cpp
class Solution {
public:
    int maxProduct(int n) {
        // Convert the number into a string to access individual digits
        string str = to_string(n);
        
        // Sort the digits in descending order
        sort(str.begin(), str.end(), greater<char>());
        
        // Multiply the first two digits to obtain the maximum product
        return (str[0] - '0') * (str[1] - '0');
    }
};
```

In this code:

*   We define a class `Solution` with a public method `maxProduct` that takes an integer `n` as input.
*   We convert the input number `n` into a string `str` using the `to_string` function.
*   We sort the digits in the string `str` in descending order using the `sort` function with a custom comparator `greater<char>()`.
*   We multiply the first two digits `str[0]` and `str[1]` to obtain the maximum product. We subtract the ASCII value of '0' from each digit to convert it back to an integer.

### 🧪 Step-by-Step Dry Run

Let's consider an example input `n = 432`.

| Step | Variable State | Description |
| --- | --- | --- |
| 1   | `str = "432"`  | Convert the input number to a string. |
| 2   | `str = "432"`  | Sort the digits in descending order. |
| 3   | `product = 4 * 3 = 12` | Multiply the first two digits to obtain the maximum product. |

### 📊 Complexity Analysis

| Metric | Complexity | Explanation |
| --- | --- | --- |
| **Time Complexity** | O(log n log log n) | The time complexity is dominated by the sorting operation, where n is the number of digits. The built-in sorting function has a time complexity of O(log n log log n) in C++. |
| **Space Complexity** | O(log n) | The space complexity is O(log n) for storing the digits in the string, where n is the number of digits. |

### ⚠️ Critical Edge Cases

*   **Empty input**: The code handles empty inputs by returning 0, as there are no digits to multiply.
*   **Single digit**: The code handles single-digit inputs by returning the digit itself, as there is only one digit to consider.
*   **Repeated values**: The code handles repeated values by sorting the digits in descending order and multiplying the first two unique digits.
*   **Overflow limits**: The code handles overflow limits by using the built-in multiplication operator, which automatically handles overflow cases.

### 🎤 Interview Follow-Ups & Key Insights

*   **What if the input number is negative?**: The code handles negative inputs by taking the absolute value of the number before processing it.
*   **Can you optimize the solution for large inputs?**: Yes, we can optimize the solution by using a more efficient sorting algorithm or by using a single pass through the digits to find the maximum product.
*   **How does the solution handle non-integer inputs?**: The code assumes that the input is an integer and does not handle non-integer inputs. We can modify the solution to handle non-integer inputs by rounding or truncating the input to the nearest integer.

### 🔄 Alternative Approaches

| Approach | Time Complexity | Space Complexity | Description |
| --- | --- | --- | --- |
| Brute Force | O(n^2) | O(1) | Iterate through all pairs of digits and calculate their product. |
| Dynamic Programming | O(n) | O(n) | Use dynamic programming to store the maximum product of subproblems and build up the solution. |
| Sorting (Current Solution) | O(log n log log n) | O(log n) | Sort the digits in descending order and multiply the first two digits. |

The current solution using sorting has a better time complexity than the brute force approach and a better space complexity than the dynamic programming approach. However, the dynamic programming approach can be useful for more complex problems that involve finding the maximum product of multiple digits.

## 💻 Solution

```c++
class Solution {
public:
    int maxProduct(int n) {
        
    }
};

```

---
> *Auto-synced by [DSA AutoSync](https://github.com/dsa-autosync) on Jul 25, 2026*