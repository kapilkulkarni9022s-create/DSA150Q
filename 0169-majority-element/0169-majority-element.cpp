 class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums. end() );
        int n=nums.size() ;
        int ans;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[n/2]){
                ans= nums[i];
            }
        }
        return ans;
    }
};