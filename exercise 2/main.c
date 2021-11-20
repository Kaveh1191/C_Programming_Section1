#include<stdio.h>

int main() {
    int a, b, sum;
    int c;
    int mult;
    int divi;
    int subs;
    int zarb,sabet;

    printf("\nEnter two number for sum: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum is : %d", sum);/*جمع دوعدد با تعریف متغییر sum*/

    printf("\nEnter value a for multiplication:");

    scanf("%d", &a);

    printf("Enter value b for multiplication:");

    scanf("%d", &b);

    printf("Enter value c for multiplication:");

    scanf("%d", &c);

    mult=a*b*c;

    printf("Multiplication is: %d   "  , mult);/*ضرب سه عدد با تعریف متغییر mult*/

    printf("Enter two number for division: ");
    scanf("%d %d", &a, &b);
    divi=a / b;
    printf("Division is : %d", divi);/*تقسیم دو عدد با تعریف متغییر divi*/

    printf("\nEnter value a for Subtraction:");

    scanf("%d", &a);

    printf("Enter value b for Subtraction:");

    scanf("%d", &b);

    printf("Enter value c for Subtraction:");

    scanf("%d", &c);
    subs=a - b - c;
    printf("Subtraction is : %d", subs);/*تفریق سه عدد با تعریف متغییر subs*/

    printf("\nEnter two number for formula: ");
    scanf("%d %d", &a, &b);
    sabet=23;
    zarb=(a * b)+sabet;
    printf("Subtraction is : %d", zarb);/*ضرب دو عدد و جمع آن با یک عدد ثابت و تعریف متغییر sabet/zarb*/

    return(0);
}