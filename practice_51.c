//find the max value out of all the elements int he array
#include<stdio.h>
int main(){
    int arr[7] = {2,4,30,7,3,9,10};
    int max=-1;
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the maximum element is: %d",max);
return 0;
}
