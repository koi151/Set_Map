/*
Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.

Input Format

Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9;

Output Format

In ra các giá trị xuất hiện trong mảng theo thứ tự xuất hiện.

Sample Input 0

8
1 2 3 2 1 3 4 8
Sample Output 0

1 2 3 4 8
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//=========================================
int main ()
{
    FAST_IO;
    int n, x;
    cin >> n;
    map <int,int> mp;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
        mp[it] ++;
    }
    for (auto it : a)
        if (mp[it] != 0)
        {
            cout << it << ' ';
            mp[it] = 0;
        } 
}