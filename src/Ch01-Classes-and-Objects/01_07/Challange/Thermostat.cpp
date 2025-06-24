#include "thermostat.h"

thermostat::thermostat(float t, unsigned int m, const std::string &l)
{
  temprature = t;
  mode = m;
  location = l;
}

thermostat::~thermostat()
{
  std::cout << "the class data is destroyed" << std::endl;
}
void thermostat::displaySttatus() const
{
  std::cout << "location : " << location << " Temperature : " << temprature << " C Mode : " << ((mode == 0)?  "OFF" : ((mode == 1 )? "COOLING" : "HEATING"))  << std::endl;
  
}