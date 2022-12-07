#include <stdio.h>

int main()

{
    int i;

    printf("Enter Month Number");

    scanf("%d", &i);

    switch (i)

    {

    case 1:

        printf("no. of days are 31");

        break;

    case 2:

        printf("no. of days are 28/29");

        break;

    case 3:

        printf("no. of days are 31");

        break;

    case 4:

        printf("no. of days are 30");

        break;

    case 5:

        printf("no. of days are 31");

        break;

    case 6:

        printf("n. of days are 30");

        break;

    case 7:

        printf("no. of days are 31");

        break;

    case 8:

        printf("no. of days are 31");

        break;

    case 9:

        printf("no. of days are 30");

        break;

    case 10:

        printf("no. of days are 31");

        break;

    case 11:

        printf("no. of days are 30");

        break;

    case 12:

        printf("no. of days are 31");

        break;

    default:
        printf("Wrong Input");

        break;
    }

    return 0;
}
