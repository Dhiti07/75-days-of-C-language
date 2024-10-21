//take +ve integer input and tell if it is divisible by 5 or 3 but not by 15 (21/05/24)
#include<stdio.h>
int main (){
int x;
printf("enter +ve integer: ");
scanf("%d",&x);
if((x%3==0)||(x%5==0)){
    if(x%15==0){
        printf("no. is divisible by 3,5 & 15");
    }
    else{
        printf("no. is divisible by 3 or 5 but not by 15");
    }
}
else{
    printf("no. is not divisible by either 5 or 3");
}
return 0;
}

