//add digit

//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

#include<stdio.h>
int addDigits(int num) {
    if(num == 0){
        return 0;
    }
    else if(num % 9 == 0){
        return 9;
    }
    else{
        return num % 9;
    }
}
// int main()
// {
//     int num;
//     printf("enter a value:");
//     scanf("%d",&num);

//     int result = addDigits(num);
//     printf("the result is %d",result);

//     return 0;
// }