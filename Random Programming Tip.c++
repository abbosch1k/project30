#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string tips[]={
        "Practice coding daily",
        "Read other people's code",
        "Learn algorithms",
        "Debug patiently",
        "Build real projects"
    };

    cout << "Tip: " << tips[rand()%5] << endl;

    return 0;
}
