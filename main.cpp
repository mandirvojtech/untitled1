#include <iostream>
#include <ctime>
#include <vector> // pridani vektoru
using namespace std;
// promene hrace
int hracmaxHP, hracHP, hracutok, hracmaxmana, hracmana;
int zlato = 0, levelhrace = 1, hracXP = 0;


int main() {
    srand(time(NULL)); // náhoda ve výběru

    // jak se vybere classa
    while (true) {
        cout << "Vyberte si postavu mlady pane:\n";
        cout << "1) Paladin (Zivot 5, Utok 3, Mana 5)\n";
        cout << "2) Lovec (Zivot 4. Utok 4, Mana 3)\n";
        cout << "3) Mag (Zivot 3, Utok 2, Mana 7) \n";
        cout << "4) Warlock (Zivot 4, Utok 3, Mana 5)\n";
        cout << "Volba: ";
        int volba; cin >> volba;
        if (volba == 1) {
            hracmaxHP = 5; hracutok = 3; hracmaxmana = 5;
            cout << "Class Paladin -> Zivot 5/5, Utok 3, Mana 5/5... \n";
            cout << "Schopnosti: Uder (3 dmg), Uder svetlem (1 vsem a -2 many), Uzdraveni (+1 HP a -1 mana) \n";
        }
    }

}
