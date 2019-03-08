#include <stdio.h>

int main()
{
    FILE * myFile_ptr = fopen("/home/student/Downloads/class/demo_labs/Hank", "r");

     char readFromFile = 0; // Store char-by-char input from myFile_ptr
    if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
    {
        while (readFromFile != EOF) // Continue reading until the end of file
        {
            readFromFile = getc(myFile_ptr); 	// Read one character
            putc(readFromFile, stdout); 		// Print that character
        }
        fclose(myFile_ptr); // Always fclose anything you fopen
    }
    else 			// …Otherwise, fopen() failed
    {
        puts("Error opening file!"); 	// Tell the user and…
        return -1;			// …Return an error value
    }
    return 0;
}