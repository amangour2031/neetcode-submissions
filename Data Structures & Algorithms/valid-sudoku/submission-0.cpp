class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        vector<unordered_set<int>> row(9);
        vector<unordered_set<int>> col(9);
        vector<unordered_set<int>> box(9);

        for(int i=0;i<9;i++) //row
        {
            for(int j=0;j<9;j++) //col
            {
                if(board[i][j] != '.')
                {
                    int digit = board[i][j] - '0';
                    int boxIdx = (i/3)*3 + (j/3);
                    if(row[i].count(digit) ||
                       col[j].count(digit) ||
                       box[boxIdx].count(digit)) 
                    {
                        return false;
                    }   
                    else
                    {
                       row[i].insert(digit);
                       col[j].insert(digit);
                       box[boxIdx].insert(digit);
                    }
                }
            }
        }
        return true;
    }
};
