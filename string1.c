/* 
_strcmp - compare two strings
@s1: first string
@s2: second strmp
Return: integer
*/

int _strcmp(char s1, chars2)
{
    while (((s1 != '\0') && (s2 != '\0')) && (s1 ==s2))
    {
        s1++;
        s2++;
    }
    if (s1 ==s2)
        return (0);
    else
        return (s1 -s2);
}

/*
_strncmp - compare two string with a fixed length
@s1:string
@s2:strmp
@n: length
Return: Always 0 (success)
*/

int _strncmp(char s1, chars2, size_t n)
{
    size_t i;

    for (i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            return ((int)(s1[i] - s2[i]));
        if (s1[i] == '\0')
            return (0);
    }
    return (0);
}
