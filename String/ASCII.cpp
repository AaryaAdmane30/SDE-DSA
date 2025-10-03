
#include <iostream>
#include <string>
using namespace std;

int main () {
    string str;
    cout << "Enter a word or sentence :";
    getline(cin, str);

    cout << "The ASCII Value is :" << endl;
    for(char c : str){
        cout << c << "   " << int(c) << endl;

    }
    return 0;

}