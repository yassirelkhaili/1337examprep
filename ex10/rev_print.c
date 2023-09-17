#include <unistd.h>

int main(int argc, char *argv[])
{
    unsigned int strlen = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    char *ptr = argv[1];
    while(*ptr)
    {
        ptr++;
        strlen++;
    }
    ptr = argv[1];
    while(strlen != 0)
    {
        write(1, ptr + strlen - 1, 1);
        strlen--;
    }
    write(1, "\n", 1);
    return 0;
}
