#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n] = {};
    int ans[n] = {};
    vector<int> buff;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        buff.push_back(arr[i]);
        sort(buff.begin(), buff.end());
        if (buff.size() % 2 == 0)
        {
            ans[i] = buff[buff.size() / 2 - 1];
        }
        else
        {
            ans[i] = buff[buff.size() / 2];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
}