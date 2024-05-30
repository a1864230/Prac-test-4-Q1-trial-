#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include <iostream>

int main() {
    Spot spot(1, 2, 'A');

    std::cout << "Initial Location: (" << std::get<0>(spot.getLocation()) << ", " << std::get<1>(spot.getLocation()) << ")" << std::endl;
    std::cout << "Initial Category: " << spot.getCategory() << std::endl;

    spot.setLocation(3, 4);
    spot.setCategory('B');

    std::cout << "Updated Location: (" << std::get<0>(spot.getLocation()) << ", " << std::get<1>(spot.getLocation()) << ")" << std::endl;
    std::cout << "Updated Category: " << spot.getCategory() << std::endl;