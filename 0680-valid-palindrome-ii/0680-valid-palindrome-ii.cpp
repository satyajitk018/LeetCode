class Solution {
public:

    // Check whether s[l...r] is a palindrome
    bool check(int l, int r, string& s) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }

    // Recursive function
    bool f(int l, int r, string& s) {

        // Nothing left to compare
        if (l >= r) {
            return true;
        }

        // Characters match → move inward
        if (s[l] == s[r]) {
            return f(l + 1, r - 1, s);
        }

        // Characters don't match.
        // Delete either left or right character.
        return check(l + 1, r, s) ||
               check(l, r - 1, s);
    }

    bool validPalindrome(string& s) {
        return f(0, s.size() - 1, s);
    }
};
