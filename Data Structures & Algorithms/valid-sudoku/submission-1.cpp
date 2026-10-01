class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row;
        unordered_map<int,unordered_set<int>> col;
        map<vector<int>, unordered_set<int>> mat;

        for(int i = 0; i < 9; i++) {
            row.clear();
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;
                if(row.find(board[i][j]) != row.end()) {
                    return false;
                } else {
                    row.insert(board[i][j]);
                }

                if(col[j].find(board[i][j]) != col[j].end()) {
                    return false;
                } else {
                    col[j].insert(board[i][j]);
                }

                if(mat[{i/3,j/3}].insert(board[i][j]).second == false) return false;
            }
        }

        return true;
    }
};
