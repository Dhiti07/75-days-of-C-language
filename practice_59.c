// search for the given no. in the array
#include<stdio.h>
int main (){
    int arr[7] = {1,4,6,8,9,6,7};
    int x;
    printf("enter the no. to be searched: ");
    scanf("%d",&x);
    for(int i=0;i<7;i++){
        if(arr[i]==x) {
            printf("%d is present in the array and its index is %d\n",x,i);
            //break;
        }
            }
return 0;
}

