class Solution {
public:

    
    int local_area;
    void dfs(vector<vector<int>>& grid, vector<vector<int>> & visited, int row, int col)
    {
        if(row >=grid.size() || row < 0 || col < 0 || col >= grid[0].size())
        {
            return ;
        }
        if(grid[row][col] != 1 )
        {
            return ;
        }
        if(grid[row][col] == 1 && visited[row][col] == 1)
        {
            return;
        }
        if(grid[row][col] == 1 && visited[row][col] == 0)
        {
            visited[row][col] = 1;
            local_area++;

            dfs(grid,visited,row+1,col);
            dfs(grid,visited,row-1,col);
            dfs(grid,visited,row,col+1);
            dfs(grid,visited,row,col-1);

        }
        return;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int max_area = 0;
    int r = grid.size();
    int c = grid[0].size();
    vector<vector<int>> visited (r , vector<int>(c,0));
     for(int i = 0 ; i < r; i++)
     {
        for(int j=0; j< c; j++)
        {
            if(grid[i][j] == 1 && visited[i][j]==0)
            {
                local_area = 0;
                dfs(grid, visited, i , j);
                if(local_area > max_area)
                {
                    max_area = local_area;
                }
            }
        }
     } 
     return max_area;  
    }
};
