# include <stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    a=n/50;
    n%=50;
    b=n/5;
    n%=5;
    c=n;
    printf("%d=50*%d+5*%d+1*%d\n",n=50*a+5*b+c*1,a,b,c);
}