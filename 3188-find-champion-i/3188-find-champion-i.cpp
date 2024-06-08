class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
     for(int i=0;i<grid.size();i++){
        bool isChampion=true;
        for(int j=0;j<grid.size();j++){
            if(i!=j && grid[j][i]==1){
                isChampion=false;
                break;
            }
        }
        if(isChampion){
            return i;
        }
        
     }
     return -1;
    }
};