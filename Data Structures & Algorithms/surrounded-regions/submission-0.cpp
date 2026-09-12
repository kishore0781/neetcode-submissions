class Solution {
public:

    void dfs(vector<vector<char>>& brd, int row, int col)
    {
        if(row >= brd.size() || col >= brd[0].size() || row < 0 || col < 0)
        {
            return ;
        }

        if(brd[row][col] == 'O')
        {
            brd[row][col] = '#';
            dfs(brd, row+1, col);
        dfs(brd,row-1,col);
        dfs(brd,row,col-1);
        dfs(brd,row,col+1);
        }

        


    }
    void solve(vector<vector<char>>& board) {
        int r = board.size();
        int c = board[0].size();

        int fix_c = c -1;
        int fix_r = r - 1;

        //row fuxed 0
        // col loop
        for(int i=0; i <= fix_c; i++)
        {
            if(board[0][i] == 'O')
            {
                dfs(board, 0, i);
            }
        }
        // col fixed max
        //row loop
        for(int j=0; j <= fix_r; j++)
        {
            if(board[j][fix_c] == 'O')
            {
                dfs(board, j, fix_c);
            }
        }
        //row fixed max
        //col loop
        for(int k=0; k <= fix_c; k++)
        {
            if(board[fix_r][k] == 'O')
            {
                dfs(board, fix_r, k);
            }
        }
        //col fixed 0 
        // row loop 
        for(int l=0; l <= fix_r; l++)
        {
            if(board[l][0] == 'O')
            {
                dfs(board, l, 0);
            }
        }


        for(int m = 0; m < r; m++)
        {
            for(int n = 0; n < c; n++)
            {
                if(board[m][n] == 'O')
                {
                    board[m][n] = 'X';
                }
                if(board[m][n] == '#')
                {
                    board[m][n] = 'O';
                }
            }
        }

        
    }
};
