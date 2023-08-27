class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.size();
        int i=l-1,cnt=0;
        while(i>=0 && s[i]==' ')
            i--;
        while(i>=0 && s[i]!=' '){
            i--;
            cnt++;
        }
        return cnt;
    }
};
