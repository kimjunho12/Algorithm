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
    vector<int> Maxbuff;
    vector<int> Minbuff;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if (n/2 < num){
            Minbuff.push_back(num);
        }else
        {
            Maxbuff.push_back(num);
        }
    }
}