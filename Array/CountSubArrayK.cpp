// We use prefix sums + a hashmap (unordered_map in C++).
// Prefix sum: sum of elements from index 0 to i.

//  he hashmap stores “how many times a prefix sum has appeared.

//  prefixCount keeps track of how many times a prefix sum occurred.

// Initialize with {0:1} → means before starting, sum=0 exists once (helps when the subarray starting at index 0 itself has sum = k).


//  prefix[i]=arr[0]+arr[1]+...+arr[i]

// For arr = [1,2,3]:

// prefix[0] = 1

// prefix[1] = 3

// prefix[2] = 6



// store in a hashmap how many times each prefix sum has appeared.

// As we loop through array, calculate running sum = prefix[j].

// Check if (sum - K) exists in hashmap → if yes, that means there’s a prefix[i-1] which forms a subarray with sum = K.

// Increase count.

// Store current prefix sum in hashmap.



// Subarrays with sum = 3:

// [1, 2]

// [3]


#include <iostream>
#include <vector>
#include <unordered_map> // to store the preffix sum how many times that apperaed 
using namespace std;

int countSubarraysWithSumK(vector<int>& arr, int k) {
    unordered_map<int,int> prefixCount; // to store the preffix count  how many times that apperaed 
    prefixCount[0] = 1; // base case: sum 0 exists once
    
    int sum = 0, count = 0;
    
    for (int num : arr) {
        sum += num;  // update running sum

        // check if sum-k seen before (sum=6 then 6-3 = 3 exists in map count ++ )
        if (prefixCount.find(sum - k) != prefixCount.end()) {
            count += prefixCount[sum - k];
        }

        // record current sum
        prefixCount[sum]++;
    }
    
    return count;
}

int main() {
    vector<int> arr = {1,2,3};
    int k = 3;
    cout << countSubarraysWithSumK(arr, k) << endl;
}


//  Example : 

// Step 1: num = 1

// sum = sum + 1 = 1

// Check sum - k = 1 - 3 = -2 → not in map → count stays 0

// Add sum to map → prefixCount = {0:1, 1:1}

// Step 2: num = 2

// sum = 1 + 2 = 3

// Check sum - k = 3 - 3 = 0 → exists in map (freq = 1) → count = 0 + 1 = 1

// Add sum to map → prefixCount = {0:1, 1:1, 3:1}

//  Subarray found: [1,2]

// Step 3: num = 3

// sum = 3 + 3 = 6

// Check sum - k = 6 - 3 = 3 → exists in map (freq = 1) → count = 1 + 1 = 2

// Add sum to map → prefixCount = {0:1, 1:1, 3:1, 6:1}

//  Subarray found: [3]

// Step 4: num = -1

// sum = 6 + (-1) = 5

// Check sum - k = 5 - 3 = 2 → not in map → count stays 2

// Add sum to map → prefixCount = {0:1, 1:1, 3:1, 6:1, 5:1}

// (No subarray sum = 3 ending here)

// Step 5: num = 2

// sum = 5 + 2 = 7

// Check sum - k = 7 - 3 = 4 → not in map → count stays 2

// Add sum to map → prefixCount = {0:1, 1:1, 3:1, 6:1, 5:1, 7:1}

// (No subarray sum = 3 ending here)