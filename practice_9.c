//take input percentage of a student and print the grade according to marks (21/05/24)
#include<stdio.h>
int main (){
    int x;
    printf("enter the marks of student: ");
    scanf("%d",&x);
    if((x>90)&&(x<100)){
        printf("excellent");
    }
    else if((x>80)&&(x<90)){
        printf("very good");
    }
    else if((x>70)&&(x<80)){
        printf("good");
    }
    else if ((x>60)&&(x<70)){
        printf("can do better");
    }
    else if ((x>50)&&(x<60)){
        printf("average");
    }
    else if ((x>40)&&(x<50)){
        printf("below average");
    }
    else {
        printf("fail");
    }

return 0;
}
