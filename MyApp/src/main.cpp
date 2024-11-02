#include <iostream>
#include "tema1.h"

void demonstrateCopyConstructor(tema1 obj) {
    std::cout << "În demonstrația copy constructor: " << obj.getData() << std::endl;
}

tema1 createTemporaryObject() {
    tema1 temp(100);
    return temp; 
}

int main() {
    tema1 obj1(42);  
    std::cout << "Valoare inițială: " << obj1.getData() << std::endl;

    demonstrateCopyConstructor(obj1);

    
    tema1 obj2 = createTemporaryObject();
    std::cout << "Valoare după move: " << obj2.getData() << std::endl;

    return 0;
}
