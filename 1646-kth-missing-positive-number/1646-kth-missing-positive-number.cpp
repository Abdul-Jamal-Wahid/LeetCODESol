class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<INT_MAX;i++){
            if(!binary_search(arr.begin(),arr.end(),i)){
                if(cnt==k){
                    return i;
                }
                cnt+=1;
            }
        }
        
        return 1;
    }
};