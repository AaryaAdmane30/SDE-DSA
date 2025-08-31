

//  ✨✨✨This keeps the merged array sorted automatically.


//  ✨Time: O(n + m) → every element is visited exactly once

// ✨ Space: O(n + m) → merged array stores all elements


//  Example :
// {1, 3, 5, 7};
// {2, 4, 6, 8, 10};


    // Merged array: 1 2 3 4 5 6 7 8 10



    //  Two-Pointer Method  :


// Initialize two pointers i = 0 (for arr1) and j = 0 (for arr2).

// Compare arr1[i] and arr2[j]:

// If arr1[i] < arr2[j], add arr1[i] to the merged array and i++.

// Else, add arr2[j] to the merged array and j++.

// If one array ends, append the remaining elements of the other array.


#include <iostream>
#include<vector>
using namespace std;


vector<int> mergeTwoSortedArray(vector<int>& arr1 , vector<int>& arr2){
    int i = 0 , j =0;
     vector<int> merged;


while( i < arr1.size() && j < arr2.size()){
    if(arr1[i] < arr2[j]) {
        merged.push_back(arr1[i]);
        i ++ ;

    }else {
        merged.push_back(arr2[j]);
        j++ ;
    }
}

// Append all the remaining array :

while( i < arr1.size() ) merged.push_back(arr1[i++]);
while( j < arr2.size()) merged.push_back(arr2[j++]);


return merged;
}



int main() {

    vector<int> arr1 = {1,2,3,6,9,7};
    vector<int> arr2 = {3,4,5,8,10};

    //  Output - 1 2 3 3 4 5 6 8 9 7 10 


    vector<int> merged = mergeTwoSortedArray(arr1, arr2);

    for(int ans: merged) cout << ans << " ";
    return 0;
}







