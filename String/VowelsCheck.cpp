// You’re given a string (say "Hello World"), and you need to count how many vowels (a, e, i, o, u) are inside it.

#include <iostream>
#include <string>
using namespace std;

int main () {
    string str ;
    cout << "Enter a word or sentence:";
    getline(cin, str);  // <-- this allows spaces in input( getline means you you did hii aarya lol it will count the vowels in the whole sentence )


    int count = 0;
    for ( char c :str){
        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;

            
        }
 
}
   cout << "Number of vowels = " << count << endl;
    return 0;
        
    
}