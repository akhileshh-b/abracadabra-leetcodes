class Solution {
public:
    bool isPowerOfThree(int n) {
        int rem = 0;
        if(n<=0){
            return false;
        }
        while(n>0){
                if(n==1 && rem==0){
                    return true;
                }
                if(rem!=0){
                    return false;
                }
                rem = n%3;
                n=n/3;
            }
        return false;
    }
};