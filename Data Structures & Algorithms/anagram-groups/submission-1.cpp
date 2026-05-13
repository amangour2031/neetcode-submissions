class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        map<vector<int>,vector<string>> mp;
        for(string s:strs)
        {
            vector<int> hashMap(256,0);
            for(char ch:s)
            {
                hashMap[ch]++;
            }
            mp[hashMap].push_back(s);
        } 
        
        vector<vector<string>> ans;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};