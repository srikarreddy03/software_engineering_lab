#include <iostream>

/**
 * @brief A class representing a simple rectangle.
 */
class Rectangle {
private:
    float length; /**< Length of the rectangle. */
    float width; /**< Width of the rectangle. */

public:
    /**
     * @brief Constructor to initialize length and width.
     * @param len Length of the rectangle.
     * @param wid Width of the rectangle.
     */
    Rectangle(float len, float wid) : length(len), width(wid) {}

    /**
     * @brief Calculates the area of the rectangle.
     * @return Area of the rectangle.
     */
    float area() const {
        return length * width;
    }

    /**
     * @brief Calculates the perimeter of the rectangle.
     * @return Perimeter of the rectangle.
     */
    float perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5, 3);
    
    // Print area and perimeter
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;

    return 0;
}
