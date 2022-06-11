void DisplayStats(player *target);
int SetName(player *target, char name[50]);
player* NewPlayer(class class, char name[50]);

int Fight (player *Attacker, player *Target);

player* NewPlayer(class class, char name[50]) {
  // Allocate memory to player pointer.
  player *tempPlayer = malloc(sizeof(player));
  SetName(tempPlayer, name);

  // Assign stats based on the given class.
  switch(class) {
  case WARRIOR:
    tempPlayer->health = 60;
    tempPlayer->mana = 0;
    tempPlayer->attack = 15;
    tempPlayer->defense = 20;
    tempPlayer->class = WARRIOR;
    break;
  case RANGER:
    tempPlayer->health = 35;
    tempPlayer->mana = 0;
    tempPlayer->attack = 30;
    tempPlayer->defense = 10;
    tempPlayer->class = RANGER;
    break;
  case PRIEST:
    tempPlayer->health = 150;
    tempPlayer->mana = 40;
    tempPlayer->attack = 5;
    tempPlayer->defense = 15;
    tempPlayer->class = PRIEST;
    break;
  case MAGE:
    tempPlayer->health = 20;
    tempPlayer->mana = 60;
    tempPlayer->attack = 40;
    tempPlayer->defense = 20;
    tempPlayer->class = MAGE;
    break;
  case MERCHANT:
    tempPlayer->health = 30;
    tempPlayer->mana = 10;
    tempPlayer->attack = 5;
    tempPlayer->defense = 5;
    tempPlayer->class = MERCHANT;
    break;
  case DANCER:
    tempPlayer->health = 30;
    tempPlayer->mana = 1;
    tempPlayer->attack = 3;
    tempPlayer->defense = 2;
    tempPlayer->class = DANCER;
    break;
  default:
    tempPlayer->health = 10;
    tempPlayer->mana = 0;
    tempPlayer->attack = 10;
    tempPlayer->defense = 10;
    break;
  }

  return tempPlayer;
}

void DisplayStats(player *target)  {
  printf("%s\nHealth: %d\nMana: %d\n\n", target->name, target->health, target->mana);
}

int SetName(player *target, char name[50]) {
  strcpy(target->name, name);
  return 0;
}

int Fight(player *Attacker, player *Target)
{
  int EffectiveDamage = Attacker->attack - Target->defense;
  Target->health -= EffectiveDamage;

  return 0;

}
