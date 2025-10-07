// Input: "I love C++ programming"
// Output: 4


#include <iostream>
#include <string>
using namespace  std;


int main() {
    string str;
    cout << "Enter a string :";
      getline(cin, str); //    that the full sentence (with spaces) is read.


    int count = 0 ; // count of words 
    //  I love coding  => I => count = 1  count = 2 => love 

    bool isWord = false ; // to track if we are in a word or not 

    for(char c : str) {
        if(isspace(c)) {   // space found 
            isWord = false; // we do not fond inside a word   

        }else {
            if(!isWord){ // if there is no word before
                isWord = true ; // we found a word
                count ++ ; //
                 
            }
        }
    }

        
        cout << "Number of words in string is : "<< count << endl;
        return 0;


        
    }
