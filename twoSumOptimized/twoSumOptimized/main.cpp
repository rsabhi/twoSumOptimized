//
//  main.cpp
//  twoSumOptimized
//
//  Created by Abhilash on 25/3/18.
//  Copyright © 2018 abhi. All rights reserved.
//
// <<<<< Optimized solution for O(nlogn) Solution >>>>

// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].
#include <iostream>
#include <vector>

// step 1: Sort all the numbers
// step 2: then set i = 0 and j = n-1
// step 3: check if (number[i]+number[j] == target) then return {i,j}
// step 4: IF NOT, check if(number[i]+number[j] > target) then --j
// step 5: IF NOT, check if(number[i]+number[j] > target) then --i



using namespace std;
class sumIndices {
public:
    vector<int> number_Sum(vector<int>& number, int target) {
        //
        
        
        
        vector<int>result = {-1,-1};
        return result;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
