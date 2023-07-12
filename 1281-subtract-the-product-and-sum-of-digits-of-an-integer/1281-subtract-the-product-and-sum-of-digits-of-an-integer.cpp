class Solution {
public:
    int subtractProductAndSum(int n) {
        int a;
        int pro=1;
        int sum=0;
         while(n!=0){
             a=n%10;
             pro=pro*a;
             sum=sum+a;
             n=n/10;
         }
         int answer=pro-sum;
         return answer;
    }
};