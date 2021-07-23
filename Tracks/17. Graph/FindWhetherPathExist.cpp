// Rest of the code is already given as Driver Code

class Solution
{
    public:
    bool isvalid(int x,int y,vector<vector<int>>&grid){
        if(x<grid.size() && x>=0 && y<grid[0].size() && y>=0){
            return true;
        } 
        return false;
    }
    
    void print(vector<vector<int>>& grid){
       for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
       
    bool is_Possible(vector<vector<int>>& grid) 
    {
        vector<int> dx={1,-1,0,0,1,-1,-1,1};
        vector<int> dy={0,0,1,-1,1,-1,1,-1};
        queue<pair<int,int>> que;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    
                    que.push({i,j});
                    break;
                }
            }
        }
        
        
        while(!que.empty()){
           int x=que.front().first;
           int y=que.front().second;
           que.pop();
           
           for(int i=0;i<4;i++){
               int tx=x+dx[i];
               int ty=y+dy[i];
               if(isvalid(tx,ty,grid)){
                
                   if(grid[tx][ty]==2)return true;
                   
                   if(grid[tx][ty]==3){
                      
                       que.push({tx,ty});
                       grid[tx][ty]=0;
                   }
               }
           }
        }
        
        return false;
    }
};