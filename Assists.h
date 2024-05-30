#ifndef ASSISTS_H
#define ASSISTS_H

#include <tuple>
#include <cmath>

class Assists {
public:
    static std::tuple<int, int> createRandomLocation(int maxX, int maxY) {
        return std::make_tuple(rand() % maxX, rand() % maxY);
    }

    static double calculateEuclideanDistance(const std::tuple<int, int>& location1, const std::tuple<int, int>& location2) {
        int x1 = std::get<0>(location1);
        int y1 = std::get<1>(location1);
        int x2 = std::get<0>(location2);
        int y2 = std::get<1>(location2);

        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

#endif  // ASSISTS_H