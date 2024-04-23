#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

Point middlePoint(Point p1, Point p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

double triangleArea(Point p1, Point p2, Point p3) {
    double area = 0.5 * fabs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y) + p3.x*(p1.y-p2.y)));
    return area;
}

int main() {
    Point p1 = {2, 3};
    Point p2 = {5, 1};
    Point p3 = {-1, 4};

    double dist = distance(p1, p2);
    printf("Distance between p1 and p2: %.2f\n", dist);

    Point midPoint = middlePoint(p1, p2);
    printf("Midpoint between p1 and p2: (%.2f, %.2f)\n", midPoint.x, midPoint.y);

    double area = triangleArea(p1, p2, p3);
    printf("Area of triangle with vertices p1, p2, p3: %.2f\n", area);

    return 0;
}
