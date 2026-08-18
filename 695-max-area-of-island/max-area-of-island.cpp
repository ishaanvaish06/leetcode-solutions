class Solution {
public:
int maxArea=INT_MIN;
int a=0;
int b=0;
void bfs(int r,int c,vector<vector<bool>>& visited,vector<vector<int>>& grid)
{
    visited[r][c]=true;
    int area=1;
    queue<pair<int,int>> q;
    q.push({r,c});
    vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
    while(q.size()!=0)
    {
        auto [cr,cc]=q.front();
        q.pop();
        for(auto p:dir)
        {
            int x=cr+p.first;
            int y=cc+p.second;
            if(x>=0 && x<a && y>=0 && y<b && !visited[x][y] && grid[x][y]==1)
            {
                visited[x][y]=true;
                q.push({x,y});
                area++;
            }
        }
    }
    maxArea=max(area,maxArea);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        a=row;
        int col=grid[0].size();
        b=col;
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1 && !visited[i][j])
                {
                    bfs(i,j,visited,grid);
                }
            }
        }
        return max(maxArea,0);
    }
};