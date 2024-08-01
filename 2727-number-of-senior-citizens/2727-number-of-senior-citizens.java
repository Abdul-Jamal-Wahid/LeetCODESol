class Solution {
    public int countSeniors(String[] details) {
        int cnt=0;
        for(String st:details){
            if(st.charAt(11)>'6' || st.charAt(11)=='6' && st.charAt(12)>'0'){
                cnt+=1;
            }

        }
        return cnt;
    }
}