// Given a sorted array (could have duplicates), find:

// First occurrence of a key

// Last occurrence of the key



// Why Binary Search Variant?

// Simple binary search returns any occurrence, not specifically first or last.

// We modify binary search to move left or right even after finding the key.


// // Example :
// arr[] = {1, 2, 2, 2, 3, 4, 5}
// key = 2
// First occurrence = 1 (index)

// Last occurrence = 3 (index)

// 2 start from index 1 and ends at index 3 



// First Occurence  (leftmost if arr[mid] == key <=)

#include<iostream>
using namespace std;

int firstOccurance(int arr[], int n , int key){
    int low = 0;
    int high = n - 1 ;
    int result = -1 ; // not found 


    while (low <= high){
        int mid = low + (high -low) / 2 ;

    if ( arr[mid] ==  key ){
        result  = mid ;
        high = mid -1 ; // move <=

    }else if ( arr[mid] < key){
        low = mid + 1 ; // move right =>

    }else{
        high = mid - 1 ; // move left <=
    }
             
    
    }

return result ;


    
}




// Last Occurance (right most if arr[mid] == key )
int lastOccurance(int arr[], int n , int key){
    int low = 0;
    int high = n - 1 ;
    int result = -1 ; // not found 


    while (low <= high){
        int mid = low + (high -low) / 2 ;

    if ( arr[mid] ==  key ){
        result  = mid ;
        low = high + 1 ; // move =>

    }else if ( arr[mid] < key){
        low = mid + 1 ; // move right =>

    }else{
        high = mid - 1 ; // move left <=
    }
             
    
    }

return result ;


    
}


int main(){
    int arr[] = {1,2,2,2,3,4,5};

    int n = sizeof(arr)/ sizeof(arr[0]);

    int key = 2 ;

    int first = firstOccurance(arr,n,key);
   
int last =  lastOccurance(arr, n, key);

 cout << "First Occurance of: " <<first << endl;

 cout << "First Occurance of :"<<last << endl;

 return 0;


}


