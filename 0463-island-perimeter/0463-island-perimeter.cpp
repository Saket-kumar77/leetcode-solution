class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int peri=0;
        int row[]={-1,1,0,0};
        int col[]={0,0,1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    peri+=4;
                    for(int k=0;k<4;k++){
                        int a=i+row[k];
                        int b=j+col[k];
                        if(a>=0 && a<n && b<m && b>=0 &&grid[a][b]==1)
                        peri--;
                    }
                }
            }
        }
        return peri;
    }
};