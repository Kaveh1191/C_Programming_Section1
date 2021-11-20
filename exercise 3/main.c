#include <stdio.h>

int main() {
    int a,b,c,d,e;
    int mult;
    int divi;
    int sum;

    printf("\nEnter value a for multiplication:");

    scanf("%d", &a);

    printf("Enter value b for multiplication:");

    scanf("%d", &b);

    printf("Enter value c for multiplication:");

    scanf("%d", &c);

    mult=a*b*c;
    printf("\a Multiplication is:** %d  \n\n**  \a"  , mult);/*ضرب سه عدد با تعریف متغییر mult و a\برای صدای بوق سیستم*/

    printf("Enter two number for division: ");
    scanf("%d %d", &a, &b);
    divi=a / b;
    printf("Division is :\a\a\a***%d\a\a\a\a\a\a\n\n\n\n###\a\a\a", divi);/*تقسیم دو عدد با تعریف متغییر divi و a\برای صدای بوق سیستم*/

    printf("\n\t\t\t##### ");
    printf("\nEnter five number for sum: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    sum = a + b +c +d +e;

    printf("Sum is : %d", sum);/*جمع پنج عدد با تعریف متغییر sum*/
    printf("\n\t\t\t***** ");


    return 0;
}
