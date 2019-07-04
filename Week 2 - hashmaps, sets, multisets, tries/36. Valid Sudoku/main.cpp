class Solution {
public:
    
    bool rowContainsDuplicate(vector<vector<char>> &board, int i, int j)
    {
        // Check up
        int startI = i - 1;
        while (startI > 0)
        {
            if (board[startI--][j] == board[i][j])
                return true;
        }
        
        // Check down 
        startI = i + 1;
        while (startI < 9)
        {
            if (board[startI++][j] == board[i][j])
                return true;
        }
        
        return false; 
    }
    
    bool colContainsDuplicate(vector<vector<char>> &board, int i, int j)
    {
        int startJ = j - 1;
        // Check left 
        while (j > 0)
        {
            if (board[i][startJ--] == board[i][j])
                return true;
        }
        
        // Check right
        startJ = j + 1;
        while (j < 9)
        {
            if (board[i][startJ++] == board[i][j])
                return true;
        }
        
        return false;
    }
    
    bool squareContainsDuplicate(vector<vector<char>> &board, int i, int j) 
    {
        return false;
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
                
        short rows[9] = {0};
        short cols[9] = {0};
        short squares[9] = {0};
        
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board.size(); j++)
            {
                if (board[i][j] != '.')
                {
                    short val = (short) (1 << (board[i][j] - '0'));
                    if (val & rows[i]) return false;
                    if (val & cols[j]) return false;
                    if (val & squares[3*(i/3) + j/3]) return false;
                    
                    rows[i] |= val;
                    cols[j] |= val;
                    squares[3*(i/3) + (j/3)] |= val;
                }
            }
        }
        return true;
        
    }
};