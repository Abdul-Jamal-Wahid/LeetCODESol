class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        int oddFreq=0;
        if(n==1){
            return 1;
        }
        unordered_map<char,int>mp;
        for(auto& x:s){
            mp[x]++;
            if(mp[x]%2==1){
                oddFreq+=1;
            }else{
                oddFreq-=1;
            }
        }
        if(oddFreq>1){
            return n-oddFreq+1;
        }
        return n;
    }
};