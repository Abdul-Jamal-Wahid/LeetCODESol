class Solution {


    public static boolean checkEligibility(int i, int[] arr){
    if(i==0)
      return false;
    else if(i==1){
      return arr[i-1]==10?true:false;
    }else if(arr[i-1]==10 || arr[i-2]==10)
      return true;
     
    
    return false;

    }
    public int isWinner(int[] player1, int[] player2) {
    int sum1=0,sum2=0;
        for(int i=0;i<player1.length;i++){
            if(checkEligibility(i,player1))
            sum1=sum1+2*player1[i];
            else
            sum1=sum1+player1[i];

    }
    for(int i=0;i<player2.length;i++){
            if(checkEligibility(i,player2))
            sum2=sum2+2*player2[i];
            else
            sum2=sum2+player2[i];

    }
    
    return sum1>sum2?1:(sum1==sum2)?0:2;

}
}