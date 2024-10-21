//dsiplay this AP - 100,97,94,.... upto all terms which are +ve
#include<stdio.h>
int main(){
    int n,i;
    //printf("enter the no. of terms of AP: ");
    //scanf("%d",&n);
    for(i=100;i>=0;i=i-3){
        printf("%d ",i);
    }
return 0;
}
