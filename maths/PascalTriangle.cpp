//  n =5 
//   1
// 1 1
//  1 2 1 
//  1 3 3 1 
//  1 4 6 4 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        int val = 1;  // first value is always 1
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1); // formula to get next value in row
        }

        cout << endl;
    }

    return 0;
}
//  supoose i = 4 ( row 4 )

// val = 1 

// j =0  val = 1 * ( 4-0) / ( )0 + 1 = 4 print 4 

// val = 4 .. etc 

// like his  so for row 4  values will be => 1 4 6 4 1 