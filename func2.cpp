int main()
{
    int a[5][5] = { 0 };
  
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j) a[i][j] = 1;
            if (i > j) a[i][j] = 2;
            if (i < j) a[i][j] = 3;
            if (i + j == 4) a[i][j] = 4;
            std::cout << std::setw(3) << a[i][j];
        }
    std::cout << std::endl;
    }
}