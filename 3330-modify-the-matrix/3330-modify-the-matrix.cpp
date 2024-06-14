class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix[0].size();i++){
            int maxi=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                 maxi=max(maxi,matrix[j][i]);
            }

          ans.push_back(maxi);
        }
            
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==-1)
                 matrix[i][j]=ans[j];
            }
        }
        return matrix;
    }
};