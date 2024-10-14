#include "Point3D.h"
#include <iostream>
using namespace std;

Point3D::Point3D() {
    x = 0;
    y = 0;
    z = 0;
}

Point3D::Point3D(int x1, int y1, int z1) {
    x = x1;
    y = y1;
    z = z1;
}

void Point3D::display() {
    cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
}
