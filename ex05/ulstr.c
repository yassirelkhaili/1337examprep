#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    char *ptr = argv[1];
    while (*ptr)
    {
        if (*ptr >= 65 && *ptr <= 90)
        {
            *ptr = *ptr + 32;
        } else if (*ptr >= 97 && *ptr <= 122)
        {
            *ptr = *ptr - 32;
        }
        ptr++;
    }
    while (*argv[1])
    {
        write(1, argv[1]++, 1);
    }
    write(1, "\n", 1);
    return 0;
}
