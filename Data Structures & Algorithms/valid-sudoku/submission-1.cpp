class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row[r][d]: digit d already seen in row r
        bool row[9][9] = {false};
        // col[c][d]: digit d already seen in column c
        bool col[9][9] = {false};
        // box[b][d]: digit d already seen in box b
        bool box[9][9] = {false};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char ch = board[r][c];
                if (ch == '.') continue;

                int d = ch - '1';              // 0..8 for digits '1'..'9'
                int b = (r / 3) * 3 + (c / 3); // box index 0..8

                if (row[r][d] || col[c][d] || box[b][d]) {
                    return false; // duplicate found
                }

                row[r][d] = col[c][d] = box[b][d] = true;
            }
        }

        return true;
    }
};