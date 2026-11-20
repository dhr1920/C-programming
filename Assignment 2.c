/*#include <stdio.h>

int main() {
    int a, b;


    printf("Enter value of a: ");
    scanf("%d", &a);

     printf("Enter value of b:");
    scanf("%d", &b);


    if (a > b) {
        printf("Largest = %d\n", a);
        printf("Smallest = %d\n", b);
    } else {
        printf("Largest = %d\n", b);
        printf("Smallest = %d\n", a);
    }

    return 0;
}*/



/*#include <stdio.h>

int main() {
    int a, b ,c;


printf("Enter value of a: ");
    scanf("%d", &a);


printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    if(a>b && a>c){

    printif("%d is the largest value",a);

    if(b>c){
    printf("%d is the smallest value",c);
    }

    else{
        printf("%d is the smallest value",b)
    }

                }

 if(b>a && b>c){

    printif("%d is the largest value",b);

    if(a>c){
    printf("%d is the smallest value",c);
    }

    else{
        printf("%d is the smallest value",a)
    }

                }

if(c>a && c>b){

    printif("%d is the largest value",a);

    if(a>b){
    printf("%d is the smallest value",a);
    }

    else{
        printf("%d is the smallest value",b)
    }

                }



    return 0;
}*/


/*#include <stdio.h>

int main() {
    float gross, allowance , deduction , net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {

        allowance = 0.10 * gross;
        deduction = 0.03 * gross;
    }
    else if (gross > 5000) {


        allowance = 0.07 * gross;
        deduction = 0.02 * gross;
    }


    else {
        allowance = 0;
        deduction = 0;
    }

    net = gross + allowance - deduction;

    printf("Net Salary = %f\n", net);

    return 0;
}*/


/*#include <stdio.h>

int main()

{

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0) {

        printf("The number is divisible by 7\n");

    }

    else {
        printf("The number is not divisible by 7\n");
    }

    return 0;
}*/


/*#include <stdio.h>


int main() {


    float gross_sales , discount , net_sales;

    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);



    if (gross_sales > 20000)
     {
        discount = 0.15 * gross_sales;
    }

    else if (gross_sales > 10000) {

        discount = 0.10 * gross_sales;
    }

    else {
        discount = 0.05 * gross_sales;
    }

    net_sales = gross_sales - discount;

    printf("Net Sales = %f\n", net_sales);

    return 0;
}*/



/*#include<stdio.h>

int main()
{
     int m1, m2, m3, total;
     float average;

     printf("Enter marks of three subjects : ");
     scanf("%d %d %d", &m1, &m2, &m3);

     total = m1 + m2 + m3;
     average = total / 3.0;

     printf("\n Total Marks = %d", total);
     printf("\nAverage = %.2f", average);

     if (m1 < 35 || m2 < 35 || m3 < 35)
     {
          printf("\nGrade : Fail");
     }
     else if (average >= 70)
     {
          printf("\nGrade : Distinction");
     }
     else if (average >=60)
     {
          printf("\nGrade : First Class");
     }
     else if (average >=50)
     {
          printf("\nGrade : Second class");
     }
     else if (average >=35)
     {
          printf("\nGrade : Third Class");
     }
     else
     {
          printf("\nGrade : Fail");
     }
      return 0;

}*/
