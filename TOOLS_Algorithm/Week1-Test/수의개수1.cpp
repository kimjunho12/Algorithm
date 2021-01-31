#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int count[10001] = {0,};

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        if (count[i] != 0) printf("%d %d\n", i, count[i]);
    }
}