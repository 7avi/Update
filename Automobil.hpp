// Automobil.hpp
#pragma once
#include <string>

class Automobil {
public:
    Automobil();
    virtual ~Automobil();

    // Funcții virtuale pure pentru a le implementa în clasele derivate
    virtual std::string getCombustibil() const = 0;
    virtual std::string getCaroserie() const = 0;
    virtual std::string getTractiune() const = 0;
    virtual int getPutere() const = 0;
    virtual std::string getEchipare() const = 0;
    virtual const char* getVIN() const = 0;
};
