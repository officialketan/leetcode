class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int col= matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // matrix[0][0]= 5;
        for(int i=0;i<n;i++)
        {
            int j=0;
            int k= col-1;
            
            while(j<k){
                swap(matrix[i][j],matrix[i][k]);
                j++;
                k--;
            }
        }
        
    }
};