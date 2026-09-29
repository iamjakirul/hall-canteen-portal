#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#define STUDENT_USER "student"
#define STUDENT_PASS "111"

#define ADMIN_USER   "admin"
#define ADMIN_PASS   "123"


void jack()
{
     printf("_______________________________________Welcome to Hall Canteen________________________________________\n\n");
    char option, block;
    int choice, room, total = 0;

    printf("Enter Block (A or B): ");
    scanf(" %c", &block);

    if (block == 'A' || block == 'a')
    {
        printf("You chose Block A\n");
    }
    else if (block == 'B' || block == 'b')
    {
        printf("You chose Block B\n");
    }
    else
    {
        printf("Invalid Input\n");
        return;
    }

    printf("Enter Room Number: ");
    scanf("%d", &room);

    printf("Enter your meal choice:\n B = Breakfast\n L = Lunch\n D = Dinner\n");
    scanf(" %c", &option);

    printf("\nYou can order multiple items.\n");
    printf("Press 0 to finish ordering.\n\n");

    for (int i = 1; i <= 15; i++)
    {
        if (option == 'B' || option == 'b')
        {
            printf("\nBreakfast Menu:\n");
            printf("1. Ruti        10\n");
            printf("2. Paratha     10\n");
            printf("3. Dal Bhaji   10\n");
            printf("4. Dim Bhaji   20\n");
            printf("5. Khichuri    30\n");
        }
        else if (option == 'L' || option == 'l')
        {
            printf("\nLunch Menu:\n");
            printf("1. Rice        10\n");
            printf("2. Chicken     40\n");
            printf("3. Egg Curry   30\n");
            printf("4. Vorta       10\n");
            printf("5. Vaji        20\n");
            printf("6. Fish Curry  60\n");
            printf("7. Biriyani    120\n");
            printf("8. Dal         FREE\n");
        }
        else if (option == 'D' || option == 'd')
        {
            printf("\nDinner Menu:\n");
            printf("1. Rice        10\n");
            printf("2. Ruti        10\n");
            printf("3. Paratha     10\n");
            printf("4. Dal Vaji    10\n");
            printf("5. Egg Fry     20\n");
            printf("6. Egg Curry   30\n");
            printf("7. Vorta       10\n");
            printf("8. Vaji        20\n");
            printf("9. Fish Curry  60\n");
            printf("10. Biriyani   120\n");
            printf("11. Dal        FREE\n");
        }
        else
        {
            printf("Invalid Input!\n");
            return;
        }

        printf("Enter item number (0 to finish): \n");
        scanf("%d", &choice);

        if (choice == 0)
        {
            return;
        }

        if (option == 'B' || option == 'b')
        {
            if (choice == 1)
            {
                total = total + 10;
            }
            else if (choice == 2)
            {
                total = total + 10;
            }
            else if (choice == 3)
            {
                total = total + 10;
            }
            else if (choice == 4)
            {
                total = total + 20;
            }
            else if (choice == 5)
            {
                total = total + 30;
            }
            else
            {
                printf("Invalid item!\n");
            }
        }
        else if (option == 'L' || option == 'l')
        {
            if (choice == 1)
            {
                total = total + 10;
            }
            else if (choice == 2)
            {
                total = total + 40;
            }
            else if (choice == 3)
            {
                total = total + 30;
            }
            else if (choice == 4)
            {
                total = total + 10;
            }
            else if (choice == 5)
            {
                total = total + 20;
            }
            else if (choice == 6)
            {
                total = total + 60;
            }
            else if (choice == 7)
            {
                total = total + 120;
            }
            else if (choice == 8)
            {
                total = total + 0;
            }
            else
            {
                printf("Invalid Item!\n");
            }
        }
        else if (option == 'D' || option == 'd')
        {
            if (choice == 1)
            {
                total = total + 10;
            }
            else if (choice == 2)
            {
                total = total + 10;
            }
            else if (choice == 3)
            {
                total = total + 10;
            }
            else if (choice == 4)
            {
                total = total + 10;
            }
            else if (choice == 5)
            {
                total = total + 20;
            }
            else if (choice == 6)
            {
                total = total + 30;
            }
            else if (choice == 7)
            {
                total = total + 10;
            }
            else if (choice == 8)
            {
                total = total + 20;
            }
            else if (choice == 9)
            {
                total = total + 60;
            }
            else if (choice == 10)
            {
                total = total + 120;
            }
            else if (choice == 11)
            {
                total = total + 0;
            }
            else
            {
                printf("Invalid item!\n");
            }
        }

        printf("Item added! Current Total = %d tk\n", total);
    }

    printf("\nFinal Total Price = %d tk\n", total);
    printf("Food will reach your room soon!\n");
}

    int rooms[50];

