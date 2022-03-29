#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s.insert(s.begin() + i + 1, '*');
            i++;
        }
    }
    cout << s;
    return 0;
}