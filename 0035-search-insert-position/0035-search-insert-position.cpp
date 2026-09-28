class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n= arr.size();
        int lo=0, hi=n-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(target>arr[mid] ) lo =mid+1;
            else if(target<arr[mid]) hi=mid-1;
            else {
                return mid;
            } 
        }  
        return lo;  
        
        
    }
};