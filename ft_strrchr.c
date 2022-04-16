char	*ft_strrchr(const char *s, int c)
{
    char x;
    char *ptr;
    int i;

    x = (char)c;
    ptr = 0;
    i = 0;

    while (s[i])
    {
        if (s[i] == x)
            ptr = (char *)s + i;
        i++;
    }
    if (x == '\0')
        ptr = (char *)s + i;
    return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
//     char string[] = "Hello, world!!";

//     char *toPrint = ft_strrchr(string, 108);
//     printf("%s\n", toPrint);
// }