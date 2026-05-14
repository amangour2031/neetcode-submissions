class Solution {
public:
    bool isPalindrome(string s) 
    {
      int start = 0;
      int end = s.size()-1;

      while(start<end)
      {
        if(isalnum(s[start]))
        {
            if(isalnum(s[end]))
            {
                if(tolower(s[start++]) == tolower(s[end--])) continue;
                else return false;
            }
            else end--;
        }
        else start++;
      }       
      return true;
    }
};
