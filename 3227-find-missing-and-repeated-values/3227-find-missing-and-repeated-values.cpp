class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size()*grid.size();
        map<int,int>seen;
        unordered_set<int>st;
        int a;
        for(auto& c:grid){
            for(auto& x:c ){
           seen[x]++;
           st.insert(x);
        }
        }
        for(auto&x:seen){
            if(x.second==2){
                a=x.first;
                break;
            }
        }
        int b;
        for(int i=1;i<=n;i++){
            if(seen.count(i)==0){
                b=i;
            }
        }
        return {a,b};

    }
};