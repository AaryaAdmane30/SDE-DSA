// // Binary Search is used only on sorted arrays (ascending or descending).
// // It repeatedly divides the search interval in half — much faster than linear search (O(log n) vs O(n)).

// . Characteristics

// Each node has at most two children: left and right.

// No duplicate elements (usually, depends on implementation).

// Enables fast searching, insertion, and deletion.

// Tree can be balanced or unbalanced. Balanced trees are faster.

// 3. Advantages

// Fast search: O(h), where h = height of tree.

// Ordered structure: In-order traversal gives sorted sequence.

// Supports dynamic set operations: insert, delete, search efficiently.




//         50
//        /  \
//      30    70
//     / \    / \
//    20 40  60 80



#include<iostream>
using namespace std;



// . Interview tip

// Most coding platforms & companies like iterative, because recursion can fail on huge inputs.

// But if asked in discussion, you can say:

// “Recursive is elegant, but iterative is safer for large datasets because it avoids stack overflow.”

//  Iterative approach To search in BST :

int binarySearchTree(int arr[], int n, int key ){

    int low = 0;
    int high = n - 1;


    while( low <= high){
        int mid = low + ( high - low) / 2 ; // to avoid overflow 

        // 2 + (9 - 2) / 2 = 5 ...mid = 5

        if( arr[mid] == key) {
            return mid; // mid found
        }else if 
            (arr[mid] < key){
                low = mid + 1 ; // move to right

            }else {
                high = mid -1 ; //move to left 
            }
        return -1 ; //nothing found 
    }
}



    int main() {
        int arr[] = {2,3,4,5,6,5,6,7,8,9};
        //{2,3,4,5,6,5,6,7,8,9}

        int n = sizeof(arr) / sizeof(arr[0]); // => 5 * 4 = 20/4 = 5 =>  sizeoff(5) * 4 bites  = 20 / 4 hytes

        int key = 5;

        int result =  binarySearchTree(arr, n,key);

        cout << "Element is found at inde in BST is :";

        for(int ans : result){
            cout << ans << "";

        }
        return 0;
    }





