// Utilitati.cpp
#include "Utilitati.hpp"

void Utilitati::afisareMesajPersonalizat(const std::string& persoms) {
    std::cout << "Mesaj personalizat: " << persoms << std::endl;
}

double Utilitati::calculMedie(const std::vector<int>& numere) {
    if (numere.empty()) {
        std::cerr << "Eroare: Vectorul de numere este gol." << std::endl;
        return 0.0; 
    }

    int suma = 0;
    for (int numar : numere) {
        suma += numar;
    }

    return static_cast<double>(suma) / numere.size();
}
