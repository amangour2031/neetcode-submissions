class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        unordered_set<int>st;
        for(int num:nums) st.insert(num);
        int ans = 0;
        for(int n:st)
        {
            int count = 0;
            if(st.count(n-1) == 0)
            {
                count++;
                while(st.count(n+1) != 0)
                {
                    count++;
                    n++;
                }
                ans = max(count,ans);
            }
        }

        return ans;
    }
};