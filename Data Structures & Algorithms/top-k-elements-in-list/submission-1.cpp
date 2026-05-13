class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> freqMap;

        for(int num : nums)
        {
            freqMap[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto it : freqMap)
        {
            bucket[it.second].push_back(it.first);
        }

        vector<int> ans;

        for(int i = bucket.size() - 1; i >= 0 && k > 0; i--)
        {
            for(int num : bucket[i])
            {
                ans.push_back(num);
                k--;

                if(k == 0)
                    break;
            }
        }

        return ans;
    }
};