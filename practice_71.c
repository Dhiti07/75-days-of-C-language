//print the reverse of a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int j;
    puts("enter a string");
    gets(str);
    int size = 0;
    puts(str);
    for(int i=0;str[i]!='\0';i++){
        size++;
    }
    for(int k=0;j=size-1,k<=j;k++,j--){
        char temp = str[k];
        str[k] = str[j];
        str[j] = temp;
    }
    puts("the reverse string is: ");
    puts(str);
return 0;
}

