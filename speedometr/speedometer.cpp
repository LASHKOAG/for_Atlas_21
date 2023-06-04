#include "speedometer.h"

Speedometer::Speedometer(int max_speed):m_max_speed{max_speed}
{
}

void Speedometer::set_max_speed(int user_speed)
{
    if (user_speed < 0){
        return;
    }
    if (user_speed > 250){
        return;
    }
    m_max_speed = user_speed;
}

int Speedometer::get_max_speed()
{
    return m_max_speed;
}

void Speedometer::set_isKM(bool _isKM)
{
    isKM = _isKM;
}

bool Speedometer::get_isKM()
{
    return isKM;
}

void Speedometer::print()
{
    std::cout << "max_speed: " << m_max_speed << std::endl;
    std::cout << "isKM?: " << isKM << std::endl;
    std::cout << "bg_color: " << m_bg_color << std::endl;
    std::cout << "arrow_color: " << m_arrow_color << std::endl;

}

int Speedometer::convert_from_KM(int KM)
{
    return KM * koef;
}

int Speedometer::convert_from_ML(int ml)
{
    return ml / koef;
}

void Speedometer::set_current_speed(int _user_current_speed)
{
    if (_user_current_speed < 0){return;}
    if (_user_current_speed > m_max_speed) {return;}
    m_current_speed = _user_current_speed;
}

int Speedometer::get_current_speed()
{
    if (m_current_speed > m_max_speed){m_current_speed = m_max_speed;}
    if (m_current_speed < 0){m_current_speed = 0;}

    return m_current_speed;
}

void Speedometer::set_bg_color(std::string _user_bg_color)
{
    if ((_user_bg_color != "green") && (_user_bg_color != "blue")){return;}
    m_bg_color = _user_bg_color;
}

void Speedometer::set_arrow_color(std::string _user_arrow_color)
{
    if ((_user_arrow_color != "red") && (_user_arrow_color != "white")){return;}
    m_arrow_color = _user_arrow_color;
}
