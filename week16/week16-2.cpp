class Solution {
public:
    double myPow(double x,long long int n) {
        if(n==0) return 1;
        if(n<0){ //meet -n ,-*-=+,same time x->1/x
            n=-n;
            x=1/x; //cause x's-1次方=1/x
        }
        if(n%2==0){
            double now = myPow(x,n/2); //一半的x相乘
            return now*now; //左一半,右一半,在相乘
        }else{
            double now = myPow(x,n/2);
            return now * now * x;
        }

        double ans = 1;
        if(n>0){
            for(int i=0;i<n;i++){
                ans*=x;
            }
        }else if(n<0){
            for(int i=0;i<-n;i++){
                ans *=1/x;
            }
        }
        return ans ;
    }
};
