// 1.......
/*Write a program that takes a student's score as input and prints their
corresponding letter grade according to the following scale: A (90-100),
B (80-89), C (70-79), D (60-69), F (0-59)*/
/*
#include <stdio.h>
int main()
{
    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    if (score >= 90)
        printf("your grade is A");
    else if (score >= 80)
        printf("your grade is B");
    else if (score >= 70)
        printf("your grade is C");
    else if (score >= 60)
        printf("your grade is %c", 'D');
    else
        printf("your grade is %c", 'F');
    return 0;
}
*/
// 12.......
/*Write a program that prints the number of days in the given month as input
for the year 2024. Input should be the month’s number. For example, for
“January,” the input is 1 and program should display 31*/
/*
#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("days = %d", 31);
        break;
    case 2:
        printf("days = %d", 29);
        break;
    case 3:
        printf("days = %d", 31);
        break;
    case 4:
        printf("days = %d", 30);
        break;
    case 5:
        printf("days = %d", 31);
        break;
    case 6:
        printf("days = %d", 30);
        break;
    case 7:
        printf("days = %d", 31);
        break;
    case 8:
        printf("days = %d", 31);
        break;
    case 9:
        printf("days = %d", 30);
        break;
    case 10:
        printf("days = %d", 31);
        break;
    case 11:
        printf("days = %d", 30);
        break;
    case 12:
        printf("days = %d", 31);
        break;
    default:
        printf("Invalid month number");
        break;
    }
    return 0;
}
*/
// 3.......
/*: Sam has given a task of listing Leap years from 1000 AD
to till date. Write a C program that takes a year as input and prints if it is a Leap Year
or Not.*/
/*
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
    return 0;
}
*/
// 4.......
/*Write a program that takes a positive number as input and pairwise prints
all the factors of the number.*/
/*
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d ", i);
    return 0;
}
*/

// 5.......
/*. Write a program that accepts the length of three sides of a triangle and
checks if it is an equilateral, isosceles or scalene triangle.
Side of the triangle should be a positive integer. If 0 or negative input is given
program should print “Invalid input.”*/
/*
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0)
    {
        if (a == b && b == c)
            printf("Equilateral triangle");
        else if (a == b || b == c || a == c)
            printf("Isosceles triangle");
        else
            printf("Scalene triangle");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
*/
// 6.........
/*Write a program to determine the eligibility of a
candidate for a driving license based on their age and whether they have a
learner's permit. The program should take two inputs, age and learner's
permit (Y/y for Yes, N/n for No). If the candidate is at least 18 years old and
has a learner's permit, they are eligible for a driving license; otherwise, they
are not eligible.*/
/*
#include <stdio.h>
int main()
{
    int age;
    char learners_permit;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a learner's permit? (Y/N) ");
    scanf(" %c", &learners_permit);
    if (age >= 18 && (learners_permit == 'Y' || learners_permit == 'y'))
    {
        printf("You are eligible to apply for a driver's license");
    }
    else
    {
        printf("You are not eligible to apply for a driver's license");
    }
    return 0;
}
*/

// 7........
/*Write a program that reads a character and prints whether it’s a vowel or
consonant. For any input except alphabets, program should print “Invalid
input.”*/
/*
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

            printf("%c is a vowel", ch);

        else

            printf("%c is a consonant", ch);
    }
    else
    {
        printf("%c is invalid input", ch);
    }
}
*/
// 8.......
/*Write a program that reads a character and prints whether it’s a vowel or
consonant. For any input except alphabets, program should print “Invalid
input.”*/
/*
#include <stdio.h>
int main()
{
    int n, sum = 0;
    float average;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum is %d\n", sum);
    average = (float)sum / n;
    printf("Average is %.1f", average);
    return 0;
}
*/
// 9.......
/*: Write a program to calculate the electricity bill from
number of units based on following criteria:
First 10 units: No Charge
Next 15 units: Rs. 10/unit
Above 25 units: Rs. 25/uni*/
/*
#include <stdio.h>
int main()
{
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    if (units <= 10)
        printf("No charges");
    else if (units <= 15)
    {
        float charge = (units - 10) * 10;
        printf("bill = %.2f", charge);
    }
    else
    {

        float charge = 10 * 15 + (units - 25) * 25;
        printf("bill = %.2f", charge);
    }
    return 0;
}*/

