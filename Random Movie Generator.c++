#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string movies[] = {"Avatar","Titanic","Inception","Matrix","Interstellar"};

    cout << "Movie: " << movies[rand()%5] << endl;

    return 0;
}
