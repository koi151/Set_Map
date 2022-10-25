/*
Cho một xâu kí tự S chỉ bao gồm các kí tự từ a tới z. Bạn được yêu cầu thực hiện các nhiệm vụ sau bằng CTDL phù hợp. - 1. Tìm kí tự có tần suất xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất.

Tìm kí tự có tần suất xuất hiện nhỏ nhất và có thứ tự từ điển lớn nhất.
Tìm số lượng kí tự khác nhau trong xâu.
Input Format

Xâu kí tự S.

Constraints

1 ≤ len(S) ≤ 10^6;

Output Format

Dòng đầu tiên in ra kí tự có tần suất lớn nhất, nếu có nhiều kí tự có cùng tần suất in ra kí tự có thứ tự từ điển nhỏ nhất.

Dòng thứ 2 in ra kí tự có tần suất nhỏ nhất, nếu có nhiều kí tự có cùng tần suất thì in ra kí tự có thứ tự từ điển lớn nhất.

Dòng 3 in ra số lượng kí tự khác nhau trong xâu.

Sample Input 0

mghzbzhrucvwjssatuhlwcradwtbmyqdjcksyskvhrgcubvtoimrjwnanfqgenshrjtf
Sample Output 0

h 5
o 1
24
*/

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool cmp1 (pair<char,int>& p1, pair<char,int>& p2)
{
    if (p1.second != p2.second)
        return p1.second > p2.second;
    else return p1.first < p2.first;
}

bool cmp2 (pair<char,int>& p1, pair<char,int>& p2)
{
    if (p1.second != p2.second)
        return p1.second < p2.second;
    else return p1.first > p2.first;
}

//======================================
int main ()
{
    FAST_IO;
    string s;
    int cnt =0;
    cin >> s;
    cin.ignore();
    map <char,int> mp;
    for (int i = 0; s[i]; i++)
    {
        mp[s[i]] ++;
        ++ cnt;
    }
    vector <pair<char, int> > v;
    for (auto it : mp)
    {
         v.push_back(make_pair(it.first,it.second));
    }
    sort(v.begin(), v.end(),cmp1);
    cout << v[0].first << ' ' << v[0].second << '\n';
    sort(v.begin(), v.end(),cmp2);
    cout << v[0].first << ' ' << v[0].second << '\n';
    cout << mp.size();
      
    
    

    return 0;
}
