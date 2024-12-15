#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));

    // 0 -> gun
    // 1 -> snake
    // 2 -> water

    int player,computer = rand() % 3;

    printf("0 for Gun, 1 for snake, 2 for water: ");
    scanf("%d",&player);

    if (computer == 0 && player == 0 || computer == 1 && player == 1 || computer == 2 && player == 2)
    {
        printf("Its a draw!!");
    }
    else if (computer == 0 && player == 1)
    {
        printf("Computer won!!\n");
        printf("Computer choise was 'GUN'.");
    }
    else if (computer == 0 && player == 2)
    {
        printf("You won!!\n");
        printf("Computer choise was 'GUN'.");
    }
    else if (computer == 1 && player == 0)
    {
        printf("You won!!\n");
        printf("Computer choise was 'SNAKE'.");
    }
    else if (computer == 1 && player == 2)
    {
        printf("You won!!\n");
        printf("Computer choise was 'SNAKE'.");
    }
    else if (computer == 2 && player == 0)
    {
        printf("Computer won!!\n");
        printf("Computer choise was 'WATER'.");
    }
    else if (computer == 2 && player == 1)
    {
        printf("You won!!\n");
        printf("Computer choise was 'WATER'.");
    }
    else
    {
        printf("Somthing went worng.");
    }
    
    
    

    return 0;
}