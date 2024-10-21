//print 1 to n using after recursive call
#include<stdio.h>
void increase(int x,int n){
 if(x>n) return;
    increase(x+1,n);
    printf("%d\n",x);
    return;
}
int main(){
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    increase(1,n);
    return 0;
}
