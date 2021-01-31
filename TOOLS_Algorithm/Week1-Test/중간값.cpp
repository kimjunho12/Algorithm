//중간값1.cpp 

#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main() {
    int a[3];

   scanf("%d %d %d", &a[0], &a[1], &a[2]);
   sort(a, a+3);
   printf("%d", a[1]);
   
}