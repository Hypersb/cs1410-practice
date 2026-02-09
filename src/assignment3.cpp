// CS1410 - Assignment 03
#include <iostream>
#include <iomanip>
using namespace std;

//TODO 1: ShapeKind Enumeration goes here
// start by listing the kinds of shapes we support
enum class ShapeKind {
  Circle,
  Square,
  Rectangle
};

//TODO 2: Shape Structure goes here
// this struct holds the type of shape and its dimensions
struct Shape {
  ShapeKind kind;
  double length;
  double width;
};

// Function prototypes and definitions
double area(Shape s);

//TODO 3: area() definition goes here
// calculate and return the area based on the shape type
double area(Shape s) {
  const double PI = 3.141592653589793;

  // for a circle, length represents the diameter
  if (s.kind == ShapeKind::Circle) {
    double radius = s.length / 2.0;
    return PI * radius * radius;
  }

  // for squares and rectangles
  return s.length * s.width;
}

double perimeter(Shape s);

//TODO 4: perimeter() definition goes here
// calculate and return the perimeter of the shape
double perimeter(Shape s) {
  const double PI = 3.141592653589793;

  if (s.kind == ShapeKind::Circle) {
    return PI * s.length;
  }
  else if (s.kind == ShapeKind::Square) {
    return 4 * s.length;
  }

  // rectangle case
  return 2 * (s.length + s.width);
}

string nameOf(Shape s);

//TODO 5: nameOf() definition goes here
// return the name of the shape as a string
string nameOf(Shape s) {
  if (s.kind == ShapeKind::Circle) return "Circle";
  if (s.kind == ShapeKind::Square) return "Square";
  return "Rectangle";
}

void promptAndReadInputFor(Shape& shape);

//TODO 6: promptAndReadInputFor() definition goes here
// ask the user for the correct input based on shape type
void promptAndReadInputFor(Shape& shape) {
  if (shape.kind == ShapeKind::Circle) {
    cout << "Enter the diameter of a circle: ";
    cin >> shape.length;
    shape.width = shape.length;
  }
  else if (shape.kind == ShapeKind::Square) {
    cout << "Enter the length of a square: ";
    cin >> shape.length;
    shape.width = shape.length;
  }
  else {
    cout << "Enter the length and width of a rectangle: ";
    cin >> shape.length >> shape.width;

    // if both sides are equal, it becomes a square
    if (shape.length == shape.width) {
      shape.kind = ShapeKind::Square;
    }
  }
}

// The main function
int main() {
  // start by creating a circle shape
  Shape circle = { ShapeKind::Circle, 0, 0 };

  //TODO 7: define two more shape objects: a square and and a rectangle
  // now create a square and a rectangle
  Shape square = { ShapeKind::Square, 0.0, 0.0 };
  Shape rectangle = { ShapeKind::Rectangle, 0.0, 0.0 };

  //TODO 8: Call the promptAndReadInputFor() function
  // ask the user to enter values for each shape
  promptAndReadInputFor(circle);
  promptAndReadInputFor(square);
  promptAndReadInputFor(rectangle);

  //TODO 9: Print a out a report of these shapes
  // print the table header
  cout << endl;
  cout << setw(14) << "SHAPE"
       << setw(10) << "WIDTH"
       << setw(11) << "HEIGHT"
       << setw(14) << "PERIMETER"
       << setw(10) << "AREA" << endl;

  // print each shape's data
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
