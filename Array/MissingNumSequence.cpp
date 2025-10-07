//  Find the number in the sequnece of array the number are in ses find one which is not in seq


#include <iostream>
#include <vector>
using namespace std;


int findMissingNumber(vector<int> &arr , int n ){
    int sum = n * (n+1) / 2 ; // total sum of n numbers
    for(int num : arr) {
        sum -=num; // subtracting each number from total sum 
    }

     return sum;  // Remaining sum is the missing number
}


//  for example if  n= 5 

//  sum = 5 ( 5+1) /2 = 15

//  arr = {,2,3,5}

//  15 - 1 = 14  , 15-2 = 13 , 15-3 = 12 , 15-5 = 10


int main () {

    int n ;
    cout << "Enter the value of n:";

    cin >> n; // should be in seq one missing 


    vector<int> arr(n-1);  // (n-1) bcoz one is mssing : toh  n= 4 
    cout << "Enter the elements of array :" << n-1   << endl;  
    for(int i = 0 ; i < n-1 ; i ++){
        cin >> arr[i];
    }


    cout << "Missing number in the array is :" << findMissingNumber(arr,n) << endl;
    return 0;



}


    