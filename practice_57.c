// find the 2nd largest no. of array
#include<stdio.h>
int main(){
    int arr[5]= {1,4,3,6,8};
    int max= -1;
    int smax=-1;
    for(int i=0;i<5;i++){
        if(max<arr[i]) max=arr[i];
    }
        for(int i=0;i<5;i++){
            if(arr[i]!=max && smax<arr[i]) smax = arr[i];
        }
    printf("%d",smax);
return 0;
}
