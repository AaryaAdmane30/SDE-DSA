// Loop 1 (i = 0)

// str1[0] = 'r' → count['r']++ → count['r'] = +1

// str2[0] = 'c' → count['c']-- → count['c'] = -1

// Now:

// r = +1
// c = -1
// a = 0
// e = 0

// 🔹 Loop 2 (i = 1)

// str1[1] = 'a' → count['a']++ → count['a'] = +1

// str2[1] = 'a' → count['a']-- → count['a'] = 0

// Now:

// r = +1
// c = -1
// a = 0   (cancelled out )
// e = 0

// 🔹 Loop 3 (i = 2)

// str1[2] = 'c' → count['c']++ → count['c'] = -1 + 1 = 0

// str2[2] = 'r' → count['r']-- → count['r'] = +1 - 1 = 0

// Now:

//  Loop 4 (i = 3)

// str1[3] = 'e' → count['e']++ → count['e'] = +1

// str2[3] = 'e' → count['e']-- → count['e'] = +1 - 1 = 0


// r = 0   (cancelled out )
// c = 0   (cancelled out )
// a = 0
// e = 0

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isAnagram(string str1, string str2) {
    // Check lengths once
    if (str1.length() != str2.length()) {
        return false;
    }

    // Frequency array for ASCII chars
    vector<int> count(256, 0);

    // Count frequency for str1 and str2
    for (int i = 0; i < str1.length(); i++) {
        count[(unsigned char)str1[i]]++; // increment for str1
        count[(unsigned char)str2[i]]--; // decrement for str2
    }

    // Check if all counts became 0
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2)) {
        cout << "It is Anagram" << endl;
    } else {
        cout << "Not Anagram" << endl;
    }
    return 0;
}
