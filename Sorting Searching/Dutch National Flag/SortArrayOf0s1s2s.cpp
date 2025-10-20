// Dutch national Flag :

//  Sort the arr[] only 0s , 1s , 2s sort it inn ascending order 


//  Input : arr[] = [0,2,1,2,0,1,0]
// ouput : arr[] = [0,0,1,1,2,2,2]



#include <bits/stdc++.h>

using namespace std;


vector<int>sortArray(vector<int> &arr){
    int low = 0 ,  mid = 0 , high = arr.size() - 1 ; 

    while( mid <= high){
        if ( arr[mid] == 0 ){
            swap ( arr[mid ] , arr[low]);
            low ++;
            mid ++;

        } else if (arr [mid]== 1){
            mid ++;

        }else { // arr[mid] == 2
            swap( arr[mid], arr[high]);
            high -- ;
        }
        }
        return arr ;
}


    int main() {
        vector<int> arr = {0,2,1,2,0,1,0};

        vector<int> result = sortArray(arr);

        for ( int x : result){
            cout << x << "   ";
            

        }
        
            return 0 ;
    }
