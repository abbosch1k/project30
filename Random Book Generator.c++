#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string books[] = {"1984","HarryPotter","TheHobbit","Dune","SherlockHolmes"};

    cout << "Book: " << books[rand()%5] << endl;

    return 0;
}
