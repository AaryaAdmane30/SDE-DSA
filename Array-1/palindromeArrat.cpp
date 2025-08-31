//  Palindrome :
// input : hannah 

// Ouput : true :
//  check last and first char are same or not



#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {          // Compare until the pointers meet
            if (s[left] != s[right]) {
                return false;           // If mismatch, it's not a palindrome
            }
            left++;
            right--;
        }
        return true;                    // All checks passed
    }
};

int main() {
    Solution sol;

    string text1 = "hannah";
    string text2 = "madam";
    string text3 = "aarya";

    cout << text1 << " -> " << (sol.isPalindrome(text1) ? "true" : "false") << endl;
    cout << text2 << " -> " << (sol.isPalindrome(text2) ? "true" : "false") << endl;
     cout << text2 << " -> " << (sol.isPalindrome(text3) ? "true" : "false") << endl;

    return 0;
}
