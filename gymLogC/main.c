#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "exercise.h"

int main()
{
    int input = 1;
    int workout = 0;
    char input1[16];
    int exerciseCount = 0;

    struct Exercise exercises[100];

    FILE *file;
    void addExercise(struct Exercise exercises[], int *exerciseCount); //3
    void viewExercise(struct Exercise exercises[], int exerciseCount); //4

    while(input != 0)
    {

        printf("*----Gym Logging----*\n");
        printf("1. Start new workout\n");
        printf("2. View previous workouts\n");
        printf("3. Add new exercise\n");
        printf("4. View all exercises\n");
        printf("5. View workout statistics\n");
        printf("0. Quit program\n");

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
            addExercise(exercises, &exerciseCount);
            break;
        case 4:
            viewExercise(exercises, exerciseCount);
            break;
        case 5:
            printf("5");
            break;
        case 0:
            printf("Quiting...\n");
            break;
        default:
            printf("Write a number between 0-5\n");
            break;
        }

    }

    return 0;
}


void addExercise(struct Exercise exercises[], int *exerciseCount) //3
{
    if(*exerciseCount >= 100)
    {
        printf("Max number of exercises achieved");
        return;
    }
    printf("Write the name of the exercise: ");
    fgets(exercises[*exerciseCount].exerciseName,sizeof(exercises[*exerciseCount].exerciseName),stdin);
    (*exerciseCount)++;
}

void viewExercise(struct Exercise exercises[], int exerciseCount) //4
{
    for(int i = 0; i < exerciseCount; i++)
    {
        printf("%s", exercises[i].exerciseName);
    }
}
