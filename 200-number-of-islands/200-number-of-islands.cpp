class Solution {
  
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
         if(rows==0){
            return 0;
        }
        int cols=grid[0].size();
        int num_islands=0;
       
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
            if(grid[i][j]=='1'){
                 num_islands++;
                dfs(grid, i, j);
               
            }
            
            }
        }
        return num_islands;
    }
     private:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int rows=grid.size();
        int cols=grid[0].size();
        if(i<0||i==rows||j<0||j==cols||grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        dfs(grid,i-1,j);
            dfs(grid,i+1,j);
        dfs(grid,i,j-1);
            dfs(grid,i,j+1);
        
        
        
    }
};

