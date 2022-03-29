void rFilter(char *s)
{
    // Your code goes here
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] < 65 || (s[i] > 90 && s[i] < 97) || s[i] > 122)
            s[i] = '_';
    }
}