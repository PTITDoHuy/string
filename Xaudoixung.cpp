#include <iostream>
using namespace std;
bool check(string s)
{
    int n = s.size();
    int j = n - 1;
    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] != s[j])
            return false;
        --j;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}