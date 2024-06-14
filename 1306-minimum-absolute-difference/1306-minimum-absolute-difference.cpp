class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int mini=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            int d=arr[i]-arr[i-1];
            if(mini>d){
                mini=d;
            }
        }
        vector<vector<int>>arr1;
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1])==mini){
                arr1.push_back({arr[i-1],arr[i]});
            }
        }

        //cout<<mini<<endl;
        return arr1;
    }
};