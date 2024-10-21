//print the no. of pairs in the array whose sum is equal
#include<stdio.h> //for triplets loops ke andar loops ke andar loops
int main(){
    int arr[8]= {1,2,3,4,5,6,7,8};
    int x,TotalPairs =0;
    printf("enter the value of x: ");
    scanf("%d",&x);
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x) TotalPairs++ ;
        }
    }
    printf("total no. of such pairs are: %d",TotalPairs);
return 0;
}
