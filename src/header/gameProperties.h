typedef enum ClassEnum  {
  WARRIOR,
  RANGER,
  PRIEST,
  MAGE,
  MERCHANT,
  DANCER,
  PALADIN
} class;

typedef struct playerStructure {
  char name[50];
  class class;
  int health;
  int mana;
  int attack;
  int defense;
} player;
