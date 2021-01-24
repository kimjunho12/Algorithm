#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int ucount[20001] = {0,};

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        ucount[num+10000]++;
    }

    for (int i = 0; i < 20001; i++)
    {
        if (ucount[i] != 0) printf("%d %d\n", i-10000, ucount[i]);
    }
}