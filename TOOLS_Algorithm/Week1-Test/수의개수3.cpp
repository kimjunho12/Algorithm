#include <stdio.h>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    multimap<int, int> count;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        count.insert(make_pair(num, 0));
    }

    while (!count.empty())
    {
        printf("%d %d\n", *count.begin(), count.count(*count.begin()));
        count.erase(count.begin(), ++count.begin());
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d %d\n", count.count(count.begin()));
    // }
}
