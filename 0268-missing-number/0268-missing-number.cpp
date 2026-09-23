class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int arrsum=0;
    int zeroton;
    int n=nums.size();
    for(int i=0;i<n;i++){
            arrsum=arrsum + nums[i];

    }
    zeroton=n*(n+1)/2;
    return zeroton-arrsum;
    }
};