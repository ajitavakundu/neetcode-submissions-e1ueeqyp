class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int mid;
        int high = nums.size()-1;
        int index = -1;

        while(low<=high) {
            mid = (low+high)/2;

            if (nums[mid]== target) {
                index = mid;
                break;
            }

            if (target < nums[mid]) {
                high = mid -1;
            }
            else {
                low = mid + 1;
            }
        }

        return index;
    }
};
