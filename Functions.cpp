#include "Header.h"

int WriteUserID(FILE* fp, unsigned int userID, char* username)
{
    fseek (fp, 0, SEEK_END);

    fprintf (fp, "\n%u %s", userID, username);

    return 1;
}

bool SearchUserID(FILE* fp, unsigned int userID)
{
    fseek (fp, 0, SEEK_SET);
    
    bool found = false;
    unsigned int scannedID;
    char c;
    

    while ((c = fgetc(fp)) != EOF)
    { 
        ungetc(c, fp);
        fscanf (fp, "%d", &scannedID);

        if (scannedID == userID)
        {
            found = true;
            
            break;
        }

        fgetc (fp); // space
        char username[10];
        fscanf (fp, "%s", username);
        fgetc (fp); // new line
    }

    return found;

}