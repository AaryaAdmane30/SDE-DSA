// intersection means → the common elements present in both arrays.
// Example:

// arr1 = [1,2,3,4,5]  
// arr2 = [3,4,5,6,7]  

// Intersection = [3,4,5]



//  Approach :


// Use a set or unordered_set.

// Store elements of arr1 in a set.

// Traverse arr2 and check which are present in the set.

// Time = O(n + m)  // traverse arr1 and arr2 at 0(n) and  o(m) = O(n + m)

// Space = O(n)


#include <iostream>
#include <unordered_set>  // unordered_set? (Stores only unique keys (no duplicates).

// It’s a C++ STL container that stores unique elements only.

// No duplicates allowed.

// Internally, it’s implemented using a hash table, so operations like insert, find, erase are O(1) average.

// “Unordered” means elements are not stored in any particular order.
#include <vector>
using namespace std;



vector<int> intersectionOfTwoArray(vector<int>& arr1 , vector<int>& arr2){
    unordered_set<int> set(arr1.begin() ,arr1.end()); // put all the element of arr1 in SET



    // 🪄✨✨✨✨✨  A set automatically removes duplicates — if you insert the same element multiple times, it still keeps only one copy.
    unordered_set<int>  resSet ; // to avoid duplications 


    for(int num2 : arr2){
        if(set.find(num2) != set.end()) { // find if the arr2 exists in the arr1 of the set 

        resSet.insert(num2); //add it to the result  .. put the arr2 element in results 
    }


}

// /Convert set to vector
vector<int> result(resSet.begin() , resSet.end());
return result;


}
int main () {

    vector<int> arr1 = {1,2,2,3,4};
    vector<int> arr2 = {1,2,3,4,5,6};


    vector<int> ans = intersectionOfTwoArray(arr1,arr2);

    for( int x : ans) cout << "The intersection of Two Array is:"<< x << endl;
    return 0;
}