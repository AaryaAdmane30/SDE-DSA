#include <iostream>
#include <string>

using namespace std;


void reverseString(string &s) {  // pass by reference using &
    int start = 0;
    int end = s.length() -1 ;

    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
        
    }
}

int main() {
    string str ;
    cout << "Enter a string :";
    cin>> str;

    reverseString(str);

    cout << "Revsersed string is :"<<str << endl;
    return 0;
}
