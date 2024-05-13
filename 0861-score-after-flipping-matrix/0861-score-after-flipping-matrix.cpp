class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int sum=0;
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==0)
                        grid[i][j]=1;
                    else
                        grid[i][j]=0;
            }
            }
        }
         for(int j=0;j<n;j++){
            int z=0,o=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]==0)
                z++;
                else
                o++;
            }
            if(z>o){
                for(int i=0;i<m;i++){
                    if(grid[i][j]==0)
                        grid[i][j]=1;
                    else
                        grid[i][j]=0;
            }
            }
         }
        for(int i=0;i<m;i++){
            string s;
                for(int j=0;j<n;j++){
                   s=s+to_string(grid[i][j]);            
            }
            bitset<32> bits(s);
    unsigned long decimalNumber = bits.to_ulong();
            sum= sum+decimalNumber;
         }
        return sum;

    }
};