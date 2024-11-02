#ifndef TEMA1_H
#define TEMA1_H

class tema1 {
private:
    int* data; 

public:
    //constructor si dest
    tema1(int value);
    ~tema1();

   
    tema1(const tema1& other);       // Copy constructor
    tema1(tema1&& other) noexcept;   // Move constructor

    int getData() const; //getter
     void setData(int value); //setter
};

#endif
