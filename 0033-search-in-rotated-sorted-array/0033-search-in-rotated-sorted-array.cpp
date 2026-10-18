class Solution { private:
int s(vector<int>& nums, int target,int si,int ei){ if(si > ei){
return -1;
}
int mid=si+(ei-si)/2; if(nums[mid]==target){ return mid;
}
if(nums[si]<=nums[mid]){ if(nums[si]<=target && nums[mid] > target){
 
return s(nums,target,si,mid-1);
}
else{
return s(nums,target,mid+1,ei);
}
}
else{
if(nums[mid]<target && nums[ei]>=target){ return s(nums,target,mid+1,ei);
}
else{
return s(nums,target,si,mid-1);
}
}
}
public:
int search(vector<int>& nums, int target) { int si=0;
int e=nums.size()-1; int mid=si+(e-si)/2;
return s(nums,target,si,e);


}
};
