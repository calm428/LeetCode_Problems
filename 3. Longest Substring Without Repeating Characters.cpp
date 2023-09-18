class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int i=0,j=0,count=0,maxi=0;
        vector<char> vec;
        vector<char>::iterator it;
        while(i<s.size()){
            while(j<s.size()){
                it=find(vec.begin(),vec.end(),s[j]);
                if(it!=vec.end()){
                    count=vec.size();
                    maxi=max(maxi,count);
                    vec.clear();
                    i++;
                    break;
                }
                else{
                    vec.push_back(s[j]);
                    j++;
                }
            }
            j=i;
        }
        return maxi;
    }
};
