class Solution 
{ 
public:
bool isPalindrome(int x) 
{ long long rev=0;
int original=x; int ld=0; if(x<0){ return false;
}
 
while(x>0)
{ 
    ld=x%10; rev=rev*10+ld; x=x/10;
}
return original==rev;


}
};
