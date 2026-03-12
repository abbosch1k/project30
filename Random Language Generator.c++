#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string languages[] = {"C++","Python","Java","JavaScript","Go","Rust"};

    cout << "Language: " << languages[rand()%6] << endl;

    return 0;
}
