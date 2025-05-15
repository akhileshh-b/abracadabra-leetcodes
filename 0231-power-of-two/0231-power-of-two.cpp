class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem = 0;
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        while(n>0){
                if(n==1 && rem==0){
                    return true;
                }
                if(rem!=0){
                    return false;
                }
                rem = n%2;
                n=n/2;
            }
        return false;
    }
};