void addStudent()
{
    int floor, room, s;
    printf("Enter floor (0-9): ");
    scanf("%d", &floor);
    printf("Enter room (0-4): ");
    scanf("%d", &room);

    s = floor*5 + room;

    if(rooms[s] < 4)
    {
        rooms[s]++;
        printf("Student added\n");
    }
    else
    {
        printf("Room FULL!\n");
    }
}

void removeStudent()
{
    int floor, room, s;
    printf("Enter floor (0-9): ");
    scanf("%d", &floor);
    printf("Enter room (0-4): ");
    scanf("%d", &room);

    s = floor*5 + room;

    if(rooms[s] > 0)
    {
        rooms[s]--;
        printf("Student removed\n");
    }
    else
    {
        printf("Room already empty\n");
    }
}

void showStatus()
{
    int i, j, s;
    printf("Hall Room Status\n");
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 5; j++)
        {
            s = i*5 + j;
            printf("Floor %d Room %d : %d students", i, j, rooms[s]);
            if(rooms[s] == 4)
                printf(" (FULL)");
            printf("\n");
        }
    }
}
void shourov()
{
    int choice, i;
    for(i = 0; i < 50; i++)
       {

        rooms[i] = 0;
       }

    for(int i = 0; i >= 0; i++)
    {
        printf("\n1. Add student\n");
        printf("2. Remove student\n");
        printf("3. Show status\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
           {
               addStudent();
               }
        else if(choice == 2)
            removeStudent();
        else if(choice == 3)
            showStatus();
        else if(choice == 4)
        {
            printf("Exiting...\n");
            break;
        }
        else{
            printf("Invalid choice!\n");
    }
    }

    return;
}


void mahamudul()
{
    int limit;
    int usage;
    int violationFound = 0;

    printf("___________________________________Hall Elictricity Monitoring system_______________________________\n\n");
for(;;){
    printf("Enter allowed electricity limit (in volts): ");

    scanf("%d", &limit);

    srand(time(0));

    printf("\n_______________________________Rooms That Exceeded Electricity Usage___________________________________\n\n");

    int f,r;
    for ( f = 1; f <= 10; f++)
    {
        for ( r = 1; r <= 5; r++)
        {
            usage = (rand() % 251) + 100;

            if (usage > limit)
            {
                violationFound = 1;
                int roomNumber = f * 100 + r;

                printf("Room %d || Usage: %d V  ||  Status:  LIMIT EXCEEDED ||Action: Email sent to officials for Room %d.\n",
                       roomNumber,usage,roomNumber);
            }
        }
    }

    if (!violationFound)
        printf("No rooms exceeded the electricity limit. \n");

    printf("\n_________________________________Monitorng Finished Thank You______________________________________\n\n");
}

    return;
}

int main()
{
    int role = 0;
    printf("_________________________________________________________Hall Portal___________________________________________________\n\n");

    for(;;){
        int type;
        printf("\nSelect Login\n1 Student\n2 Hall Admin\nChoice: ");
        scanf("%d",&type);

        char u[50], p[50];
        printf("Username: ");
        scanf("%s", u);
        printf("Password: ");
        scanf("%s", p);

        if(type == 1 && strcmp(u, STUDENT_USER) == 0 && strcmp(p, STUDENT_PASS) == 0){
            role = 1;
            printf("Student Login OK\n");
            break;
        }
        else if(type == 2 && strcmp(u, ADMIN_USER) == 0 && strcmp(p, ADMIN_PASS) == 0){
            role = 2;
            printf("Admin Login OK\n");
            break;
        }
        else 
            printf("Invalid Login\n\n");
    }

    for(;;){
        int choice;

        if(role == 1){
            printf("\nSTUDENT MENU\n");
            printf("1 Canteen\n");
            printf("2 Exit\n");
            scanf("%d", &choice);

            if(choice == 1) jack();
            else if(choice == 2) break;
            else printf("Invalid\n");
        }

        if(role == 2){
            printf("\nADMIN MENU\n");
            printf("1 Canteen\n");
            printf("2 Student Hall\n");
            printf("3 Electricity\n");
            printf("4 Exit\n");
            scanf("%d", &choice);

            if(choice == 1) jack();
            else if(choice == 2) shourov();
            else if(choice == 3) mahamudul();
            else if(choice == 4) break;
            else printf("Invalid\n");
        }
    }

    return 0;
}
