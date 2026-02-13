// CS1410 - Assignment 03
#include <iostream>
#include <iomanip>
using namespace std;

// TODO 1: ShapeKind Enumeration
enum class ShapeKind {
    Circle,
    Square,
    Rectangle
};

// TODO 2: Shape Structure
struct Shape {
    ShapeKind kind;
    double length;
    double width;
};

// Function prototypes
double area(Shape s);
double perimeter(Shape s);
string nameOf(Shape s);
void promptAndReadInputFor(Shape& shape);

// TODO 3: area() definition
double area(Shape s) {
    const double PI = 3.141592653589793;

    if (s.kind == ShapeKind::Circle) {
        double radius = s.length / 2.0; // length = diameter
        return PI * radius * radius;
    }

    // Square or rectangle
    return s.length * s.width;
}

// TODO 4: perimeter() definition
double perimeter(Shape s) {
    const double PI = 3.141592653589793;

    if (s.kind == ShapeKind::Circle) {
        return PI * s.length; // circumference = π * diameter
    } 
    else if (s.kind == ShapeKind::Square) {
        return 4 * s.length;
    }

    // Rectangle
    return 2 * (s.length + s.width);
}

// TODO 5: nameOf() definition
string nameOf(Shape s) {
    if (s.kind == ShapeKind::Circle) return "Circle";
    if (s.kind == ShapeKind::Square) return "Square";
    return "Rectangle";
}

// TODO 6: promptAndReadInputFor() definition
void promptAndReadInputFor(Shape& shape) {
    if (shape.kind == ShapeKind::Circle) {
        cout << "Enter the diameter of a circle: ";
        cin >> shape.length;
        shape.width = shape.length; // diameter for width as well
    }
    else if (shape.kind == ShapeKind::Square) {
        cout << "Enter the length of a square: ";
        cin >> shape.length;
        shape.width = shape.length;
    }
    else {
        cout << "Enter the length and width of a rectangle: ";
        cin >> shape.length >> shape.width;

        // Convert rectangle to square if sides are equal
        if (shape.length == shape.width) {
            shape.kind = ShapeKind::Square;
        }
    }
}

// The main function
int main() {
    // Create shapes
    Shape circle = { ShapeKind::Circle, 0, 0 };
    Shape square = { ShapeKind::Square, 0, 0 };
    Shape rectangle = { ShapeKind::Rectangle, 0, 0 };

    // Prompt user for input
    promptAndReadInputFor(circle);
    promptAndReadInputFor(square);
    promptAndReadInputFor(rectangle);

    // Set numeric output formatting
    cout << fixed << setprecision(2);

    // Print table header
    cout << endl;
    cout << setw(14) << "SHAPE"
         << setw(10) << "WIDTH"
         << setw(11) << "HEIGHT"
         << setw(14) << "PERIMETER"
         << setw(10) << "AREA" << endl;

    // Print each shape's data
    cout << setw(14) << nameOf(circle)
         << setw(10) << circle.width
         << setw(11) << circle.length
         << setw(14) << perimeter(circle)
         << setw(10) << area(circle) << endl;

    cout << setw(14) << nameOf(square)
         << setw(10) << square.width
         << setw(11) << square.length
         << setw(14) << perimeter(square)
         << setw(10) << area(square) << endl;

    cout << setw(14) << nameOf(rectangle)
         << setw(10) << rectangle.width
         << setw(11) << rectangle.length
         << setw(14) << perimeter(rectangle)
         << setw(10) << area(rectangle) << endl;

    return 0;
}
