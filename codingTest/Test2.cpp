// C. 문제 2 - 다음의 함수를 작성하세요.
// - 문자열 S가 주어집니다. 이 문자열은 'A', 'B', 'C', 'D' 네 글자로만 구성되며, 그 길이는 0글자에서 250,000 글자까지 임의로 구성됩니다.
// - 문자열 내에서 'A'와 'B'가 서로 붙어 있으면 서로 소거됩니다.
// - 문자열 내에서 'C'와 'D'가 서로 붙어 있으면 서로 소거됩니다.
// - 더 이상 소거할 수 없을 때 까지 소거를 반복하여 최종 결과를 반환합니다.
// - 예를 들어 "CBACD"라는 문자열이 주어지면 "C"를 반환합니다.
// "CBACD" --> "CCD" ("BA" 소거) --> "C" ("CD" 소거)
// - 예를 들어 "CABABD"라는 문자열이 주어지면 ""(빈 문자열)을 반환합니다.
// "CABABD" --> "CABD" ("AB" 소거) --> "CD" ("AB" 소거) --> "" ("CD" 소거)
// 또는 "CABABD" --> "CABD" ("BA" 소거) --> "CD" ("AB" 소거) --> "" ("CD" 소거)
// 이와 같이 소거 순서는 하나의 문자열에서 여러 개가 있을 수 있지만, 결과는 항상 동일합니다.
// - 최적 알고리즘을 제출하면 추가 점수를 받을 수 있으며, 최적 알고리즘의 시간 복잡도는 O(N) 알고리즘입니다.

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void solution(){
    string s;

    cin >> s;

    vector<char> ans;

    for (int i = 0; i < s.length(); i++)
    {
        ans.push_back(s[i]);
        printf("%c\n", s[i]);
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
    }
    

    printf("%s", s.c_str());
}

int main(){
    solution();
}