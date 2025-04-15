#include <iostream>
#include <cmath>
#include <iomanip>

const double pi = 3.14159265358979323846;

double degree_to_radian(double degree){
    return degree * (pi/180.0);
}

int main(){
    double x, y, z;
    double thrust;
    double angle;
    double warp_factor;

    std::cout << "\nInsert coodrinates (x, y, z): ";
    std::cin >> x >> y >> z;
    std::cout << "\nInsert thrust power: ";
    std::cin >> thrust;
    std::cout << "\nInsert angle in degrees: ";
    std::cin >> angle;
    std::cout << "\nInsert warp factor: ";
    std::cin >> warp_factor;

    double angle2 = degree_to_radian(angle);

    double new_x = (x + thrust * cos(angle2)) * warp_factor;
    double new_y = (y + thrust * sin(angle2)) * warp_factor;
    double new_z = z + (thrust / warp_factor);

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "\nWelcome to your new destination.\n" << std::endl;
    std::cout << "X: " << new_x << std::endl;
    std::cout << "\nY: " << new_y << std::endl;
    std::cout << "\nZ: " << new_z << std::endl;

    return 0;
}