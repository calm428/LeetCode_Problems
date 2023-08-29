#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>absk;
        for(int x:digits)
        {
            absk.push_back(x);
        }
        if(digits[n-1]!=9)
        {
            absk[n-1]++;
            return absk;
        }
        int i=n-1;
        for(;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                break;
            }
        }
        if(i==-1)
        {
            absk[0]=1;
            for(int i=1;i<n;i++)
            {
                absk[i]=0;
            }
            absk.push_back(0);
            return absk;
        }
        else
        {
            absk[i]++;
            for(int k=i+1;k<n;k++)
            {
                absk[k]=0;
            }
        }
        return absk;
    }
};
