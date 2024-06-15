class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int g=(n)/4;
        map<int,int>mp;
        for(auto& x:arr){
            mp[x]++;
        }
        for(auto& x:mp){
            if(x.second>g){
                return x.first;
            }
        }
        return -1;
    }
};