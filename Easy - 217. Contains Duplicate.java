
Easy 217. Contains Duplicate 
===============================

Share
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true


===========================================================================================================================================

1. Java Code 
`````````````
import java.util.*;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);
        for(int i = 0; i< nums.length-1; i++)
        {
            if(nums[i]==nums[i+1])
                return true;
            
        }
        return false;
    }
}


Runtime: 24 ms, faster than 19.26% of Java online submissions for Contains Duplicate.
Memory Usage: 68.3 MB, less than 61.67% of Java online submissions for Contains Duplicate.



2. C++ Code :
``````````````
#include <bits/stdc++.h>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
                return true;
        }
        
       return false;
    }
};

OR 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> uniq_array(nums.begin(), nums.end()); // SET STORES UNIQUE elements
                            
        if(uniq_array.size() < nums.size())
                            return true;
        else
            return false;
    }
};