class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string encoded_string = "";
        for(string str:strs)
        {
            encoded_string += to_string(str.size());
            encoded_string += '#';
            encoded_string += str;
        }

        return encoded_string;
    }

    vector<string> decode(string s) 
    {
        vector<string> strs;
        int ptr = 0;
        while(ptr<s.size())
        {
            string letter = "";
            int size = 0;
            while(s[ptr] != '#')
            {
                size *= 10;
                size += s[ptr++]-'0';
            }
            ptr++;
            while(size>0)
            {
                letter += s[ptr++];
                size--;
            }
            strs.push_back(letter);
        }

        return strs;
    }
};
