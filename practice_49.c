//give an array of marks of students, if the mark of student is less than 35 print roll no.
#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("enter elements %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        if(arr[i]<35){
            printf("%d ",i);
        }
    }
return 0;
}
