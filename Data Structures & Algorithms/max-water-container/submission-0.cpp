class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
       int maxAns = INT_MIN;
       int start = 0;
       int end = heights.size()-1;
       while(start<end)
       {
        int water = min(heights[start],heights[end])*(end-start);
        maxAns = max(water,maxAns);
        if(heights[start]<heights[end]) start++;
        else end--;
       }  
       return maxAns;   
    }
};
