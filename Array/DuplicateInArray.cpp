// Find duplicate numbers in an array containing multiple
//  duplicates.


// Input: arr = [1, 3, 4, 2, 2, 3, 5, 1]
// Output: All duplicates → [1, 2, 3]


// We count every number first

// Then pick the numbers that appeared more than once

// Hashmap makes counting fast (O(1)) for each number

// Total time = O(n)

// Count frequencies

// Push only numbers that appear > 1

// Return vector of duplicates


// Take 1 → not in map → add 1: {1:1}

// Take 3 → {1:1, 3:1}

// Take 4 → {1:1, 3:1, 4:1}

// Take 2 → {1:1,3:1,4:1,2:1}

// Take 2 → already in map → increase count → {1:1,3:1,4:1,2:2}

// Take 3 → {1:1,3:2,4:1,2:2}

// Take 5 → {1:1,3:2,4:1,2:2,5:1}

// Take 1 → {1:2,3:2,4:1,2:2,5:1}


// Hashmap makes counting fast (O(1)) for each number

// Total time = O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findDuplicate(vector<int>& arr) {
    unordered_map<int,int> freq;  // store frequency of numbers like 1 appeared 1 time {1:1}
    vector<int> duplicates;       // store duplicates found if 2 appeared 2 times then {2:2}

    // count frequencies
    for (int num : arr) {
        freq[num]++;
    }

    // check which numbers appeared more than once
    for (auto it : freq) {
        if (it.second > 1) { // 2 >1 duplicate => {2:2}
            duplicates.push_back(it.first);
        }
    }

    return duplicates;  // return after finishing the loop
}

int main () {
    vector<int> arr = {1,2,3,4,5,2,1,5,8,2,8,4};

    vector<int> duplicate = findDuplicate(arr);

    cout << "Duplicates: ";
    for (int num : duplicate) cout << num << " ";
    cout << endl;

    return 0;
}
