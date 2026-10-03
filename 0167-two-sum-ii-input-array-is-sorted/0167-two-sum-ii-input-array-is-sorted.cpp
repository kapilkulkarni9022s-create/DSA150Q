class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> add(2);
        int n= numbers.size();
        int i=0,j=n-1;
        while(i<=j){
            if(numbers[i]+numbers[j]>target) j--;
            else if(numbers[i]+numbers[j]<target) i++;
            else{
                add[0]=i+1;
                add[1]=j+1;
                break;
            }
        
        }

        return add;
    }
};