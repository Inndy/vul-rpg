#include <stdint.h>
#include <string.h>

#include "game_i18n.h"
#include "game_data.h"

// MONSTER_LIST_COUNT in game_data.h

MONSTER_DATA monster_list[] = {
	{ "迷你史萊姆", 1, 0, 1, 1  },
	{ "小小史萊姆", 2, 1, 2, 3  },
	{ "大大史萊姆", 5, 3, 4, 9  },
	{ "野狼",       9, 5, 2, 21 }
};

size_t monster_list_count = sizeof(monster_list) / sizeof(MONSTER_DATA);
