// nums = [2, 7, 11, 15]
// target = 9
// Output = [0, 1]   // because nums[0] + nums[1] = 2 + 7 = 9


// given an array of integers nums and an integer target.
// You need to return the indices of the two numbers that add up to the target



//  Optimal Approach: Hash Map

// Time Complexity: O(n) (single pass)

// Space Complexity: O(n) (to store seen elements)


#include<iostream>
#include <vector>
#include <unordered_map> // Stores data as Key → Value pairs. 
using namespace  std;

vector<int> TwoSum (vector<int>&nums , int target){
    unordered_map<int,int> mp ; // store the index value of the sum (int = key , int = value of the index );
    


    for ( int i = 0 ;  i < nums.size() ; i++){
        int complement = target - nums[i] ;   // suppose target = 9 then nums[2] = 7 so ..9-7=2 


        //  check if the complement is in the nums array or not 


        if( mp.find(complement) != mp.end()){
            return {mp[complement], i}; // returning two indices complement the one obtanied and its index 
        }

        // store current value with its index
        mp[nums[i]] = i;
    }

    return {} ;
}
int main () {
    vector<int> nums = {2, 7, 3, 5, 6, 9};
    int target = 9;

    vector<int> ans = TwoSum(nums, target);

   
    if (!ans.empty()) {
        cout << "The Two Sum indices are: " << ans[0] << " and " << ans[1] << endl;
        cout << "Values are: " << nums[ans[0]] << " + " << nums[ans[1]] << " = " << target << endl; 
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}