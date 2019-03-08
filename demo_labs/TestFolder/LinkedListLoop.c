void Cycle(struct Node* head_ref, char *UserInitials, char *UserArtist, char *UserCar)
{
    //variable only meant to contain yes or no
    char UserInput[4] = {"Yes"};
    //while loop to cycle through user input and insert while moving to the next node
    //Allocating memory and declaring a new node "NewData"
    struct Node* New_node = (struct Node*)malloc(sizeof(struct Node)); 

    New_node->next = (head_ref); 

    //Allocating memory based off of what is passed into the funtion through "UserIntials" etc.
    //while loop checking to see if there is another list
    while (New_node->next != NULL)
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
            scanf("%d%*d%*d",&UserInitials,&UserArtist,&UserCar);
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