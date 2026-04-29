#include <iostream>
#include <vector> // pridani vektoru
using namespace std;
struct Player { // funkce na postavu s pomoci ai abych se naucil s tim co je vektor a struct znamená vlastní proměná co si muzu vytvorit
    string name;
    int hp;
    int att;
    int gold;
};
struct Monster { // na zapis promenych
    string name;
    int hp;
    int att;
    char type; // na typy monster atdd
};
struct Item {
    string name;
    int heal;
    int price;
};
// tedka napisu funkci na overeni vstupu na rozsah jeste urcim jaky ted nevim
int kontrola(int min, int max) {
    int vyber;
    while (!(cin >> vyber) || vyber < min || vyber > max) // kdyz se neco zapise tak jestli to je minimum a mazimum vyberu

};
int main() {

}
