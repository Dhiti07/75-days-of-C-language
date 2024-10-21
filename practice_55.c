//find diff btw the sum of elements on even indices and sum of elements on the odd indices
#include<stdio.h>
int main(){
    int arr[6]={2,5,6,7,8,5};
    int EvenSum = 0,OddSum = 0;
    for(int i=0;i<6;i++){
        if(i%2==0) EvenSum +=arr[i];
        else OddSum +=arr[i];
    }
    int diff;
    diff = OddSum - EvenSum;
    printf("difference between the elements: %d",diff);
return 0;
}
