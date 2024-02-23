509// fib number
#include<stdio.h>

int fib(int num){
    if(num == 1 || num == 0)
    {
        return num;
    }
    else
    {
        return (fib(num-1) + fib(num-2));
    }

}
int main()
{
    int j,i;
    printf("enter value for i:");
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        printf("%d \t",fib(j));
    }
    return 0;
}