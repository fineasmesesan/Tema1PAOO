#include "tema1.h"


tema1::tema1(int value) : data(new int(value)) {}

tema1::~tema1() { //destructor pt eliberarea memoriei
    delete data;
}


int tema1::getData() const { //getter-valoarea lui data
    return *data;
}

void tema1::setData(int value) { //setter-se seteaza o noua valoare pt data
    *data = value;
}
tema1::tema1(const tema1& other) : data(new int(*other.data)) {}//se copiaza constructorul
tema1::tema1(tema1&& other) noexcept : data(other.data) { //move constructor
  other.data = nullptr;  //verificarea daca constructorul vechi nu mai detine data
}
