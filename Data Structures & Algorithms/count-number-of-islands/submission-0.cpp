class Solution {
public:
    
    void dfs(int row, int col,vector<vector<char>>& gr, vector<vector<bool>>& visited )
    {
        
        if (row<0 || row >=gr.size() || col<0 || col >=gr[0].size() )
        {
            return;
            
        }
        if(gr[row][col] == '0')
        {
            return;
        }
        if(gr[row][col] == '1' && visited[row][col] == true)
        {
            return ;
        }
        if(gr[row][col] == '1' && visited[row][col] == false)
        {
            visited[row][col] = true;
            dfs(row-1, col , gr, visited);
            dfs(row+1,col,gr, visited);
            dfs(row,col+1,gr, visited);
            dfs(row,col-1,gr, visited);
            
        }

        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()) return 0;
        int count = 0;
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>> visited (r,vector<bool>(c,false));

        for(int i = 0; i < r; i++)
        {
            for(int j =0; j < c; j++)
            {
                if(grid[i][j] == '1' && visited[i][j] == false)
                {
                    dfs(i,j,grid,visited);
                    count++;

                }
            }
        }
        return count;
    }
    

};
