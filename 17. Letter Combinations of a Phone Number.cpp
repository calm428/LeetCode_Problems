class Solution {
public:
    unordered_map<char, string> mp;
    void dfs(int i,string digits,vector<string>& ans , string temp){
        if(i > digits.size()-1 ) ans.push_back(temp);
        string temp2 = mp[digits[i]];
        for (int j = 0;j<temp2.size();j++) {
            dfs(i+1,digits,ans,temp+temp2[j]);
        }
        return ;
    }
    vector<string> letterCombinations(string digits) {
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string> ans;
        dfs(0,digits,ans,"");
        return ans;
    }
};
