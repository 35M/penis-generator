#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    string username;
    int ppLength;

    cout << "Please enter a name:" << endl;
    cin >> username;

    srand(time(0));
    ppLength = rand() % 100;

    cout << username << " has a penis size of " << ppLength << " cm."; 

    return 0;

}