// solution of this problem
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,k;
        bool b=true;
        while(i<haystack.size()){
            if(haystack[i]==needle[j]){
                k=i;
                b=true;
                while(j<needle.size()){
                    if(haystack[i]!=needle[j]){
                        j=0;
                        b=false;
                        goto l;
                    }
                    i++;
                    j++;
                }
                l:
                if(b){
                    return k;
                }else{
                    i=k;
                    j=0;
                }
            }
            i++;
        }
        return -1;
    }
};
