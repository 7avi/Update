// AutomobilSedan.cpp
#include "AutomobilSedan.hpp"
#include <iostream>

int AutomobilSedan::numarMaximObiecte = 1;
int AutomobilSedan::numarObiecte = 0;

AutomobilSedan::AutomobilSedan(const AutomobilSedan& other)
    : combustibil(other.combustibil), caroserie(other.caroserie), tractiune(other.tractiune),
    putere(other.putere), echipare(other.echipare), VIN(other.VIN) {
    numarObiecte++;
    std::cout << "Constructor de copiere AutomobilSedan. Numar obiecte: " << numarObiecte << std::endl;
}

AutomobilSedan& AutomobilSedan::operator=(const AutomobilSedan& other) {
    if (this != &other) {
        combustibil = other.combustibil;
        caroserie = other.caroserie;
        tractiune = other.tractiune;
        putere = other.putere;
        echipare = other.echipare;
        VIN = other.VIN;
    }
    return *this;
}

// Implementațiile funcțiilor virtuale pure
std::string AutomobilSedan::getCombustibil() const {
    return combustibil;
}

std::string AutomobilSedan::getCaroserie() const {
    return caroserie;
}

std::string AutomobilSedan::getTractiune() const {
    return tractiune;
}

int AutomobilSedan::getPutere() const {
    return putere;
}

std::string AutomobilSedan::getEchipare() const {
    return echipare;
}

const char* AutomobilSedan::getVIN() const {
    return VIN;
}

AutomobilSedan::AutomobilSedan(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, const char* VIN)
    : combustibil(std::move(combustibil)), caroserie(std::move(caroserie)), tractiune(std::move(tractiune)), putere(putere), echipare(std::move(echipare)), VIN(VIN) {
    if (numarObiecte < numarMaximObiecte) {
        numarObiecte++;
        std::cout << "Constructor AutomobilSedan. Numar obiecte: " << numarObiecte << std::endl;
    }
    else {
        std::cout << "Nu se mai pot crea obiecte AutomobilSedan. Limita atinsa." << std::endl;
        throw std::runtime_error("Limita de obiecte atinsa");
    }
}

AutomobilSedan::~AutomobilSedan() {
    numarObiecte--;
    std::cout << "Destructor AutomobilSedan. Numar obiecte: " << numarObiecte << std::endl;
}

int AutomobilSedan::getNumarMaximObiecte() {
    return numarMaximObiecte;
}

int AutomobilSedan::getNumarObiecte() {
    return numarObiecte;
}
