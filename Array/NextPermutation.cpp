
//Time: O(n) → single pass + reverse.

// Space: O(1) → in-place.


// given a sequence of numbers in a vector nums[].
// You need to rearrange them into the lexicographically next greater permutation.

// If no such permutation exists (i.e. it’s the last permutation), rearrange into the lowest possible order (sorted ascending).

//  Example :

// Input:  nums = [1,2,3]
// Output: [1,3,2]   // next permutation

// Input:  nums = [1,1,5]
// Output: [1,5,1]


// Input:  nums = [3,2,1]

// Output: [1,2,3]   // already the highest, so wrap to smallest


//  lexicographically - how words are arranged in a dictionary
// apple < banana because "a" < "b".

// cat < dog because "c" < "d"
 
