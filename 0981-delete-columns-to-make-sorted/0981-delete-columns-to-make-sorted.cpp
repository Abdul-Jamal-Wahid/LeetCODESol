class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int n1=strs[0].size();
        int ans=0;
        for(int i=0;i<n1;i++){
            for(int j=1;j<n;j++){
                if(strs[j][i]<strs[j-1][i]){
                    ans+=1;
                    break;
                }
            }
        }
        return ans;
    }
};