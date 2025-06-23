#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>

class thermostat
{
public:
  thermostat(float t, unsigned int m, const std::string &l);
  ~thermostat();
  void displaySttatus() const;

private:
  /* data */
  float temprature;
  unsigned int mode;
  std::string location;
};

#endif