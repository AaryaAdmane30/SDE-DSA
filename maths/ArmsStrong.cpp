
//  153 = 1^3 + 5^3 + 3^3  = 153  .. This is armstronng 

// 9474 = 9^4 + 4^4 + 7^4 + 4^4  9474 ✅ Armstrong

//  123 1^3 + 2^3 + 3^3 = 36 →  =123 ❌ Not Armstrong


#include <iostream>
#include <cmath>
using namespace std;

int main(){
int num , originalNum , remainder  , n = 0 ;
double result = 0.0;

cout << "Enter an integer ";
cin >> num;


//  Count number of digits
originalNum = num ;
int temp = num ;
while (temp != 0){
    temp /= 10 ;
    ++n ; // last reminder with be the number of digits

}

//  153 / 10 = 3 ( after the loop ) 153 % 10 = 3 last digit 


//  calculate the sum of poweers of each dgigit (n)

 temp = num ;
while(temp != 0){
    remainder = temp % 10 ; // last digit 
    result += pow(remainder ,n ); // 3^3 = 27 
    temp /= 10 ; /// remove the last digit 


}

//  suppose Remainder = 3 -> 3^3 = 27

//  suppose Remainder = 5 -> 5^3 = 125

//  suppose Remainder = 5 -> 5^3 = 1

//  result +=  ( remainder , n) => 27 + 125 +1 = 153 

if 
    ( result == originalNum){
    cout << originalNum << " " << "is an Armstrong number "<< endl;

}else{
    cout << originalNum << "is not an  Armstrong number "<< endl;

}
return 0;
}


