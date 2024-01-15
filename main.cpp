// main.cpp
#include "AutomobilSedan.hpp"
#include <iostream>
#include "Utilitati.hpp"


int main() {
    std::cout << "Creare obiect AutomobilSedan:" << std::endl;
    AutomobilSedan sedan("Benzina", "Sedan", "Fata", 150, "Full", "ABC123456789");

    std::cout << "\nAcces la informatii obiect AutomobilSedan:" << std::endl;
    std::cout << "Combustibil: " << sedan.getCombustibil() << std::endl;
    std::cout << "Caroserie: " << sedan.getCaroserie() << std::endl;
    std::cout << "Tractiune: " << sedan.getTractiune() << std::endl;
    std::cout << "Putere: " << sedan.getPutere() << " CP" << std::endl;
    std::cout << "Echipare: " << sedan.getEchipare() << std::endl;
    std::cout << "VIN: " << sedan.getVIN() << std::endl;

    std::cout << "\nDestructorii vor fi apelati automat cand obiectele ies din contextul lor." << std::endl;

    std::vector<int> numere = { 1, 2, 3, 4, 5 };

    double media = Utilitati::calculMedie(numere);
    Utilitati::afisareMesajPersonalizat("Sper ca e bine :*");

    std::cout << "Media numerelor este: " << media << std::endl;

    return 0;
}


