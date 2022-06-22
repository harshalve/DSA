//Binary Search Approach
// Space Complexity : O(1)
// Time Complexity : O(nlog(n))

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1;
        int n=nums.size();
        int h=n-1;
        
        while(l<=h){
            int mid=l+((h-l)/2);    
            int cnt=0;
            for(auto n:nums){
                if(n<=mid)
                    cnt++;
            }
            if(cnt<=mid)
                l=mid+1;
            else
                h=mid-1;
        }

        return l;
    }
};

//Slow-fast Approach
// Time Complexity : O(n)
// Space Complexity : O(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
            
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
