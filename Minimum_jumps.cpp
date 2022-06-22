class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n<=1)//base case
            return 0;
        if(arr[0]==0)//stuck at first index
            return -1;
            
        int maxReach=arr[0];//max index I can reach
        int step=arr[0];//steps I can take
        int jump=1;//jumped from 0th index to 1st index
        
        
        for(int i=1;i<n;i++){
            if(i==n-1)// if I reach the end return no. of jumps
                return jump;
            // finding the max I can reach
            maxReach=max(maxReach,arr[i]+i);
            step--;
            if(step==0){
                jump++;
                if(maxReach<=i){// I can't reach ahead of our current index
                    return -1;
                }
                step=maxReach-i;//(max I can reach) - (current index)
            }
        }
    }
};
