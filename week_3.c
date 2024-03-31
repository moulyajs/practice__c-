// 1........

/*Write a C program that takes a long long integer as input. The program should print the
hexadecimal representation of the absolute value of the input along with the counts of
vowels, consonants, and digits in its hexadecimal form. Use if-else statements and logical
operators in your code.
*/
/*
#include <stdio.h>
int main()
{
    long long int n;
    int vowels = 0, consonants = 0, digits = 0;
    printf("Enter a hexadecimal number: ");
    scanf("%lld", &n);
    long long int temp = (n < 0) ? -n : n;
    printf("%llx\n", temp);
    while (temp != 0)
    {
        int digit = temp % 16;
        temp = temp / 16;
        if (digit == 10 || digit == 14)
            vowels += 1;
        else if (digit > 10)
            consonants += 1;
        else
            digits += 1;
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    return 0;
}
*/
// 2..........
/*In a class of 11 students with 6 benches in the exam hall. A maximum of 2 students can
sit on a bench during the test. While paper correction it was found that all students
sitting on the same bench have the exact same answer. Given marks of all students in a
shuffled manner, find out the sum of marks obtained by non-cheating students. Write a C
code to achieve the same. Don’t use array or sorting methods*/
/*
#include <stdio.h>
int main()
{
    int marks, answer = 0;
    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &marks);
        answer ^= marks;
    }
    printf("%d", answer);
    return 0;
}
*/
// 3..........
/*Write a C program to perform simple tasks based on operators. Use switch case
statements.
- If $ - Take next 3 floating point numbers input as P, R and T respectively and
calculate simple interest
- If ! - Take next 2 integers and perform arithmetic operations, that is, +, -, *, /. Take
the operator also as input.
- If ? - Take next 2 integers and perform bitwise operations, that is, &, |, Left shift (<)
and Right shift(>). Take operator also as input.*/
/*
#include <stdio.h>
int main()
{
    char operator1;
    printf("enter your choice: $ or ! or ?:");
    scanf("%c", &operator1);
    switch (operator1)
    {
    case '$':
    {
        int P, R, T;
        printf("enter P,R,T:");
        scanf("%d%d%d", &P, &R, &T);
        int SI = (P * R * T) / 100;
        printf("SI=%d", SI);
    }
    break;
    case '!':
    {
        char ch;
        int num1, num2;
        printf("enter 1st number:");
        scanf("%d", &num1);
        printf("enter 2nd number:");
        scanf("%d", &num2);
        printf("enter ur choice : + or - or * or / :");
        scanf("%c", &ch);
        switch (ch)
        {
        case '+':
        {
            printf("%d", num1 + num2);
            break;
        }
        case '-':
        {
            printf("%d", num1 - num2);
            break;
        }
        case '*':
        {
            printf("%d", num1 * num2);
            break;
        }
        case '/':
        {
            printf("%d", num1 / num2);
            break;
        }
                }
    }
    break;

    case '?':
    {
        int n, m;
        char operator2;
        printf("enter 1st number:");
        scanf("%d", &n);
        printf("enter 2nd number:");
        scanf("%d", &m);
        printf("enter ur choice : & or | or < or  >:");
        scanf("%c", operator2);
        switch (operator2)
        {
        case '&':
        {
            printf("%d", n & m);
            break;
        }
        case '|':
        {
            printf("%d", n | m);
            break;
        }
        case '<':
        {
            printf("%d", n << m);
            break;
        }
        case '>':
        {
            printf("%d", n >> m);
            break;
        }
        }
    }
    break;
    }
}
*/
// 4..........
/*Write a program that checks if a given number is a number where the sum of the cube of
each digit is equal to the original number. Use loops and mathematical operations to
achieve this.
*/
/*
#include <stdio.h>
int main()
{
    int num, original, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }
    if (sum == original)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
    return 0;
}
*/
// 5..........
/*Write a C program that takes an integer as input, counts the number of digits in it and
displays the same, and then checks if the (sum of its digits + the product of its digits) is
equal to the original number. If the conditions are met, print the number; otherwise,
display zero. */
/*
#include <stdio.h>
int main()
{
    int n, sum = 0, product = 0, original, count = 0, final_Sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
        count++;
    }
    printf("count = %d\n", count);
    final_Sum = sum + product;
    if (final_Sum == original)
    {
        printf("%d", final_Sum);
    }
    else
    {
        printf("0");
    }
    return 0;
}
*/
// 6..........
/*Develop a C program to implement a versatile unit converter for length measurements.
The program should prompt the user to input the type of conversion and the value to be
converted. The supported conversion types and their respective conversion values are
as follows:
a) Feet to Meters: 1 foot = 0.3048 meter
b) Miles to Kilometers: 1 mile = 1.60934 kilometers
c) Inches to Centimeters: 1 inch = 2.54 centimeters
d) Yards to Meters: 1 yard = 0.9144 meters
e) Nautical Miles to Meters: 1 nautical mile = 1852 meters
The program should perform the selected conversion and display the result along with
the corresponding units.*/
/*
#include <stdio.h>
int main()
{
    printf("enter your choice\n");
    printf("1.Feet to Meters\n2.Miles to Kilometers\n3.inches to centimeters\n4.yards to meters\n5.nautical miles to meters\n");
    int choice;
    scanf("%d", &choice);
    double num, result;
    printf("enter a number:");
    scanf("%lf", &num);
    switch (choice)
    {
    case 1:
    {
        result = num * 0.3048;
        printf("%.2lf feet = %.2lf meters", num, result);
        break;
    }
    case 2:
    {
        result = num * 1.60934;
        printf("%.2lf miles = %.2lf kilometers", num, result);
        break;
    }
    case 3:
    {
        result = num * 2.54;
        printf("%.2lf inches = %.2lf centimeters", num, result);
        break;
    }
    case 4:
    {
        result = num * 0.9144;
        printf("%.2lf yards = %.2lf meters", num, result);
        break;
    }
    case 5:
    {
        result = num * 1852;
        printf("%.2lf nautical miles = %.2lf meters", num, result);
        break;
    }
    default:
    {
        printf("invalid choice");
        break;
    }
    }
    return 0;
}
*/
// 7..........
/*)Develop a C program to determine whether a given positive integer is a Dudeney
number. A Dudeney number is defined as a number that is equal to the cube of the sum
of its digits.*/
/*
#include <stdio.h>
int main()
{
    int n, original, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    int c = sum * sum * sum;
    if (c == original)
    {
        printf("dudeney number");
    }
    else
    {
        printf("not a dudeney number");
    }
    return 0;
}
*/