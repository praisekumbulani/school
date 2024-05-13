
#include <iostream>
#include "nperson.h"
int main() {
    person Jane("Jane", 60.0f);
    person John("John", 75.0f);

    if (Jane == John) {
        std::cout << "This is the same person" << std::endl;
    } else {
        std::cout << "This is Not the same person" << std::endl;
    }

    return 0;
}
