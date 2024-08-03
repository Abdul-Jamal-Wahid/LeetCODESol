class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int cnt=0;
       sort(arr.begin(),arr.end());
       sort(target.begin(),target.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=target[i]){
                cnt=1;
                return 0;
            }
        }
        
        return 1;
    }
};