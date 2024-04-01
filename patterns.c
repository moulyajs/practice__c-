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
