class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
         map<int,int>mp;
        
        //reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b) {
            if(mp[a]==mp[b]){
                return a>b;
            }else{
                return mp[a]<mp[b];
            }
        });
       
        return nums;
    }
};