// Time complexity : O(n)
// Space complexity : O(1)

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    #define ll long long
    long long maxSubarraySum(int arr[], int n){
        ll ans=INT_MIN;
        ll sum=0;
        
        for(int i=0;i<n;i++){
            if(sum>=0){
                sum+=arr[i];
            }else{
                sum=arr[i];
            }
            ans=max(ans,sum);
        }
        
        return ans;
    }
};
