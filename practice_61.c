//find the duplicate element in the array
#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,5,4,3,4,8};
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element\n",arr[i]);
            }
        }
    }
return 0;
}
