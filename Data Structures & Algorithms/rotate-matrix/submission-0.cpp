class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     for(int i = 0; i < matrix.size(); i++)
     {
        for(int j = 0; j< i ; j++ )
        {
            swap(matrix[j][i], matrix[i][j]);
            //Transpose
        }

     }

     for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size()/2;j++) // loop through half of row
            {
            swap(matrix[i][j],matrix[i][matrix.size()-1-j]);
            }
        }

    }
};