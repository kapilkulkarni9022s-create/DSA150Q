class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();

        int count = 0;
        int out = 0;

        // Count elements of nums1 that are present in nums2
        for(int i = 0; i < n; i++) {
            
            for(int j = 0; j < m; j++) {
                
                if(nums1[i] == nums2[j]) {
                    count++;
                    break;
                }
            }
        }

        // Count elements of nums2 that are present in nums1
        for(int j = 0; j < m; j++) {
            
            for(int i = 0; i < n; i++) {
                
                if(nums2[j] == nums1[i]) {
                    out++;
                    break;
                }
            }
        }

        ans.push_back(count);
        ans.push_back(out);

        return ans;
    }

    
};