class Solution {
public:
    bool doBS(vector<int>& nums, int target) {
        int low = 0;
        int mid;
        int high = nums.size()-1;

        while(low<=high) {
            mid = (low+high)/2;

            if (nums[mid] == target) {
                return true;
            }

            if (target < nums[mid])
                high = mid - 1;
            else
                low = low + 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;

        int i = 0;
        while (i< matrix.size()) {
            found = doBS(matrix[i], target);
            if (found)
                break;
            i++;
        }

        return found;
    }
};
