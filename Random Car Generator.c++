#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string cars[]={"BMW","Toyota","Tesla","Audi","Ford"};

    cout << "Car: " << cars[rand()%5] << endl;

    return 0;
}
