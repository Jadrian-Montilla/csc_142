/*
    Rectangle method
    Jadrian
*/

#pragma once

class Rectangular
{
private:
    double length;
    double width;
public:
    double area;

    inline double getLength(){
        return length;
    }
    inline double getWidth(){
        return width;
    }
    inline double getArea(){
        area = length * width;
        return area;
    }

    inline void setLength(double mylength){
        length = mylength;
    }
    inline void setWidth(double mywidth){
        width = mywidth;
    }
};

