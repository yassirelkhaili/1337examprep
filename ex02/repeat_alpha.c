#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int index;

    index = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 1;
    }
    char *ptr = argv[1];
    while (*ptr)
    {
        index = 0;
        int i = 0;
       while ("abcdefghijklmnopqrstuvwxyz"[index] != '\0' && "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[index] != '\0')
        {
            if (*ptr == "abcdefghijklmnopqrstuvwxyz"[index] || *ptr == "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[index])
            {
                while (i <= index)
                {
                    write(1, ptr, 1);
                    i++;
                }
                printf("%d", i);
            }
            index++;
        }
        ptr++;
    }
    return 0;
}
