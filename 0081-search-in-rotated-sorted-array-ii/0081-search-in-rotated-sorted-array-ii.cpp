class Solution { private:
bool s (vector<int>& nums, int target,int si,int ei){ if(si>ei){
return false;
}
int mid=si+(ei-si)/2; if(nums[mid]==target){ return true;
}
if(nums[si]==nums[mid] && nums[mid]==nums[ei]){ si++;
ei--;
return s(nums,target,si,ei);
}
if(nums[si]<=nums[mid]){ if(nums[si]<=target && nums[mid]>target){
 
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
bool search(vector<int>& nums, int target) { int si=0;
int ei=nums.size()-1; return s( nums,target,si,ei);
}
};
