int n;
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {
        printf("Enter: ");
        scanf("%d",&a[i]);
    }
    printf("The sum is:%d",takeElements(a));
    return 0;
}
