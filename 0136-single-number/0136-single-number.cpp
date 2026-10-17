class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> m;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
        if(m.count(nums[i])){
            m[nums[i]]++;
        }
        else{
            m[nums[i]]=1;
        }
       } 
       for(auto p:m ){
       if(p.second==1){
       return p.first;
       }
    }
       return -1;
    }
};