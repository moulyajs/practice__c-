//........1

/*Write a program that takes two integer inputs, representing the length and
width of a rectangle, and calculates its area. Then, print the calculated area
as output*/

/*
#include <stdio.h>
int main()
{
    int length, breadth, area;
    printf("enter length\n");
    scanf("%d", &length);
    printf("enter breadth\n");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("area is %d\n", area);
    return 0;
}
*/
// 2.........
/*Take an integer (say A) and a long long integer(say B) as input and perform
following operations -
• Subtract A from max value of INT allowed in 'C'.
• Subtract B from max value of LONG LONG INT allowed in 'C*/
/*
#include <stdio.h>
#include <limits.h>
int main()
{
    int A;
    long long int B;
    printf("int_max is %d\n", INT_MAX);
    printf("long long int max is %d\n", LLONG_MAX);
    scanf("%d", &A);
    scanf("%lld", &B);
    int res_1 = INT_MAX - A;
    long long int res_2 = LLONG_MAX - B;
    printf("res1 is %d\n", res_1);
    printf("res2 is %lld\n", res_2);
    return 0;
}
*/

// 3..........
/*Write a program that calculates the simple interest (SI) based on the given
principal amount (P), interest rate (R), and time period (T). Use the formula
SI = (P * R * T) / 100. Print the calculated simple interest as the output*/
/*
#include <stdio.h>
int main()
{
    float principle_amount, interest_rate, time_period, simple_interest;
    printf("Enter principle amount: ");
    scanf("%f", &principle_amount);
    printf("enter rate of interest:");
    scanf("%f", &interest_rate);
    printf("enter time period in years: ");
    scanf("%f", &time_period);
    simple_interest = (principle_amount * interest_rate * time_period) / 100;
    printf("Simple interest is: %.3f", simple_interest);
    return 0;
}
*/
// 4..........
/*Write a program that takes three integer values as input from the user. The
program should then decrease each of the input integers by 1 and print the
results with a star hash (#) in between them*/
/*
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    a = a - 1;
    b = b - 1;
    c = c - 1;
    printf("Decremented values: #%d#%d#%d", a, b, c);
    return 0;
}
*/

// 5........
/*Create a program that prompts the user to input the radius of a circle. The
program should then compute and display the area of the circle using the
formula: Area = π * (radius^2), use the math.h header file for π (M_PI).*/
/*
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    printf("enter radius of circle\n");
    scanf("%f", &radius);
    area = M_PI * radius * radius;
    printf("area of circle is %f", area);
    return 0;
}
*/
// 6........
/*Write a program to take price and quantity of a product that is bought as
input and print the total cost (with two precision). Use the formula, Total
cost = Price * Quantity*/
/*
#include <stdio.h>
int main()
{
    float price, total_cost, quantity;
    printf("Enter price of item: ");
    scanf("%f", &price);
    printf("Enter quantity purchased: ");
    scanf("%f", &quantity);
    total_cost = price * quantity;
    printf("total cost of the product is = %.2f", total_cost);
    return 0;
}
*/
// 7........
/*Write a C program to read and print an integer. Also, print the return value
of the Input and Output function used*/
/*
#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer: ");
    int scanf_return_value = scanf("%d", &a);//takes the input integer and stores in a
    printf("scanf return value: %d\n", scanf_return_value); // returns how may items were successfully read and assigned
    int printf_return_value = printf("Entered integer is %d\n", a);//prints the entered integer
    printf("printf return value: %d\n", printf_return_value);//returns number of characters printed
    return 0;
}
*/

// 8........
/*Write a C Program to read a lower-case letter from the user and print the
uppercase without using formatted IO functions.*/
/*
#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    putchar(ch - 'a' + 'A'); //putchar(ch - 'A' + 'a') for lowercase
    return 0;
}
*/

// 9........
/*Write a Program to read decimal number as input and prints equivalent
Hexadecimal and Octal number.*/
/*
#include <stdio.h>
int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Equivalent hexadecimal value: %#X\n", decimal);
    printf("Equivalent octal value: %#o\n", decimal);
    return 0;
}
*/
// 10........
/*write a program that takes a floating-point number as input and prints its
exponential form*/
/*
#include <stdio.h>
int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("exponential: %E\n", a);
    return 0;
}
*/
// 11........
/*Program to read two inputs: a floating-point number ‘n’ and an integer ‘k’.
Display the floating-point value in three different ways:
a) rounded off to nearest integer,
b) scientific notation, and
c) round off the precision up to k decimal places
Note: Don’t use built-in functions. Use only printf function*/
/*
#include <stdio.h>
int main()
{
    float n;
    int k;
    printf("enter a floating point number: ");
    scanf("%f", &n);
    printf("enter an integer: ");
    scanf("%d", &k);
    printf("%d\n", (int)n);
    printf("%.0f\n", n);
    printf("%.e\n", n);
    printf("%.*f\n", k, n);
    return 0;
}
*/
// 12..........
/*Write a program that takes the number of days as input from the user and
displays the corresponding number of years*/
/*
#include <stdio.h>
int main()
{
    int days;
    float years;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365.0;
    printf("%d days = %f years\n", days, years);
    return 0;
}
*/
// 13..........
/*Write a program that takes three integer values as input from the user. The
program should then increase each of the input integers by 1 and print the
results with a backward slash (\) in between them*/
/*
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    a = a + 1;
    b = b + 1;
    c = c + 1;
    printf("Incremented numbers: %d\\%d\\%d", a, b, c);
    return 0;
}
*/
