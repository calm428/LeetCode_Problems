class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        // managing edges cases
        // if one of the arrays is empty, median will be from the other array

        if(n == 0){
            if(m%2 != 0){
                return nums2[m/2];
            }
            else return (double)(nums2[m/2]+nums2[(m/2)-1])/2;
        }
        if(m == 0){
            if(n%2 != 0){
                return nums1[n/2];
            }
            else return (double)(nums1[n/2]+nums1[(n/2)-1])/2;
        }
        // We have to go till half the size of imaginary array
        int lim = (n + m) / 2; 

        pair<int,int> store(1e9,1e9);  // for storing middle elements
        int i=0, j=0;
        // initializing pair.second with the 1st element of imaginary array
        if(nums1[i]>nums2[j]){
            store.second = nums2[j]; 
            j++;
        }
        else{
            store.second = nums1[i]; 
            i++;
        }
        lim--;
        // running while loop  
        while(lim>=0){
            // initializing with maximum bcoz we want the minimum
            int num1 = 1e9;
            int num2 = 1e9;
            if(i < n){
                num1 = nums1[i];
            }
            if(j < m){
                num2 = nums2[j];
            }
            store.first = store.second;
            if(num1>num2){
                store.second = num2;
                j++;
            }
            else{
                store.second = num1;
                i++;
            }
            lim--;
        }
        cout<<store.first<<" "<<store.second<<endl;
        // pair.second will be the (n+m)/2th indexed element.
        if((n + m) % 2 != 0){
            return store.second;
        }
        return (double)(store.first + store.second) / 2;
    }
};
