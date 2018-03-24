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

// step 0: Before we sort, we need to keep the number's index in the array. During sorting the original index will change.
// step 1: Sort all the numbers
// step 2: then set i = 0 and j = n-1
// step 3: check if (number[i]+number[j] == target) then return {i,j}
// step 4: IF NOT, check if(number[i]+number[j] > target) then --j
// step 5: IF NOT, check if(number[i]+number[j] > target) then --i

// reference:
// use the pair template it will be look like the following:
/*
 struct pair {
    int first;
    int second;
 };
 */


using namespace std;
class sumIndices {
public:
    vector<int> number_Sum(vector<int>& number, int target) {
        
        vector< pair<int, int> > SortNum;
        for(int i = 0; i<number.size(); i++) {
            pair<int, int> temp(number[i], i);
            SortNum.push_back(temp);
        }
        
        // Now lets sort number ARRAY
        sort(number.begin(), number.end());
        
        int i = 0;
        int j = number.size() - 1;
        while (i<j) {
            if(SortNum[i].first + SortNum[j].first == target) {
                vector<int> res{SortNum[i].second, SortNum[j].second};
                return res;
            } else if (SortNum[i].first + SortNum[j].first > target) {
                --j;
            } else {
                ++i;
            }
        }
        
        vector<int>result = {-1,-1};
        return result;
    }
};

int main(int argc, const char * argv[]) {
    vector<int> nums {2, 7, 11, 15};
    vector<int> indices;
    
    sumIndices mysln;
    indices =  mysln.number_Sum(nums, 17);
    
    // output format will be [0, 3]
    cout<< "["<<indices[0] <<", "<< indices[1]<<"]";
    return 0;
}
