class Solution {
public:
    int maximumCount(vector<int>& nums) {
         int n = nums.size();
        int ln=lastnegative(nums) +1;
        int fp=n-firstpositive(nums);
         return max(ln, fp);
    }
    public : int lastnegative(vector<int>& nums){
        int n= nums.size(), lo=0,hi=n-1;
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]<0) {
                ans=mid;
                lo=mid+1;
            }
            else{
                  hi=mid-1;
            }

        }
        return ans;

    }
     public : int firstpositive(vector<int>& nums){
         int n= nums.size(), lo=0,hi=n-1;
         int ans= nums.size();
         while(lo<=hi){
            int mid =(lo+hi)/2;
            if(nums[mid]>0){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }

         }
                 return ans;
     }
};