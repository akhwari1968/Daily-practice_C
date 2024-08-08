#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
int n;
string str;
vector<int> add(vector<int> A, vector<int> B)
{
    vector<int> C;
    for (int i = 0, t = 0; i < A.size() || i < B.size() || t; ++ i )
    {
        if (i < A.size())
            t += A[i];
        if (i < B.size())
            t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    return C;
}
int main()
{
    cin >> n >> str;
    int k = str.size() - 1;
    while (str[k] != '.')
        k --;
    str.erase(k, 1);
    k = str.size() - k;
    vector<int> A;
    for (int i = str.size() - 1; i >= 0; -- i )
        A.push_back(str[i] - '0');
    while (n -- )
        A = add(A, A);
    int p = A[k - 1];
    reverse(A.begin(), A.end());
    while (k -- )
        A.pop_back();
    reverse(A.begin(), A.end());
    if (p >= 5)
        A = add(A, {1});
    for (int i = A.size() - 1; i >= 0; -- i )
        cout << A[i];
    return 0;
}