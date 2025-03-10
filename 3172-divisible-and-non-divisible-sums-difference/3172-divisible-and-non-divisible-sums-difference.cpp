class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num2=0,num1;
        for(int i=1;i<=n;i++){
            if(i%m == 0){
                num2 = num2 + i;
            }
        }
        int sumofn = (n*(n+1))/2;
        num1=sumofn-num2;

        return num1-num2;
    }
};