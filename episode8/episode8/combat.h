#pragma once

#include "player.h"

class combat
{
	player* m_player_1;
	player* m_player_2;

public:
	combat(player* a_player_1, player* a_player_2);

	player* get_player_1();
	void set_player_1(player* a_player);
	player* get_player_2();
	void set_player_2(player* a_player);

	void do_combat();
};

