#include <unistd.h>

int main(int argc, char *argv[])
{
    char *ptr = argv[1];
    if (argc != 4)
    {
        write(1, "\n", 1);
        return 0;
    }
    while (*ptr)
    {
        if (*ptr == *argv[2])
        {
            *ptr = *argv[3];
        while (*argv[1])
        {
        write(1, argv[1]++, 1);
        }
        return 0;
        } 
        ptr++;
    }
     write(1, "\n", 1);
        return 0;
    return 0;
}
