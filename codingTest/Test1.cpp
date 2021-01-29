// B. 문제 1 - 다음의 함수를 작성하세요.
// - 정수 A가 주어졌을 때 정수 A를 다음의 방식으로 바꾸어 반환하는 함수입니다.
// - 정수 A의 첫 번째 숫자 - 마지막 숫자 - 두 번째 숫자 - 마지막에서 두 번째 숫자...
// - 예를 들어 123456이 주어지면, 162534를 반환합니다.
// - 예를 들어 12345가 주어지면, 15243을 반환합니다.
// - A는 0 또는 양수의 임의의 정수이지만, 100,000,000을 초과하는 경우 -1을 반환합니다.
// - 최적 알고리즘을 제출하면 추가 점수를 받을 수 있으며, 최적 알고리즘의 시간 복잡도는 O(N) 알고리즘입니다.

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int solution()
{
    int a;

    scanf("%d", &a);

    if (a < 10)
    {
        printf("%d", a);
        return a;
    }

    if (a > 100000000)
    {
        printf("-1");
        return -1;
    }

    string sa = to_string(a);
    vector<int> ans;

    vector<int> sa1;
    for (int i = 0; i < sa.size() / 2; i++)
    {
        sa1.push_back(sa[i]);
    }

    vector<int> sa2;
    for (int i = sa.size() - 1; i >= sa.size() / 2; i--)
    {
        sa2.push_back(sa[i]);
    }

    for (int i = 0; i < sa1.size(); i++)
    {
        ans.push_back(sa1[i]);
        ans.push_back(sa2[i]);
    }
    if (sa1.size() != sa2.size())
        ans.push_back(sa2[sa2.size() - 1]);

    for (int i = 0; i < ans.size(); i++)
        printf("%c", ans[i]);

    return 0;
}

int main()
{
    solution();
}