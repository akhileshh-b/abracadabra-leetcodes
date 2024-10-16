class Solution {
public:
    bool check(vector<vector<int>>& g, int x,int y, int size){
        if(size==1){
            return true;
        }
        int h = size/2;
        
        int maxTR=getMax(g,x,y+h,h);
        int minBR=getMin(g,x+h,y+h,h);
        int maxBR=getMax(g,x+h,y+h,h);
        int minBL=getMin(g,x+h,y,h);
        int maxBL=getMax(g,x+h,y,h);
        int minTL=getMin(g,x,y,h);

        if (!(maxTR<minBR && maxBR<minBL && maxBL<minTL)) {
            return false;
        }
         return check(g, x, y + h, h) && check(g,x+h,y+h,h) && check(g, x+h,y,h) && check(g,x,y,h);     
    }
    int getMin(vector<vector<int>>& g,int x,int y,int size){
        int mn =INT_MAX;
        for (int i=x;i<x+size;++i)
            for (int j=y;j<y+size;++j)
                mn = min(mn,g[i][j]);
        return mn;
    }
    int getMax(vector<vector<int>>& g,int x,int y,int size) {
        int mx = INT_MIN;
        for (int i=x;i<x+size;++i)
            for (int j=y;j<y+size;++j)
                mx = max(mx,g[i][j]);
        return mx;
    }
    bool specialornot(vector<vector<int>>&grid){
        return check(grid,0,0,grid.size());
    }

    void fillGrid(vector<vector<int>>& grid,int x,int y,int size,int start){
        if (size==1){
        grid[x][y]=start;
        return;
        }
        int h=size/2;
        int area=h*h;


        fillGrid(grid,x,y+h,h,start);            
        fillGrid(grid,x+h,y+h,h,start+area);      
        fillGrid(grid,x+h,y,h,start+2*area);      
        fillGrid(grid,x,y,h,start+3*area);          
}

    
    vector<vector<int>> specialGrid(int N) {
        int size = 1 << N;
        vector<vector<int>> grid(size, vector<int>(size));

        // vector<vector<int>> grid(N, vector<int>(N));
        // int value=1;
        fillGrid(grid,0,0,size,0);
        return grid;
    }
};