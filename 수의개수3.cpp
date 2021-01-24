#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<pair<int, int>> count;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        count.push_back(make_pair(num, 0));
    }

    sort(count.begin(), count.end());

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", count[i].first, count[i].second);
    }
}
