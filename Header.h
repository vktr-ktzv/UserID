#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int WriteUserID(FILE* fp, unsigned int userID, char* username);
bool SearchUserID(FILE* fp, unsigned int userID);
