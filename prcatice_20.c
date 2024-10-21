 //print the sum of series 1-2+3-4+5-6.... upto n
 #include<stdio.h>
 int main(){
     int n,sum;
     printf("enter the no. of terms of the series: ");
     scanf("%d",&n);
     sum =0;
     for(int i=0;i<=n;i++){
        if(i%2==0){
            sum = sum-i;
        }
        else{
            sum=sum+i;
        }
     }
     printf("the sum is: %d",sum);
 return 0;
 }
