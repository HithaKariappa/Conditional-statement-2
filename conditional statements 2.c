#include<stdio.h>
int main()
{

    printf("Enter a number of your choice from 1-5\n");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {

    case 1: printf("Food item - Pizza\n Price - Rs 239\n");
    break;
    case 2: printf("Food item - Burger\n Price - Rs 129\n");
    break;
    case 3: printf("Food item - Pasta\n Price - Rs 179\n");
    break;
    case 4: printf("Food item - French fries\n Price - Rs 99\n");
    break;
    case 5: printf("Food item - Samdwich\n Price - Rs 149\n");
    break;
    default: printf("Invalid choice,try again\n");
    }
}
