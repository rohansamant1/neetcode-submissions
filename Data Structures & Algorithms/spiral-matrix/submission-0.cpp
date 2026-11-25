class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int Rsize = matrix.size();
        int Csize = matrix[0].size();

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = Rsize - 1;
        int endingCol = Csize - 1;

        int count = 0;

        while(count < Rsize * Csize)
        {
            // Starting row
            for(int i = startingCol; i <= endingCol && count < Rsize * Csize; i++)
            {
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // Ending column
            for(int i = startingRow; i <= endingRow && count < Rsize * Csize; i++)
            {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Ending row
            for(int i = endingCol; i >= startingCol && count < Rsize * Csize; i--)
            {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // Starting column
            for(int i = endingRow; i >= startingRow && count < Rsize * Csize; i--)
            {
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};