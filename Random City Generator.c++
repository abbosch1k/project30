#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string cities[]={"London","Tokyo","Paris","NewYork","Dubai"};

    cout << "City: " << cities[rand()%5] << endl;

    return 0;
}
