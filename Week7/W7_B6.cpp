int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2)
{
    int *p = new int[lenArr1 + lenArr2];
    for (int i = 0; i < lenArr1; i++)
    {
        p[i] = firstArr[i];
    }
    for (int i = 0; i < lenArr2; i++)
    {
        p[lenArr1 + i] = secondArr[i];
    }
    if (firstArr[lenArr1 - 1] > firstArr[0])
        sort(p, p + lenArr1 + lenArr2);
    else
        sort(p, p + lenArr1 + lenArr2, greater<int>());
    return p;
}