// fib number
#include<stdio.h>

int fib(int num){
    if(num == 1 || num == 0)
    {
        return num;
    }
    else
    {
        return (num + fib(num-1));
    }

}
int main()
{
    int j,i;
    printf("enter value for i:");
    scanf("%d",&i);
    for(j=0;j<=i;j++){
        printf("%d \t",fib(j));
    }
    return 0;
}