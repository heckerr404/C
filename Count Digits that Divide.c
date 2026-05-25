class Solution {
  public:
    
    int evenlyDivides(int n) {
        
        int c=0;
        for(int i=n;i>0;i/=10){                                                 
            int d=i%10;
            if(d!=0 && n%d==0){
                c++;
            }
        }
        return c;
    }
};