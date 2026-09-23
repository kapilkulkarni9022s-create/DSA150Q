class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0,j=n-1,maxarea=0;
        while(i<j){
            int h= min(height[i],height[j]);
            int width=j-i;
           int  area=width*h;
           maxarea= max(area,maxarea);
           if(height[i]<height[j]){
            i++;
           }
           else{
            j--;
           }

        }
        return maxarea;
        
    }
};