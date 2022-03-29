void reverse(char *s)
{
    // Your code goes here
    int n = strlen(s);
    char *p = new char[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = s[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = p[i];
    }
}