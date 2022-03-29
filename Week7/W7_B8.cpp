int **transpose(int **matrix, int nRows, int nCols)
{
    int **p = new int *[nCols];
    for (int i = 0; i < nCols; i++)
    {
        *(p + i) = new int[nRows];
    }
    for (int i = 0; i < nCols; i++)
    {
        for (int j = 0; j < nRows; j++)
        {
            p[i][j] = matrix[j][i];
        }
    }
    return p;
}