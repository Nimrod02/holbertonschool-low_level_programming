#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char* dup;

    dup =  malloc(strlen(str + 1));

    if(dup == NULL)
    {
        return (NULL);
    }

    strcpy(dup, str)
    return (dup)

}