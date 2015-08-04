#ifndef VULRPG_DATA_TYPES
#define VULRPG_DATA_TYPES

typedef struct MONSTER_DATA_
{
	const char *name;
	int hp_max;
	int attack;
	int defense;
	int exp;
} MONSTER_DATA;

typedef struct MONSTER_
{
	MONSTER_DATA *data;
	int hp;
} MONSTER;

#endif
