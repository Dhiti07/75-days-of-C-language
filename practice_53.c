//in array change the value of all odd indexed elements to its 2nd multiple & increment all even indexed value by 10
#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,9};
    for(int i=0;i<5;i++){
        if(i%2==0) arr[i] = arr[i]+10;
        else arr[i]= arr[i]*2;
        printf("%d ",arr[i]);
    }
return 0;
}
