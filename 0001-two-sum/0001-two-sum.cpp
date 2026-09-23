class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> add(2);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    add[0]= i;
                    add[1]= j;
                    return add;

                }
            }
        }
        return add;
    }
};