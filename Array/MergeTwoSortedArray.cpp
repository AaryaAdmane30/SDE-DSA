

//  


//  ✨Time: O(n + m) → every element is visited exactly once

// ✨ Space: O(n + m) → merged array stores all elements


//  Example :
// {1, 3, 5, 7};
// {2, 4, 6, 8, 10};


    // Merged array: 1 2 3 4 5 6 7 8 10



    //  Two-Pointer Method  :



#include <iostream>
#include<vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &arr1 , vector<int> &arr2){

    vector<int>merge;

    int i = 0 , j = 0;


    //  i is the first array 1 and ... j is the sceond array pointer 

    while( i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            merge.push_back(arr1[i]);
            i++;
        } else {
            merge.push_back(arr2[j]    );
            j++;
        }
    }

    //  push the remaining elements of the arrays :

    while ( i < arr1.size()){
        merge.push_back(arr1[i]);
        i++;
    }
    
   while ( j < arr2.size()){
        merge.push_back(arr2[j]);
        j++;
    }
 return merge;
}

int main (){

    vector<int> arr1 = {1,3,4,5};
    vector<int> arr2 = {2,6,7,8};

    vector<int> merge = mergeSortedArrays(arr1, arr2);


    cout << "Merged Arrays are :";
    for (int num : merge){
        cout << num << " ";
    }
    return 0;
}




