class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>mp;
        vector<string>ans;
        for(int i=0;i<names.size();i++){
            mp[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(auto& v:heights){
            ans.push_back(mp[v]);
        }
        return ans;
    }
};