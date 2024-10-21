//find out the modulus of the given input integer (21/05/24)
#include<stdio.h>
int main(){
int x;
printf("enter a integer: ");
scanf("%d",&x);
if(x>=0){
    printf("modulus of no. is: %d",x);
}
else {
    int z = (-x);
    printf("modulus of no. is: %d",z);
}
return 0;
}
