class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = INT_MIN;
        int secondMaxi = INT_MIN;
        int index = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                secondMaxi = maxi;
                maxi = nums[i];
                index = i;
            }
            else if (nums[i] > secondMaxi) {
                secondMaxi = nums[i];
            }
        }

        if (maxi >= 2 * secondMaxi) {
            return index;
        }

        return -1;
    }
};