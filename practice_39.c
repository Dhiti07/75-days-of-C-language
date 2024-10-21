// print 1 to n using recurrsion
#include<stdio.h>
void increase(int x,int n){
 if(x>n) return;
 printf("%d\n",x);
    increase(x+1,n);
    return;
}
int main(){
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    increase(1,n);
    return 0;
}
