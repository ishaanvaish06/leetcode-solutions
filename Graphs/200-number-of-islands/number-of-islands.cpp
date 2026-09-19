class Solution {
public:
queue<pair<int,int>> q;
int a=0;
int b=0;
void bfs(int r,int c,vector<vector<bool>>& visited,vector<vector<char>>& grid)
{
    visited[r][c]=true;
    vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    q.push({r,c});
    while (q.size()!=0){
        auto [cr,cc]=q.front();
        q.pop();
        for(auto p:dir)
        {
            int x=cr+p.first;
            int y=cc+p.second;
            if(x>=0 && x<a && y>=0 && y<b && visited[x][y]==false && grid[x][y]=='1')
            {
                visited[x][y]=true;
                q.push({x,y});
            }
        }
    }

}
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        a=r;
        int c=grid[0].size();
        b=c;
        int island=0;
        vector<vector<bool>> visited(r,vector<bool>(c,false));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1' && !visited[i][j])
                {
                    island++;
                    bfs(i,j,visited,grid);
                }
            }
        }
        return island;
        
    }
};