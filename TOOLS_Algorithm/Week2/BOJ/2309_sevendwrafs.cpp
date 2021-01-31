#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            vector<int> ans;
            int sum = 0;
            int ansi = 0;
            for (int k = 0; k < 9; k++)
            {
                if (k != i && k != j)
                {
                    sum += arr[k];
                    ans.push_back(arr[k]);
                }
            }

            if (sum == 100)
            {
                sort(ans.begin(), ans.end());
                for (int o = 0; o < ans.size(); o++)
                {
                    printf("%d\n", ans[o]);
                }
                return 0;
            }
        }
    }
}