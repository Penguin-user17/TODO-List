#include <stdio.h>
#include <stdbool.h>


typedef struct {
    int id;
    char description[251];
    bool is_completed;
} Task;

void print_list_of_actions(void)
{
    printf("\nSelect an action\n");
    printf("1 - add task\n");
    printf("2 - view the list of tasks\n");
    printf("3 - mark the task as completed\n");
    printf("0 - exit\n");
    printf("\n>>");
}

int main(void)
{
    int action = -1;
    printf("\nWelcome to your own TODO-list!\n");
    while (true)
    {
        print_list_of_actions();
        if (scanf("%d", &action) != 1 || !(0 <= action && action <= 3))
        {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("\nIncorrect action, try again\n\n");
            continue;
        }
    }
}