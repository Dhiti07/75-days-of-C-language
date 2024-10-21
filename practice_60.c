//find the missing element in the array of of 1st 10 element
#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,9,10},sum,x;
    sum =0;
    for(int i =0;i<10;i++){
        sum = sum +arr[i];
    }
    printf("the sum of the array is %d\n",sum);
    int total;
    total = 55;
    int missing = total -sum;
    printf("the missing element in the array is: %d",missing);
return 0;
}
