Easy 53. Maximum Subarray
==========================

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.



=============================================================================================

1. Naive Brute-Force approach  [O(N^2)]
```````````````````````````````````````
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_sum = INT_MIN, sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum=0;
            for(int j=i; j<nums.size(); j++)
            {
               sum+=nums[j];
               if(sum>max_sum)
                   max_sum = sum;
            }
            
        }
        return max_sum;
    }
};

=> Time Limit Exceeded



2. Kadane's Algothirm : [ O[n] ]
------------------------------------

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's Algorithm
        
        int max_sum = INT_MIN;
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]+ sum > nums[i])
                sum = nums[i]+ sum;
            else
                sum = nums[i];
            
            if(sum> max_sum)
                max_sum = sum;
            
            // sum = max(nums[i]+ sum , sum);
            // max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};

Runtime: 130 ms, faster than 65.56% of C++ online submissions for Maximum Subarray.
Memory Usage: 67.8 MB, less than 12.36% of C++ online submissions for Maximum Subarray.

