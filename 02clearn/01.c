#include<stdio.h>

int main(int argc, char **argv)
{

	printf("enter girl age: \n");

    int age;
    scanf("%d",&age);
    if (age>18){
        printf("girl friend \n");
    }else{
        printf("let she go! \n");
    }

    return 1;
}
