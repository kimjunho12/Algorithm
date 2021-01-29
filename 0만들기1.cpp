#include <stdio.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == 0)
            {
                printf("%d %d", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("-1");
}