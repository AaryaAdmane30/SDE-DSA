// Quick Sort is a classic sorting algorithm, often asked in coding rounds or DSA interviews.

// It tests your understanding of:

// Divide and Conquer

// Recursion



// Kth Smallest / Largest Element Problem :

// You’re asked to find the element that’s the Kth in sorted order —
// like the 3rd smallest or 2nd largest in an unsorted array.

// Example:

// arr = [7, 10, 4, 3, 20, 15]
// k = 3  // Kth element to find smallest or largest 

//  3th smallest  element =7 and 3th largest elment 


// Sorted → [3, 4, 7, 10, 15, 20]
//  3rd smallest = 7
//  3rd largest = 10



// Quick Select (Optimal Average Case)

// Quickselect is like a chill cousin of Quicksort —
// it partitions but only recurses on one side (the one that has kth element).
//  Average Time: O(n)
//  Worst Case: O(n²) (rare if random pivot is used)



// [   smaller elements   |   pivot   |   larger elements   ]
//         low ... pi-1          pi          pi+1 ... high


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> &arr , int low , int high){
    int pivot = arr[high]; // pivot kept as last element (high)

    int i = low; // pointer for the smaller element 

    for(int j = low ; j < high ; j++){
        if(arr[i] <= pivot){ // if current element is smaller than pivot then swap(arr[i], arr[j])
            swap(arr[i] , arr[j]); 
            i++;
        }
    }
    swap(arr[i], arr[high]); // place pivot at its correct position at index  i 
    return i ; // return pivot index 
}


int quickSelect(vector<int> &arr, int low , int high , int k){

    if(low <= high){
        int pi = partition(arr,  low,  high);

        if(pi == k) return arr[pi];  // if pivot index is equal to the key then return arr[pi]

        else if(pi < k) return quickSelect(arr, low, pi-1,  k); // if pivot index is less than K then go to the right side pi-1
        else if(pi > k) return quickSelect(arr,  pi + 1 , high,  k); // move to right 
    }

    return -1 ; // not found
}



int main() {

    vector<int arr = {7,10,4,3,20,15};
    int n = arr.size();
    int k = 3 ;

    cout << "Kth smallest element is :"<< quickSelect(arr, 0, arr.size() -1 , k -1);

    // kth largest = (n - k)th smallest
    cout << "Kth largest: " << quickSelect(arr, 0, n - 1, n - k);
    
}