#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 1;
    char input1[16];

    while(input != 0)
    {

        printf("*----Gym Logging----*\n");
        printf("1. Start new workout\n");
        printf("2. View previous workouts\n");
        printf("3. Add new exercise\n");
        printf("4. View workout statistics\n");

        fgets(input1, sizeof(input1), stdin);
        input = atoi(input1);

        switch(input)
        {
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        case 4:
            printf("4");
            break;
        case 0:
            printf("Quiting...");
        }

    }

    return 0;
}
