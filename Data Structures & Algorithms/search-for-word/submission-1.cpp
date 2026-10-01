class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        bool res = false;
        int idx = 0;
        set<pair<int,int>> st;

        for(int i = 0; i < board.size(); i++) {
            for(int j =0; j < board[0].size(); j++) {
                st.clear();
                helper(board, word, i, j, idx, st, res);
                if(res) break;
            }
        }

        return res;
    }

    void helper(vector<vector<char>>& board, string &word, int r, int c, int idx, set<pair<int,int>> &st, bool &res) {

        if(idx == word.size() || res) {
            cout<<"hi";
            res = true;
            return;
        }

        if((r < 0 || r == board.size()) || (c < 0 || c == board[0].size()) || (board[r][c] != word[idx] || st.count({r,c}))){
            cout<<"/";
            return;
        }
        st.insert({r,c});

        helper(board, word, r - 1, c, idx + 1, st, res);
        helper(board, word, r, c + 1, idx + 1, st, res);
        helper(board, word, r + 1, c ,idx + 1, st, res);
        helper(board, word, r, c - 1, idx + 1, st, res);

        st.erase({r,c});
    }
};
