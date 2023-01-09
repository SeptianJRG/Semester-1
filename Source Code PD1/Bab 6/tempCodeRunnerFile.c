int register1()
{
    clock_t start = clock();
    for (register i=1; i<=100000; i++)
    {
        printf("1");
    }
    clock_t end = clock();
    double elapsed = (end - start) / CLOCKS_PER_SEC;
    printf("\n\nMemerlukan waktu sekitar: %g seconds\n\n", elapsed);
}
int integer1()
{
    clock_t start1 = clock();
    for(int j=1; j<=100000; j++)
    {
        printf("0");
    }
    clock_t end1 = clock();
    double elapsed2 = (end1 - start1) / CLOCKS_PER_SEC;
    printf("\n\nMemerlukan waktu sekitar: %g seconds\n\n", elapsed2);
}
void main()
{
    int n;
    system("cls");
    printf("Pilih tipe ekseskusi: ");
    scanf("%d", &n);
    if(n==1)
    {
        printf(register1());
    }
    else
    {
        printf(integer1());
    }
}