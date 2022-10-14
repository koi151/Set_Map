/*
Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu phần tử phân biệt? Chú ý giải bài này với 3 cách : Sử dụng set, map, sắp xếp.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^5; -10^9 ≤ A[i] ≤ 10^9

Output Format

In ra số lượng phần tử khác nhau trong mảng.

Sample Input 0

5
2 1 2 1 3
Sample Output 0

3
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;
//==============================================
int main ()
{
    FAST_IO;
    int n, x;
    cin >> n;
    set <int> s;
    while (n--)
    {
        cin >> x;
        s.insert(x);
    }
    cout << s.size();
    return 0;
}