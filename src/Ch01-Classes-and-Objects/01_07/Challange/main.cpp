#include "thermostat.h"

int main()
{
  thermostat livingRoomthermostat = thermostat(22.5, 1, "Living Room");
  livingRoomthermostat.displaySttatus();
  return 0;
}