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
  if (mode == 0)
  {
    std::cout << "location : " << location << " Temperature : " << temprature << " C Mode : OFF" << std::endl;
  }
  else if (mode == 1)
  {
    std::cout << "location : " << location << " Temperature : " << temprature << " C Mode : COOLING" << std::endl;
  }
  else if (mode == 1)
  {
    std::cout << "location : " << location << " Temperature : " << temprature << " C Mode : HEATINg" << std::endl;
  }
  else
  {
    std::cout << "Incorrect mode" << std::endl;
  }
}