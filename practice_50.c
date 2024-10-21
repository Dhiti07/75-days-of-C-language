// print the sum of all elements of an array
#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    int a=0;
    for(int i=0;i<6;i++){
        a=a+arr[i];
    }
    printf("the sum of all elements of the array: %d",a);
return 0;
}
