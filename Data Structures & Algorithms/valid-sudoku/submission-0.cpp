class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> row;
        unordered_map<int,unordered_set<int>> col;
        map<vector<int>, unordered_set<int>> mat;

        for(int i = 0; i < 9; i++) {
            row.clear();
            for(int j = 0; j < 9; j++) {
                // cout<<"hety :" <<i<<j;
                if(board[i][j] == '.') continue;
                if(row.find(board[i][j]) != row.end()) {
                    // cout<<"r";
                    return false;
                } else {
                    row.insert(board[i][j]);
                }

                if(col[j].find(board[i][j]) != col[j].end()) {
                    // cout<<"c "<<i<<j<<": "<<board[i][j];
                    return false;
                } else {
                    col[j].insert(board[i][j]);
                }

                auto it = mat.find({i/3, j/3});
                if(it != mat.end()) {
                    // cout<<"c "<<i<<j<<": "<<board[i][j];
                    if(it->second.count(board[i][j])) {
                    return false;
                    }
                    it->second.insert(board[i][j]);
                } else {
                    // cout<<"sec "<<i<<j<<": "<<board[i][j];
                    mat[{i/3, j/3}] = {board[i][j]};
                }
            }
        }

        return true;
    }
};
