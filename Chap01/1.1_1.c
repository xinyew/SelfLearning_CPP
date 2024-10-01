// on Windows,  we could  set this to 1 to  use __mingw_vfprintf
#define __USE_MINGW_ANSI_STDIO 0 

#include <stdio.h>
int main()
{
    printf("Hahaha");
    return 1;   // just to show error symbol on terminal
}