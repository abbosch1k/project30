#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string genres[]={"Rock","Pop","Jazz","HipHop","Classical"};

    cout << "Genre: " << genres[rand()%5] << endl;

    return 0;
}
