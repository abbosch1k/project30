#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string sports[]={"Football","Basketball","Tennis","Hockey","Boxing"};

    cout << "Sport: " << sports[rand()%5] << endl;

    return 0;
}
