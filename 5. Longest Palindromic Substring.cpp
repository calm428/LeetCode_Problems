class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 1) return s;
        string finalAns = "";
        //initialising two pointer one from staring and one from end
        int  i = 0;
        while(i<s.length()){
            //declaring ans as empty after each iteration of i
            string ans = "";
            int j = s.length()-1;
            while(j>i){
                if(s[i] == s[j]){
                    //checking palindrome
                    int st = i;
                    int e = j;
                    int flag = 1;
                    while(st<e){
                        if(s[st] != s[e]){
                            flag = 0;
                            break;
                        } else{
                            st++;
                            e--;
                        }
                    }
                    // if palindrome is present
                    if(flag == 1){
                        ans = s.substr(i, j-i+1);
                    }
                    //checking if ans.length() is greater than last maximum length of ans string
                    if(ans.length() >= finalAns.length()){
                        finalAns = ans;
                    }
                }
                j--;
            }
            i++;
        }
        //if no palindrome is present then return any char
        if(finalAns == ""){
            finalAns = s[0];
        }
        return finalAns;
    }
};
