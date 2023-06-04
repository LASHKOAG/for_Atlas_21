#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H
#include <iostream>
#include <string>

class Speedometer
{
public:
    Speedometer(int max_speed);

    void set_max_speed(int user_speed);

    //get
    int get_max_speed();

    //set isKM
    void set_isKM(bool _isKM);

    //get Is KM
    bool get_isKM();

    //---
    void print();
    int convert_from_KM(int km);
    int convert_from_ML(int ml);

    void set_current_speed(int _user_current_speed);
    int get_current_speed();

    void set_bg_color(std::string _user_bg_color);

    //ToDo: getter

    void set_arrow_color(std::string _user_arrow_color);

private:
    const int m_min_speed{0};
    const float koef{1.6};
    std::string m_bg_color{"green"};
    std::string m_arrow_color{"red"};
    int m_max_speed;
    bool isKM{true};
    int m_current_speed{0};

};

#endif // SPEEDOMETER_H
