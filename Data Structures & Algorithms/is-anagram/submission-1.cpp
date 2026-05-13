class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length())
            return false;
        unordered_map<char,int> freqMapS;
        unordered_map<char,int> freqMapT;
        for(char ch:s)
        {
            freqMapS[ch]++;
        }
        for(char ch:t)
        {
            freqMapT[ch]++;
        }
        for(char ch:s)
        {
            if(freqMapS[ch] == freqMapT[ch]) continue;
            else return false;
        }
        return true;
    }
};
