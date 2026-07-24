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
