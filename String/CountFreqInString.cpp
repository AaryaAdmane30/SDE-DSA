#include <iostream>
#include <string>
using namespace std;


int main() {
    string str;
    cout << "Enter a string :";
   getline(cin,str) ; 

    int freq[256] = {0}; // frequency array for all ASCII characters ...

    for(char c : str){
        freq[(int)c]++;


        
    }

    cout << "Character Frequency in string is :" << endl;
    for(int i = 0 ; i < 256 ; i++){
        if(freq[i] != 0){
            cout << char(i) << " : " << freq[i] << endl;
        }
    }
    return 0;

}


// for (char c : str) → goes through each character c in the string.

// freq[(int)c]++ → increments the count at the index corresponding to the ASCII value of c.

// Example: if c = 'A', (int)c = 65, so freq[65]++ incre