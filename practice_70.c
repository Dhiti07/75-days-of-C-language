//print the size of the string given input by the user
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("enter a string");
    gets(str);
    puts("size of the string:");
    int size = 0;
    puts(str);
    for(int i=0;str[i]!='\0';i++){
        size++;
    }
    printf("%d",size);
return 0;
}
