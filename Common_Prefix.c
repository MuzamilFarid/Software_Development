#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// simple function returning string from character pointer

char * name()
{
    char *myname = "The name is Muzamil";

    return myname;

}


int main()
{
   printf("%s",name());

}