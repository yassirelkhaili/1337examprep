#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    char *ptr = argv[1];
    while(*ptr && (*ptr == ' ' || *ptr == '\t'))
        ptr++;
    while (*ptr && (*ptr != '\t' && *ptr != ' '))
    {
        write(1, ptr++, 1);
    }
    write(1, "\n", 1);
    return 0;
}
