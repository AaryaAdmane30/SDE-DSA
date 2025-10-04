//  [ 0,1,0,3,12]

// ouput : [1,13,12,0,0]



#include <iostream>
#include <vector>
using namespace  std;

void moveZerosToEnd(vector<int> &arr){
    int n = arr.size();
    int pos = 0 ; // position to place the next non-zero element



    for(int i = 0 ; i < n ; i++){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos ++;
        }

        // 
    }
    //  fill the remaining positions with zeros

     while(pos < n) {
        arr[pos] = 0;
        pos++;
     }

}

int main() {
    vector<int> arr = {0,1,0,3,12};
    moveZerosToEnd(arr);

    for(int x : arr)cout << x << " ";
    cout << endl;
    return 0;
}

// arr = [0, 1, 0, 3, 12], n = 5, pos = 0

// i = 0: arr[0] == 0 → skip

// state: [0, 1, 0, 3, 12], pos = 0

// i = 1: arr[1] == 1 → place at arr[pos] = arr[0] = 1; pos++
// state: [1, 1, 0, 3, 12], pos = 1

// i = 2: arr[2] == 0 → skip
// state: [1, 1, 0, 3, 12], pos = 1

// i = 3: arr[3] == 3 → place at arr[pos] = arr[1] = 3; pos++
// state: [1, 3, 0, 3, 12], pos = 2

// i = 4: arr[4] == 12 → place at arr[pos] = arr[2] = 12; pos++
// state: [1, 3, 12, 3, 12], pos = 3

// Loop finished. Now fill zeros from index pos to n-1:

// pos = 3 → arr[3] = 0, pos = 4 → [1, 3, 12, 0, 12]

// pos = 4 → arr[4] = 0, pos = 5 → [1, 3, 12, 0, 0]

