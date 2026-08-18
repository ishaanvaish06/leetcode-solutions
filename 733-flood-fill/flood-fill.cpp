class Solution {
public:
void bfs(int r,int c,int color,vector<vector<int>>& image,vector<vector<bool>>& visited)
{
    int initial=image[r][c];
    queue<pair<int,int>> q;
    visited[r][c]=true;
    q.push({r,c});
    image[r][c]=color;
    vector<pair<int,int>> dir={{1,0},{0,1},{-1,0},{0,-1}};
    while(q.size()!=0)
    {
        auto [cr,cc]=q.front();
        q.pop();
        for(auto p:dir)
        {
            int x=cr+p.first;
            int y=cc+p.second;
            if(x>=0 && x<image.size() && y>=0 && y<image[0].size() && !visited[x][y] && image[x][y]==initial)
            {
                q.push({x,y});
                visited[x][y]=true;
                image[x][y]=color;
            }
        }

    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row=image.size();
        int col=image[0].size();
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        bfs(sr,sc,color,image,visited);
        return image;
    }
};