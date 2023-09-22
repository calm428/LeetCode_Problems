class Solution {
public:
    long Reverse(long x,int len)
    {
        if(len<=1)
            return x;
        
        int a= 0; int b = 0;
        int r = len/2;
        int s = len - len/2;
        int m=round(pow(10,r));
        int M = round(pow(10,s));

        a = x/m;
        b = x%m;
        x = (long)((long)(Reverse(b,r)*M) + (long)Reverse(a,s));
        return x;
    }
    int reverse(int x) {
        ios_base::sync_with_stdio(0);
        int len=0;
        long y;

            y =x;
        while(y!=0)
        {
            y = y/10;
            len++;
        }
        y = x;
        y = Reverse(y,len);
        if(y>pow(2,31)-1||y<-pow(2,31)) return 0;

        return y;
        
    }
};
