#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string heroes[]={"Batman","SpiderMan","IronMan","Hulk","Thor"};

    cout << "Hero: " << heroes[rand()%5] << endl;

    return 0;
}
