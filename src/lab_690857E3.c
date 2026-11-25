#include <stdio.h>
#include <string.h>


void copy(char *psource, char *ptarget, unsigned num_char)
{
    while (*psource != '\0' && num_char > 0)
    {
        *ptarget = *psource;
        psource++;
        ptarget++;
        num_char--;
    }

    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    unsigned count = 0;

    while (*psrc1 != '\0' && count < num_char)
    {
        *ptarget = *psrc1;
        psrc1++;
        ptarget++;
        count++;
    }

    while (*psrc2 != '\0' && count < num_char)
    {
        *ptarget = *psrc2;
        psrc2++;
        ptarget++;
        count++;
    }

    *ptarget = '\0';
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above
