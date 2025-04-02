class Solution {
public:
    double myPow(double x, int n) {
        long binform=n;
        double ans =1;

        if(n<0){
            x=(1/x);
            binform=-1*binform;
        }

        while(binform>0){
            if(binform %2==1){
                ans=ans*x;
            }
            x=x*x;
            binform=binform/2;
        }
        return ans;
        }
        
    
};