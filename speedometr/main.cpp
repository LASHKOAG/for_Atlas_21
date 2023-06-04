#include <iostream>
#include "speedometer.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

   Speedometer* speed = new Speedometer(250);

   speed->set_max_speed(800);
   speed->set_bg_color("green");
   speed->set_arrow_color("levyi");
   speed->print();

   if (speed != NULL){
        delete speed;
   }

    return 0;
}
