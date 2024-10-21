//find the smallest element in the array using pointers
#include<stdio.h>
int findsmallest(int *arr,int size){
int *psm,*pwalk,*plast;
psm=arr; //assigning smallest to first element
plast=arr+(size-1);

for(pwalk=arr+1;pwalk<=plast; pwalk++){
        if(*pwalk<*psm)
            psm=pwalk;
   }
   printf("smallest: %d\n",*psm);
   return *psm;
}
int main(){
    int n;
    printf("enter the no. of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemsnts of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the smallest element in the array is:%d",findsmallest(arr,n));
    return 0;
    }
