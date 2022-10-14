/*
Cho dãy số A[] gồm có N phần tử, bạn hãy trả lời các truy vấn để xác định xem phần tử X nào đó có nằm trong mảng hay không? Bạn hãy thử giải bài này bằng 3 cách : Set, Map, Binary Search.

Input Format

Dòng đầu tiên là số nguyên N.

Dòng thứ 2 gồm N số nguyên A[i]

Dòng thứ 3 là số lượng truy vấn Q.

Q dòng tiếp theo mỗi dòng là một số nguyên X.

Constraints

1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9; 1≤ Q ≤ 1000;

Output Format

Đối với mỗi truy vấn in ra YES nếu phần tử X xuất hiện trong mảng, ngược lại in ra NO.

Sample Input 0

5
1 2 1 3 4
2
1 
6
Sample Output 0

YES
NO
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
    set <int> se;
    while (n--)
    {
        cin >> x;
        se.insert(x);
    }
    cin >> n;
    while (n --)
    {
        cin >> x;
        cout << (se.find(x) != se.end() ? "YES\n" : "NO\n");
    }
    return 0;
}