#include <stdio.h>

int main()

{
    int i, a;

    scanf("%d", &i);

    switch (i > 0)

    {

    case 1:

        printf("Negative Form is -%d", i);
        break;

    case 0:
        switch (i < 0)
        {
        case 1:

            a = -1 * i;

            printf("Positive Form is %d ", a);
            break;
        case 0:

            printf("Number is zero ");
            break;
        }
    default:

        break;
    }

    return 0;
}
