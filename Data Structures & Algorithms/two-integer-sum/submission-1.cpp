class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> hash;  //[number,index]
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(hash.count(target-nums[i]) && (i != hash[target-nums[i]])) return {min(i,hash[target-nums[i]]),max(i,hash[target-nums[i]])};
        }
    }
};
