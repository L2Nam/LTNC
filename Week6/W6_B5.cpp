#include <iostream>

using namespace std;

class Area
{
public:
    float length;
    float breadth;
    float returnArea()
    {
        return length * breadth;
    }
};

int main()
{
    Area s;
    cin >> s.length >> s.breadth;
    cout << s.returnArea();
    return 0;
}