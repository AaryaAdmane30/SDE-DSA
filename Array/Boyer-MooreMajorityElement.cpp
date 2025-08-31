//  Boyer-Moore Majority Voting ALgorithm :


// We need to find the majority element in an array, i.e., the element that appears more than ⌊n/2⌋ times.
// Example:
// nums = [2,2,1,1,1,2,2] 
// Output: 2


// Boyer-Moore Idea:

// We pair off different elements and cancel them out.

// The element that survives in the end is the majority element (since it occurs more than n/2 times, it cannot be fully canceled out).

//  In other words suppose : 2 appears more times os it cannot be canceledd




//  Example :


//  here we have counting = 1   candidate (maxMajority) = None
//  so if num == Candidate (store and increament count ++) 
// if the num !== candidate then decreament count (count --) 


//  Example :
// nums = [2,2,1,1,1,2,2]


//  n= 7 and 2 appearded =4 times soo 7>4 and  4> 7/2 🪄 then majority element = 2  

// ✨😋     // Boyer-Moore always returns a candidate, but that candidate is only a true majority if it occurs more than  candiate > 7/2 times.
// Start: count=0, candidate=None




// 2 → num=2 candidate=2, count=1        // now increament the count as candidate(2) = num(2)

// 2 → count=2

// 1 → count=1

// 1 → count=0 (decrement the count bcoz candidate ==! num)

// 1 → candidate=1, count=1

// 2 → count=0   (decrement the count bcoz candidate ==! count)

// 2 → candidate=2, count=1

// Final candidate = 2 (majority element).


// Time Complexity: O(n) → one pass

// Space Complexity: O(1) → only two variables


#include <iostream>
#include <vector>
using namespace std;


int majorityCount(vector<int>& nums){
int count = 0 , candidate = 0 ;


for ( int num : nums) {
    if(count == 0 ){
        candidate = num ; // new candidate num =2 then candidate = num
    }


   if (num == candidate) { // candidate = 2 and num the the array is =2 then 
    count ++;

   }else { // if candidate =! num 

    count --; // decrease count -1  // cancel out 
   }
}
   return candidate;
}







int main () {
    vector<int> nums = {1,1,1,1,1,2,2,3,4}; // // n=9, 1 occurs 5 times > 9/2 
    // Boyer-Moore always returns a candidate, but that candidate is only a true majority if it occurs more than   > 9/2 times.

    cout << "Majority Element is :"<< majorityCount(nums) << endl;
    return 0;
}




