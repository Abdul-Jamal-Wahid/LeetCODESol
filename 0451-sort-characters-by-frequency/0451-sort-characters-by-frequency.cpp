class Solution {
public:
    string frequencySort(string s) {
          unordered_map<char,int>mpp;
        for(auto i:s)
            mpp[i]++;

        sort(s.begin(),s.end(),[&](char a,char b){
            if(mpp[a] != mpp[b])
                return mpp[a] > mpp[b];
            else
                return a>b;
        });

        return s;
    }
};