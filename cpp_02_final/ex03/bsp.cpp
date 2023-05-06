# include "Point.hpp"

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float ret;
    ret = (float)abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
    return (ret);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float triangleArea;
    float pbcArea, pacArea, pabArea;

    triangleArea = area (a.Get_X_Y(GET_X).getRawBits(), a.Get_X_Y(GET_Y).getRawBits(),
                        b.Get_X_Y(GET_X).getRawBits(), b.Get_X_Y(GET_Y).getRawBits(),
                        c.Get_X_Y(GET_X).getRawBits(), c.Get_X_Y(GET_Y).getRawBits());
    
    pbcArea = area (point.Get_X_Y(GET_X).getRawBits(), point.Get_X_Y(GET_Y).getRawBits(),
                    b.Get_X_Y(GET_X).getRawBits(), b.Get_X_Y(GET_Y).getRawBits(),
                    c.Get_X_Y(GET_X).getRawBits(), c.Get_X_Y(GET_Y).getRawBits());

    pacArea = area (a.Get_X_Y(GET_X).getRawBits(), a.Get_X_Y(GET_Y).getRawBits(),
                    point.Get_X_Y(GET_X).getRawBits(), point.Get_X_Y(GET_Y).getRawBits(),
                    c.Get_X_Y(GET_X).getRawBits(), c.Get_X_Y(GET_Y).getRawBits()); 

    pabArea = area (a.Get_X_Y(GET_X).getRawBits(), a.Get_X_Y(GET_Y).getRawBits(),
                    b.Get_X_Y(GET_X).getRawBits(), b.Get_X_Y(GET_Y).getRawBits(),
                    point.Get_X_Y(GET_X).getRawBits(), point.Get_X_Y(GET_Y).getRawBits());
    
    return (triangleArea == (pbcArea + pacArea + pabArea));
}
