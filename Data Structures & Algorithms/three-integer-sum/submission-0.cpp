class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            int start = i+1;
            int end = nums.size()-1;
            while(start<end)
            {
                int sum = nums[i] + nums[start] + nums[end];
                if(sum == 0) {ans.insert({nums[i],nums[start],nums[end]}); start++; end--;}
                else if(sum > 0) end--;
                else start++;
            }
        }
        vector<vector<int>> res;
        for(auto vec:ans)
        {
            res.push_back(vec);
        }
        return res;
    }
};
