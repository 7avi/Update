// AutomobilSedan.hpp
#pragma once
#include "Automobil.hpp"

class AutomobilSedan : public Automobil {
private:
    static int numarMaximObiecte;
    static int numarObiecte;

    std::string combustibil;
    std::string caroserie;
    std::string tractiune;
    int putere;
    std::string echipare;
    const char* VIN;

public:
    AutomobilSedan(std::string combustibil, std::string caroserie, std::string tractiune, int putere, std::string echipare, const char* VIN);

    // Constructor de copiere
    AutomobilSedan(const AutomobilSedan& other);

    // Operator de atribuire
    AutomobilSedan& operator=(const AutomobilSedan& other);

    // Destructor
    virtual ~AutomobilSedan();

    // Implementațiile funcțiilor virtuale pure
    std::string getCombustibil() const override;
    std::string getCaroserie() const override;
    std::string getTractiune() const override;
    int getPutere() const override;
    std::string getEchipare() const override;
    const char* getVIN() const override;

    // Funcții statice
    static int getNumarMaximObiecte();
    static int getNumarObiecte();
};
