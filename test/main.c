#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n = 0;
    //int c = 0;
    char low[] = {"abcdefghijklmnopqrstuvwxyz"};
    char cap []= {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};


    for(n=0; n<27;n++){
     putchar(low[n]);
    }
    for(n=0; n<27;n++){
     putchar(cap[n]);
    }
    putchar('\n');
    return 0;
}
