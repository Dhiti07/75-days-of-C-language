//if cost price and selling price of an item is input,WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred
#include<stdio.h>
int main() {
int CP, SP,profit,loss;
printf("cost price : ");
scanf("%d",&CP);
printf("selling price: ");
scanf("%d",&SP);
if(CP>SP) {
    printf("loss has occurred\n");
    loss = CP-SP;
    printf("loss occurred: %d",loss);
}
else{
    printf("profit has occurred\n");
    profit = SP-CP;
    printf("profit occurred is: %d",profit);
}
return 0;
}
