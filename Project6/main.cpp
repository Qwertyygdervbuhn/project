#include "Point3D.h"

int main() {
    Point3D p1;
    p1.display();

    Point3D p2(1, 2, 3);
    p2.display();

    p1.x = 5;
    p1.y = 6;
    p1.z = 7;
    p1.display();
}
