#include <iostream>

class Vector2D {

private:
    int x, y;
    
public:

    Vector2D(int firstCoordinate, int secondCoordinate) {
        this -> x = firstCoordinate;
        this -> y = secondCoordinate;
    }

    static Vector2D getVector(Vector2D vector2D) {
        return vector2D;
    }
    Vector2D setVector(int firstCoordinate, int secondCoordinate) {
        this -> x = firstCoordinate;
        this -> y = secondCoordinate;
        return *this;
    }

    void add(Vector2D *vector2D) {
        this -> x += vector2D -> x;
        this -> y += vector2D -> y;
    }

    void print2D() const {

        std::cout << "< " << this -> x << " , " << this -> y << " >" << std::endl;
    }
};
