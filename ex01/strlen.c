int	ft_strlen(char *str);

int	ft_strlen(char *str) {
    int strlen = 0;
    while (*str)
    {
        strlen++;
        str++;
    }
    return strlen;
}
