#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

struct Node{

    //Create a linked list, the struct members should contain the following:

    //Each students initals
    //Each students favoriate musical artist
    //Each students dream car
    //Required data for linked list completion
    char *Initials[4];
    char *Artist;
    char *Car;
    struct Node *next;
} ;

void Cycle(struct Node* head_ref, char *UserInitials, char *UserArtist, char *UserCar);

int main()
{
    //Create a menu allowing for the following:

    //Print out of all students and all of their data
    //Print out of all students and only one of their data members on request of user (ex. print out all students and their fav car)
    //Print out of only a specific student (This one can be challanging)
    char *Init;
    char *Art;
    char *C;
    
    struct Node * head = NULL;
    head = malloc(sizeof(struct Node));
    struct Node Butler = {"JAB", "Asian Pop", "Lambo", NULL};
    struct Node Young = {"JOY", "K Pop", "Prius", &Butler};
    struct Node Ogden = {"GEO", "Country", "Monster Truck", &Young};
    {
        /* data */
    };
    
    if (head == NULL)
    {
        return -1;
        
    }
    Cycle(head,Init, Art, C);
}

void Cycle(struct Node* head_ref, char *UserInitials, char *UserArtist, char *UserCar)
{
    //variable only meant to contain yes or no
    char UserInput[4] = {"Yes"};
    //while loop to cycle through user input and insert while moving to the next node
    //Allocating memory and declaring a new node "NewData"
    struct Node* New_node = (struct Node*)malloc(sizeof(struct Node)); 

    New_node->next = (head_ref); 

    printf("Please enter user data followed by *(Example Initials*Artist*Car): \n");
    scanf("%s%*s%*s",&UserInitials,&UserArtist,&UserCar);
    New_node->next = malloc(sizeof(struct Node));
     New_node = New_node->next;
    //Allocating memory based off of what is passed into the funtion through "UserIntials" etc.
    //while loop checking to see if there is another list
    while (New_node != NULL)
    {
        //printf condition just to see on wether or not to break
        printf("Would you like to continue?(Yes/No)");
        scanf("%s",UserInput);
        if (strcmp(UserInput, "Yes") == 0)
        {
            //just scans and places into "UserInitals" etc.
            printf("Please enter user data followed by *(Example Initials*Artist*Car): \n");
            getchar();
            getchar();
            getchar();
            scanf("%s%*s%*s",&UserInitials,&UserArtist,&UserCar);
        }
        else
        {//break if shit doesn't go on
            break;
        }
        //push to the next list
         New_node->next = malloc(sizeof(struct Node));
         New_node = New_node->next;
    }

}