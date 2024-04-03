/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 5; j++)
            printf("%d", j);

        printf("\n");
    }
}
*/
/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            printf("%d ", i);

        printf("\n");
    }
}
*/
/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            printf("* ");

        printf("\n");
    }
}
*/
/*
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            printf("%c ", j + 64);

        printf("\n");
    }
}
*/
/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }
}
*/
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
    }
}
*/
/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}
*/
/*
A
A B
A B C
A B C D
A B C D E
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c ", j + 64);
        printf("\n");
    }
}
*/
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j >= i; j--)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}
*/
/*
A
B A
C B A
D C B A
E D C B A*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
            printf("%c ", j + 64);
        printf("\n");
    }
}
*/
/*
A B C D E
A B C D
A B C
A B
A
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%c ", j + 64);
        printf("\n");
    }
}
*/
/*
A B C D E
B C D E
C D E
D E
E
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
            printf("%c ", j + 64);
        printf("\n");
    }
}
*/
/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}
*/
/*
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
*/
/*
 *
 * *
 *   *
 *     *
 * * * * *
 */
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || i == 5 || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}
*/
/*
1
10
101
1010
10101
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j % 2);
        printf("\n");
    }
}
*/
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
/*
#include <stdio.h>
int main()
{
    int i, j, k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", k++);
        printf("\n");
    }
}
*/
/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/
/*
#include <stdio.h>
int main()
{
    int i, j, k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", (k++) % 2);
        printf("\n");
    }
}
*/
/*
     1
    12
   123
  1234
 12345
 */
/*
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}
*/
/*
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
 */
/*
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
*/
#include <stdio.h>
int main()
{
    int rows = 5; // Number of rows in the pattern
    int i, j;

    // Upper half of the pattern
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}