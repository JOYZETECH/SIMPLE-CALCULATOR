#include <stdio.h>
#include <stdlib.h>
/*SIMPLE CALCULATOR;
BY JOY JAMBI;
 */

int main()
{
    int num1, num2, sum, diff, product;
    float quotient;
    printf("simple calculator!\n");
    printf("enter two numbers: ");
    scanf("%d%d,&num1,&num2");

    //computation
    sum=num1+num2;
    diff=num1-num2;
    product= num1*num2;
    quotient=num1/num2;

    //output
    printf("%d+%d = %d\n", num1, num2, sum);
    printf("%d-%d = %d\n", num1, num2, diff);
    printf("%d*%d = %d\n", num1, num2, product);
    printf("%d/%d = %d\n", num1, num2, quotient);
    printf("%d+%d = %d\n", num1, num2, sum);



    return 0;
}
