#include <iostream>
using namespace std;

int main() {

    char c;
    int times;

    cout << "Enter character: ";
    cin >> c;

    cout << "How many times: ";
    cin >> times;

    for(int i=0;i<times;i++)
        cout << c;

    return 0;
}
