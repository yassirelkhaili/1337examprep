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
        if ((*ptr >= 'A' && *ptr <= 'Y') || (*ptr >= 'a' && *ptr <= 'y'))
        {
            *ptr += 1;
            write(1, ptr, 1);
        } else if (*ptr == 'Z' || *ptr == 'z')
        {
             *ptr = *ptr - 25;
             write(1, ptr, 1);
        } else 
        {
            write(1, ptr, 1);
        }
        ptr++;
    }
    write(1, "\n", 1);
    return 0;
}
