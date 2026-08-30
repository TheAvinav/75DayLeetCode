class Solution {
public:
    bool isValid(const vector<string>& board, int row, int col, int n) {
        for (int k = 1; k <= row; k++) {
            // 1. Straight up
            if (board[row - k][col] == 'Q') return false;

            // 2. Up-Left diagonal
            if (col - k >= 0 && board[row - k][col - k] == 'Q') return false;

            // 3. Up-Right diagonal 
            if (col + k < n && board[row - k][col + k] == 'Q') return false;
        }
        return true;
    }

    void solve(int row, int n, vector<string>& board, vector<vector<string>>& answer) {
        // Base case: placed queens on all n rows
        if (row == n) {
            answer.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isValid(board, row, col, n)) {
                board[row][col] = 'Q';          // Place Queen
                solve(row + 1, n, board, answer); // Recurse to next row
                board[row][col] = '.';          // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> answer;
        vector<string> board(n, string(n, '.'));
        solve(0, n, board, answer);
        return answer;
    }
};