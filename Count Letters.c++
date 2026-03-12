#include <iostream>
using namespace std;

int main() {

    string text;
    int letters = 0;

    cout << "Enter text: ";
    cin >> text;

    for(char c : text)
        if(isalpha(c))
            letters++;

    cout << "Letters: " << letters << endl;

    return 0;
}
