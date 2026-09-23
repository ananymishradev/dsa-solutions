class Solution {
public:
    bool Palindrome(const string& s, int low, int high) {
        if (low >= high) {
            return true;
        }
        
        if (!isalnum(s[low])) {
            return Palindrome(s, low + 1, high);
        }
        if (!isalnum(s[high])) {
            return Palindrome(s, low, high - 1);
        }
        
        if (tolower(s[low]) != tolower(s[high])) {
            return false;
        }
        
        return Palindrome(s, low + 1, high - 1);
    } 

    bool isPalindrome(string s) {
        return Palindrome(s, 0, s.length() - 1); 
    }
};