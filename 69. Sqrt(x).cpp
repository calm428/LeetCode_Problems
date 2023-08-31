class Solution {
public:
    long long int BSearch(int n, int start, int end){
        if(start > end){
            return -1;
        }

        long long int mid = (start+end)/2;
        long long int square = (mid*mid);
        long long int ans = -1;
        if(square == n){
            return mid;
        } else if(square > n){
            return BSearch(n, start, mid-1);
        } else {
            ans = mid;
            long long int s = BSearch(n, mid+1, end);
            ans = ans > s ? ans : s;
            return ans;
        }
        
    }
    int mySqrt(int x) {
        if(x == 1){
            return 1;
        }
        return BSearch(x, 0, x);
    }
};
