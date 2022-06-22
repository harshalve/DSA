// Medium
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        int n=in.size();

        if(in.size()==0)
            return ans;
        
        sort(in.begin(),in.end());
        
        vector<int> tempInterval=in[0];
        
        for(auto it:in){
            if(tempInterval[1]>=it[0]){
                tempInterval[1]=max(tempInterval[1],it[1]);
            }else{
                ans.push_back(tempInterval);
                tempInterval=it;
            }
        }
        ans.push_back(tempInterval);
        return ans;
    }
};
