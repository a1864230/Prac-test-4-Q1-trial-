#ifndef SPOT_H
#define SPOT_H

#include <tuple>

class Spot {
private:
    std::tuple<int, int> location;
    char category;

public:
    Spot(int x, int y, char c) : location(x, y), category(c) {}

    std::tuple<int, int> getLocation() const {
        return location;
    }

    char getCategory() const {
        return category;
    }

    void setLocation(int x, int y) {
        location = std::make_tuple(x, y);
    }

    void setCategory(char c) {
        category = c;
    }
};

#endif  // SPOT_H