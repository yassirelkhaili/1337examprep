#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2);

char    *ft_strcpy(char *s1, char *s2)
{
    char *ptr = s1;
    while (*s1)
    s1++;
    while (*s2)
    *s1++ = *s2++;
    *s1 = '\0';
    return ptr;
}

int main () {
    char s1[] = "Hello World";
    char s2[] = "World";
    printf("%s", ft_strcpy(s1, s2));
    return 0;
}
