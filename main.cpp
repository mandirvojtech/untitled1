#include <iostream>
#include <vector> // pridani vektoru
using namespace std;
struct Player { // funkce na postavu s pomoci ai abych se naucil s tim co je vektor
    string name;
    int hp;
    int att;
    int x,y;
    vector<string> sprite = { // vykresleni postavy
        " O ",
        "/|\\",
        "/ \\"
    };
};
int main() {
    cout << "Hello World!" << endl;
}
