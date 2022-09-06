#include "Header.h"

int main()
{
    unsigned int userID = getuid();
    FILE* fp = fopen("usersID.txt", "r+");
    char username[20];

    if (SearchUserID(fp, userID) == true)
    {
        fgetc (fp); // space
        fscanf (fp, "%s", username);
        printf ("Hi, i know you, your name is %s, and your ID is %u\n", username, userID);
    }
    else
    {
        

        printf ("What's your name?\n");
        scanf ("%s", username);

        printf ("your Id is - %u\n", userID);

        WriteUserID(fp, userID, username);
    }
    
    fclose (fp);

    return 0;

}