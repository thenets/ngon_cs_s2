#include <iostream>
#include "combat.h"

combat::combat(player* a_player_1, player* a_player_2)
{
	m_player_1 = a_player_1;
	m_player_2 = a_player_2;
}

player* combat::get_player_1()
{
	return m_player_1;
}

void combat::set_player_1(player* a_player)
{
	m_player_1 = a_player;
}

player* combat::get_player_2()
{
	return m_player_2;
}

void combat::set_player_2(player* a_player)
{
	m_player_2 = a_player;
}

void combat::do_combat()
{
	int round{ 0 };
	while (m_player_1->is_alive() and m_player_2->is_alive()) {
		round++;

		m_player_1->take_damage(m_player_2->get_damage());
		m_player_2->take_damage(m_player_1->get_damage());

		/*std::cout << "# --- Round " << round << "--- #\n";
		m_player_1->debug();
		m_player_2->debug();*/
	}

}
