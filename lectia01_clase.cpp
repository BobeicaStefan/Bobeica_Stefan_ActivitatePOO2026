
#include <iostream>
#include <string>
using namespace std;

class Companie {
private:
    string nume;
    float cifraAfaceri;

public:
    Companie() {
        nume = "Firma necunoscuta";
        cifraAfaceri = 0;
    }

    void afisare() {
        cout << "Nume: " << nume << endl;
        cout << "Cifra de afaceri: " << cifraAfaceri << endl;
    }
};

int main() {
    Companie c1;
    c1.afisare();

    return 0;
}
