class Solution {
void merge(vector<int>& nums,int low,int mid,int high){ int i=low;
int j=mid+1; int k=0;
vector <int> temp; while(i<=mid && j<=high){ if(nums[i]<nums[j]){ temp.push_back(nums[i]); i++;
k++;
}
else{ temp.push_back(nums[j]); j++;
k++;
}
}
while(i<=mid){ temp.push_back(nums[i]);
 
i++; k++;
}
while(j<=high){ temp.push_back(nums[j]); j++;
k++;
}
for (int k = 0; k < temp.size(); k++) { nums[low + k] = temp[k];
}
}
void mergesort(vector<int>& nums,int low,int high){ if(low <high){
int mid=low+(high-low)/2; mergesort(nums,low,mid); mergesort(nums,mid+1,high); merge(nums,low,mid,high);
}
}
public:
vector<int> sortArray(vector<int>& nums) { mergesort(nums,0,nums.size()-1);
return nums;
}
};

