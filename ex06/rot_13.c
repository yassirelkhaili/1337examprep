#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    char *ptr = argv[1];
    while(*ptr)
    {
        if((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
        {
            *ptr += 13;
        } else if ((*ptr > 'M' && *ptr <= 'Z') || (*ptr > 'm' && *ptr <= 'z'))
        {
            *ptr -= 13;
        }
        ptr++;
    }
    while(*argv[1])
    {
        write(1, argv[1]++, 1);
    }
    write(1, "\n", 1);
    return 0;
}
