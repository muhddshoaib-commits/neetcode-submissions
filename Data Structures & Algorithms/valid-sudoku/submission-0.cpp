class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows
        for (int i = 0; i < 9; i++) {
            unordered_set<int> seen;
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') continue;
                if (seen.count(val)) return false;
                seen.insert(val);
            }
        }

        // check columns
        for (int j = 0; j < 9; j++) {
            unordered_set<int> seen;
            for (int i = 0; i < 9; i++) {
                char val = board[i][j];
                if (val == '.') continue;
                if (seen.count(val)) return false;
                seen.insert(val);
            }
        }

        // check 3x3 boxes
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                unordered_set<int> seen;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char val = board[boxRow*3 + i][boxCol*3 + j];
                        if (val == '.') continue;
                        if (seen.count(val)) return false;
                        seen.insert(val);
                    }
                }
            }
        }

        return true;
    }
};