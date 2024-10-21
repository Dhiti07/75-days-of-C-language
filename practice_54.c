//count the no. of elements in the given array
#include<stdio.h>
int main(){
    int arr[7]={2,6,5,4,3,7,8};
    int count = 0;
    for(int i=0;i<7 ;i++){
        count++;
    }
    printf("the total no. of elements is: %d",count);
return 0;
}
