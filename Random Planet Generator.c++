#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string planets[]={
        "Mercury","Venus","Earth","Mars",
        "Jupiter","Saturn","Uranus","Neptune"
    };

    cout << "Planet: " << planets[rand()%8] << endl;

    return 0;
}
