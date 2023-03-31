/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:32:27 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/03/30 13:34:29 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

typedef short t_class;

class s_Rectangle 
{
    int width, height;
    
public:

    void set_values (int,int);
    int area() {return width * height;}
};

class Rectangle {
  int width, height;
public:
  Rectangle(int x, int y) : width(x), height(y) {}
  int area(void) { return width * height; }
};

void s_Rectangle::set_values (int x, int y){
  width = x;
  height = y;
}

int main () 
{
  s_Rectangle rect;

    rect.set_values (3,4);
    
    cout << "test: " << rect.area();
  return 0;

  Rectangle obj (3, 4);
  Rectangle * foo, * bar, * baz;
  foo = &obj;
  bar = new Rectangle (5, 6);
  baz = new Rectangle[2] { {2,5}, {3,6} };
  cout << "obj's area: " << obj.area() << '\n';

  
  cout << "*foo's area: " << foo->area() << '\n';
  
  
  cout << "*bar's area: " << bar->area() << '\n';
  
  cout << "baz[0]'s area:" << baz[0].area() << '\n';
  cout << "baz[1]'s area:" << baz[1].area() << '\n';       
  delete bar;
  delete[] baz;


  return 0;

}