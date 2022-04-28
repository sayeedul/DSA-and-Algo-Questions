
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> hash;
        //vector<int> ans;
        int len = nums.size();
        for(int i=0;i<len;i++)
        {
            hash.insert(make_pair(nums[i],i));
        }
        
        for(int i=0;i<len;i++)
        {
            int complement = target - nums[i];
            unordered_map<int,int>::iterator it = hash.find(complement);
            if(it!= hash.end() && it->second != i)
            {
                return {i, hash[complement]};
            } 
        }
        return {};
    }
};