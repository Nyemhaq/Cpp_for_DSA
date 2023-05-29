#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, i;
    cin >> N;
    int *A = new int[N];
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int M;
    cin >> M;
    int *B = new int[M];
    for (i = 0; i < N; i++)
    {
        B[i] = A[i];
    }
    delete[] A;
    for (i = N; i < M; i++)
    {
        cin >> B[i];
    }
    for (i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}