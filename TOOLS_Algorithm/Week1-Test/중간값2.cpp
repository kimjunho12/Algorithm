#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[n]={};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a, a+n);
    printf("%d", a[n/2]);
}