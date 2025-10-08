#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;



// arr1 = {1, 2, 2, 3}
// arr2 = {2, 2, 4}

// Output : {2, 2}

vector <int> intersetionOfArrat(vector<int> &arr1 , vector<int> &arr2) {
    unordered_map<int,int> freq ; //map to store frequency count of the array elements 

    vector<int> result ; //to store the result 


     for(int num : arr1){ // go through the loop for arr1
        freq[num]++ ; // increase the frequency count move  1 ++
     }

     for( int num : arr2){
        if(freq[num] > 0){  // if the frequency is greater and exits }
            result.push_back(num); // at the freq count to the result 
            freq[num]--; // dec the freq count by 1 to avoid dupliications
     }
    }
    return result;
}

int main() {
    vector<int> arr1 = {1,2,2,3,4,4,5};
     vector<int> arr2 = {2,3,4,5,6};

     vector<int>result = intersetionOfArrat(arr1,arr2);

     for(int ans : result){
        cout << " The Intersection of two array is :"<< ans << " ";
        cout << endl;
        
     }

     return 0;

}