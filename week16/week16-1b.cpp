//week16-1b.cpp (沒辦法通過，因為n超大會超時)
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n>0){  //用瘋狂程設的寫法，但是n<0會失敗
            for(int i=0;i<n;i++){
                ans *= x;
            }
        }else if(n<0){ //特別針對n<0用 負負得正，換成倒過來的形式
            for(int i=0;i<-n;i++){
                ans *= 1/x;
            }
        }
        return ans;
    }
};