class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int total=m*n;
        int count =0;
        int stRow=0;
        int enCol=n-1;
        int enRow=m-1;
        int stCol=0;
        
        while(count<total)
        {
            for(int i=stCol;i<=enCol && count<total;i++)
            {
                ans.push_back(matrix[stRow][i]);
                count++;
            }
            
            stRow++;
            
            for(int j=stRow;j<=enRow && count<total;j++)
            {
                ans.push_back(matrix[j][enCol]);
                count++;
            }
            
            enCol--;
            
            for(int k=enCol;k>=stCol && count<total;k--)
            {
                ans.push_back(matrix[enRow][k]);
                count++;
            }
            
            enRow--;
            
            for(int l=enRow;l>=stRow && count<total;l--)
            {
                ans.push_back(matrix[l][stCol]);
                count++;
            }
            
            stCol++;
            // for(int o=stCol;o>=enCol && count<total;o++)
            // {
            //     ans.push_back(matrix[enRow][o]);
            //     count++;
            // }
        }
        return ans;
    }
};