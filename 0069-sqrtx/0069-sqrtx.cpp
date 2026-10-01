class Solution {
public:
    int mySqrt(int n) {
        // long long n=x; TC=SQURT(N);
        // for(long long i = 0; i <= n; i++) {
        //     if(i * i == x)
        //         return i;

        //     if(i * i > x)
        //         return i - 1;
        // }

        // return 0;
        int lo = 0, hi = n;
    while(lo <= hi){
    long long mid = lo + (hi-lo)/2;
     if(mid*mid > n) hi=mid-1;
    else if(mid*mid < n) lo = mid + 1;
    else return mid;
    }
    return hi;
    }
};