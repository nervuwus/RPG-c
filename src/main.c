#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header/gameProperties.h"
#include "header/players.h"


int main() {
  player *Hero = NewPlayer(MAGE, "Riv");
  player *Villain = NewPlayer(RANGER, "Eralion");

  DisplayStats(Villain);
  Fight(Hero, Villain);
  DisplayStats(Villain);

  return 0;
}
