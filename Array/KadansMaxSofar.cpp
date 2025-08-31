//  Maximum Subararay Sum 
//  nums : 1  -2 3 -2 5 -3 7 -1

// output : 12


// Time complexity : 0(n) means linear Time complexity (sinngle pass) and SC : 0(n) in place consta space


// we have two var :
// maxSoFar : to store the max summ till now
// currSum : to Store the current sum 

//  Example "
// 
// i = 0  index, nums =  [1  -2 3 -2 5 -3 7 -1]

// currsum[i] = 1 , nums[i]= 1  maxSoFar= 1


//  2 .  nums[i] = -2 , index at i = 1 

//  currsum = max( nums[i], currsum + nums[i]) // currsum hre is the prev sum obtained
// currsum = max(-2 ,1+ -2 )

// currsum = (-2,-1)
//  currsum = -1

// maxSoFar = max(maxsoFar , currSum) = max (1,-1) = 1  // maxSofar is from prev step at i=0 

//  3. so now to till end loop 
//  at index i = 2 , nums[i] = 3 do like this and go on:


#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currSum = nums[0];
    int maxSoFar = nums[0];

    for (int i = 1; i < nums.size(); i++) { // start from index 1 since nums[0] is already used (initial ar index 0)
        currSum = max(nums[i], currSum + nums[i]);
        maxSoFar = max(maxSoFar, currSum); // compare with max so far
    }

    return maxSoFar;  
}

int main() {
    vector<int> nums = {1, -2, 3, -2, 5, -3, 7, -1};
    cout << "Maximum Subarray Sum is: " << maxSubArray(nums) << endl;
    return 0;
}
