class Solution {
public:

    void solve(vector<int>& arr,vector<int>& v,  int target, int index,vector<vector<int>> &ans){
        // BC
        // found ans
        if(target == 0){
            ans.push_back(v);
            return ;
        }

        // can't take that arr[i]
        if(target < 0){
            return ;
        }


        // check for all elements
        for(int i = index; i < arr.size(); i++){

            // take arr[i], till we can take this
            v.push_back(arr[i]);
            solve(arr,v,target - arr[i], i,ans);

            // BT -> if returning means we dont need that arr[i] now
            v.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> v; // current track of elements
        int index = 0 ;
        solve(arr,v,target,index,ans);
        return ans;
    }
};
