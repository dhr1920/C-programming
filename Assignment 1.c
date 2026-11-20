/*#include<stdio.h>

  int main()
  {
     int a, b, sum;
     printf("Enter First number: ");
     scanf("%d", &a);

     printf("Enter Second number: ");
     scanf("%d",&b);

     sum = a + b;

     printf("Addition = %d",sum);

     return 0;
  }*/


  /* #include <stdio.h>

int main() {
    float dollars, rupees, pounds;

    printf("Enter dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;
    pounds = rupees / 70;

    printf("Pounds = %f\n", pounds);

    return 0;
} */



/*#include <stdio.h>

int main() {
    float grams, kg;

    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    kg = grams / 1000;

    printf("Weight in KG = %f\n", kg);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float kg, grams;

    printf("Enter weight in KG: ");

    scanf("%f", &kg);

    grams = kg * 1000;

    printf("Weight in Grams = %f\n", grams);

    return 0;
}*/


/*#include <stdio.h>

int main() {
    float bytes, kb, mb, gb;

    printf("Enter bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("KB = %f\n", kb);
    printf("MB = %f\n", mb);
    printf("GB = %f\n", gb);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (9.0 / 5.0 * c) + 32;

    printf("Temperature in Fahrenheit = %f\n", f);

    return 0;
}*/


/*#include <stdio.h>

int main() {
    float f, c;

    printf("Enter temperature in Fahrenheit: ");


    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("Temperature in Celsius = %f\n", c);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float p, r, n, interest;

    printf("Enter Principal (P), Rate (R), and Time (N): ");


    scanf("%f%f%f", &p, &r, &n);

    interest = (p * r * n) / 100;
    printf("Interest = %f\n", interest);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float l, area, perimeter;

    printf("Enter side length of square: ");
    scanf("%f", &l);

    area = l * l;
    perimeter = 4 * l;

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float l, b, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%f%f", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float r, area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = (22.0 / 7.0) * r * r;

    printf("Area = %f\n", area);

    return 0;
}*/



/*#include<stdio.h>

 int main()
 {
    int a, b, sub;

    printf("Enter First Number :");
    scanf("%d",&a);

    printf("Enter Second Number :");
    scanf("%d",&b);

    sub = a - b;

    printf("Subtraction = %d",sub);
    return 0;


 }*/



/*#include <stdio.h>

int main() {
    float h, l, area;

    printf("Enter height and base length: ");
    scanf("%f%f", &h, &l);

    area = (h * l) / 2;

    printf("Area = %f\n", area);

    return 0;
}*/


 /*#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    allowance = 0.10 * gross;
    deduction = 0.03 * gross;
    net = gross + allowance - deduction;

    printf("Net Salary = %f\n", net);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;

    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);

    discount = 0.10 * gross_sales;
    net_sales = gross_sales - discount;

    printf("Net Sales = %f\n", net_sales);

    return 0;
}*/


/*#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, avg;

    printf("Enter marks of three subjects: ");
    scanf("%f%f%f", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("Total Marks = %f\n", total);
    printf("Average Marks = %f\n", avg);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    int x, y;

   printf("Enter value of x: ");
    scanf("%d", &x);

     printf("Enter value of y:");
    scanf("%d", &y);


    x = x + y; //  Combine both values into x
    y = x - y; // Subtract new y from x to get old x (stored in y)
    x = x - y; //subtract new y from combined x to get old y (stored in x)

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}*/



/*#include<stdio.h>

int main()
 {
    int a, b, mul;

    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    mul = a * b;

    printf("Mutiplication = %ld", mul);

    return 0;
 }*/


 /*#include<stdio.h>
int main()
{
    float a, b, div;

    printf("Enter First number : ");
    scanf("%f",&a);

    printf("Enter Second number :");
    scanf("%f",&b);

    if (b !=0)
     {
        div = a / b;
        printf("Division = %.2f",div);

     }
     else
     {
         printf("Division by zero is not possible");

     }
     return 0;

}*/



/*#include<stdio.h>
int main()
{
      float a,b;

      printf("Enter First Number: ");
      scanf("%f",&a);

      printf("Enter Second Number:");
      scanf("%f",&b);

      printf("\n Addition = %.2f", a + b);
      printf("\n Subtarction = %.2f", a - b);
      printf("\n Multiplication + %.2f", a * b);

      if (b !=0)
      {
        printf("\n Division = %.2f", a / b);
      }
      else
      {
         printf("\n Division is not possible.");
      }
      return 0;

}*/


/*#include<stdio.h>

int main()
{
    int hours, minutes;

    printf("Enter hours: ");
    scanf("%d",&hours);

    minutes = hours * 60;

    printf("Minutes = %d", minutes);

    return 0;
}*/


/*#include<stdio.h>

int main()
{
   float minutes, hours;

   printf("Enter Minutes:");
   scanf("%f",&minutes);

   hours = minutes / 60;

   printf("Hours = %.2f", hours);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float dollars, rupees;

    printf("Enter dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;

    printf("Rupees = %f\n", rupees);

    return 0;
}*/



/*#include <stdio.h>

int main() {
    float rupees, dollars;

    printf("Enter rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / 48;

    printf("Dollars = %f\n", dollars);

    return 0;
}*/
