#include <iostream>

using namespace std;

int word(string a);

int main() {
    string a;
    getline(cin, a);
    cout << word(a);
    return 0;
}

int word(string a) {
    int count = 1;
    for (int i = 0; i < a.size(); i ++) {
        if (a[i] == ' ') count ++;
    }
    return count;
};