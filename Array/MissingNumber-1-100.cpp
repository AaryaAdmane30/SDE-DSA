// Find the missing number in a given integer array of 1 to
//  100.


// given an array that should ideally have all numbers from 1 to 100, but one number is missing. You gotta find that number.


// Instead of typing 99 numbers, we’ll hardcode an array from 1 to 100 with one number missing (say 57).
//  You can change the missing number anytime


//  Time Complexity = O(n)

// Space Complexity = O(1)


//  Total sum from 1 t0 100 is
//    n(n+1) / 2  = 100(100+1 ) / 2 = 5050


#include <iostream>
using namespace std;

int main () {

    int arr[99] ; // one number is missing so
    int index = 0 ; // start from index 0


    //  // Fill array with numbers 1..100 but skip 57
  
    for (int i = 1 ; i <=100 ; i++){ // start from 1 coz 1 to 100 
        if( i == 57 ) continue; 
        arr[index++] = i ; // store 57 
           }


        //  now sum of the array with the missing value  the formula will be : 
        // umArr=5050−57=4993
           
        int sumArr = 0;
        for( int i = 0 ; i < 99 ; i++){
            sumArr += arr[i] ; // 5050 - 57  = 4993 (coz 57 is missing na)

        }
            //  Total sum of the array :

            int totalSum = 100 * (100 + 1) / 2;  // 5050  ( from 1to 100 )

            int missingNum = totalSum - sumArr ; // 5050-4993 = 3

            cout << "This missing Number in the array from 1 to 100 is :" << missingNum << endl;
             return 0;


     
    
}

