class Solution {
public:
    int fib(int n){
        if (n <= 1)
        return n;

        int prev1 = 1, prev2 = 0;
        int curr;
        for (int i = 2; i <= n; i++) {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};


// {
//        if(n==0 || n==1){
//         return n;
//        }
//        return (fib(n-2) + fib(n-1));
//     }