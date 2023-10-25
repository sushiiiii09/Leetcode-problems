class Solution {
public:
    bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        while (start < end && !isalnum(s[start])) {
            start++; // Skip non-alphanumeric characters from the beginning
        }
        while (start < end && !isalnum(s[end])) {
            end--; // Skip non-alphanumeric characters from the end
        }

        if (tolower(s[start]) != tolower(s[end])) {
            return false; // If characters do not match, it's not a palindrome
        }

        start++;
        end--;
    }

    return true;
    }
};