#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "game_func.h"
#include "game_data.h"
#include "game_data_types.h"
#include "game_i18n.h"
#include "game_banner.h"

char username[64] = "root";
int hp, hp_max = 100;
int mp, mp_max = 10;


void show_monster(const MONSTER *monster)
{
	printf("%s [%s]\n", _("怪物"), monster->data->name);
	show_bar("HP", monster->hp, monster->data->hp_max);
}

void spawn_monster(MONSTER *target, MONSTER_DATA *info)
{
	target->data = info;
	target->hp = info->hp_max;
}

void status()
{
	printf("%s [%s]\n", _("勇者"), username);
	show_bar("HP", hp, hp_max);
	show_bar("MP", mp, mp_max);
}

void input_username()
{
    char name[4096];
    scanf("%s", name);
    strcpy(username, name);
}

void output_username()
{
    printf(username);
}

int main(int argc, char* argv[])
{
	system(_("title 勇者的冒險"));

    puts(BANNER_VUL_RPG);

	printf("%s%s\n%s\n> ", _("勇者"), _( "，你終於醒了..."), _("你的名字叫做？" ));
    input_username();

	printf("%s", _("你好，"));
    output_username();
    printf("\n%s %s %s\n", _("我是村長"), _("r00t"), _("，我的村民們最近常常被怪物襲擊，請幫幫我！"));

	hp = hp_max;
	mp = mp_max;
	status();
	MONSTER m;
	int i;
	for(i = 0; i < monster_list_count; i++) {
		spawn_monster(&m, &monster_list[i]);
		show_monster(&m);
	}
	while(1);
}
