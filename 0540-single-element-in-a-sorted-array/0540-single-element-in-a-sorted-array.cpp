class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int lo = 0, hi = n - 1;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            // Make mid even
            if (mid % 2 == 1)
                mid--;

            if (arr[mid] == arr[mid + 1]) {
                // Pair is correct, single element is on right
                lo = mid + 2;
            }
            else {
                // Pair is broken, single element is on left including mid
                hi = mid;
            }
        }

        return arr[lo];
    }
};