// 10.......
/*Write a program to print the count of digits in a given positive number*/
/*
#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
         count++;
        n = n / 10;

    }
    printf("Number of digits: %d", count);
    return 0;
}
*/
// 11.......
/*1.Write a program to print the count of even numbers in a given range. The
lower and upper value in the range will be given as input.*/
/*
#include <stdio.h>
int main()
{
    int upper, lower;
    int count = 0;
    printf("Enter a range (lower limit upper limit): ");
    scanf("%d %d", &lower, &upper);
    for (int i = lower; i <= upper; i++)
    {
        if (i % 2 == 0)
            count++;
    }
    printf("Number of even numbers between %d and %d: %d", lower, upper, count);
    return 0;
}
*/
// 12.......
/*: Develop a C program to manage student grades for a
course. The program should calculate the final grade for each student based
on their scores in four components: assignments (25% weight), quizzes
(20% weight), midterm exam (25% weight), and final exam (30% weight).
The final grade should be calculated as the weighted sum of the scores in
each component.
Write a program that takes the scores of a student in each component as
input and calculates their final grade. The program should display the final
grade as a letter grade (A, B, C, D, F) based on the following criteria:
A: 90% and above
B: 80% - 89%
C: 70% - 79%
D: 60% - 69%
F: below 60%
*/
/*
#include <stdio.h>
int main()
{
    int assignment, quiz, final_exam, mid_term;
    float final_grade;
    printf("Enter marks of assignment: ");
    scanf("%d", &assignment);
    printf("Enter marks of quiz: ");
    scanf("%d", &quiz);
    printf("Enter marks of mid term: ");
    scanf("%d", &mid_term);
    printf("Enter marks of final exam: ");
    scanf("%d", &final_exam);
    final_grade = (0.25 * assignment) + (0.20 * quiz) + (0.25 * mid_term) + (0.30 * final_exam);
    if (final_grade >= 90)
        printf("A");
    else if (final_grade >= 80)
        printf("B");
    else if (final_grade >= 70)
        printf("C");
    else if (final_grade >= 60)
        printf("D");
    else
        printf("F");
    return 0;
}
*/
// 13.......
/*Write a program in C to calculate the electricity bill for a household based on
the units consumed. The rate of electricity per unit varies as follows:
For the first 100 units, the rate is Rs. 2.50 per unit.
For the next 200 units, the rate is Rs. 4.00 per unit.
For any additional units, the rate is Rs. 6.00 per unit.
The program should read the number of units consumed. Then, calculate and
display the total bill amount*/
/*
#include <stdio.h>
int main()
{
    int units;
    float bill = 0.0;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
        bill = units * 2.50;
    else if (units <= 200)
        bill = 100 * 2.50 + (units - 100) * 4.00;
    else
        bill = 100 * 2.50 + 200 * 4.00 + (units - 300) * 6.00;
    printf("Electricity bill = Rs. %.2f", bill);
    return 0;
}
*/
// 14.......
/*Write a program that checks if a given non-negative integer, is a palindrome.
A palindrome is a number that remains the same when its digits are
reversed. For example, 121 is a palindrome, whereas 1231 is not a
palindrome.
*/
/*
#include <stdio.h>
int main()
{

    int n, temp, digit, rev = 0;
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        printf("digit is %d\n", digit);
        rev = rev * 10 + digit;
        printf("reverse is %d\n", rev);
        n = n / 10;
        printf("n is %d\n", n);
    }
    if (temp == rev)
        printf("Palindrome.");
    else
        printf("Not a Palindrome.");
    return 0;
}
*/
// 15.......
/*Write a program that prints all the numbers from 1
to n that are either multiples of 2 or multiples of 3.*/
/*
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 || i % 3 == 0)
            printf("%d\n", i);
    }
}
*/