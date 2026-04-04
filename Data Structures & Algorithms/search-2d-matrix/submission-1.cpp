class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();

        int low = 0;
        int high = (row*column) -1;
        int mid = -1;
        int mid_row = -1;
        int mid_col = -1;

        while(low<=high) {
            mid = (low+high)/2;

            mid_row = mid / column;
            mid_col = mid % column;

            if (matrix[mid_row][mid_col] == target)
                return true;
        
            if (matrix[mid_row][mid_col] > target ) 
                high = mid - 1;
            else
                low = mid + 1;

        }

        return false;
    }
};
