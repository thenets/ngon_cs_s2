#include <iostream>
#include "player.h"

player::player(int a_health, int a_damage)
{
	m_health = new int;
	m_damage = new int;

	set_health(a_health);
	set_damage(a_damage);
}

player::~player()
{
	delete m_health;
	delete m_damage;
}

int player::get_health()
{
	return *m_health;
}

void player::set_health(int a_health)
{
	if (a_health > 0) {
		*m_health = a_health;
		m_is_alive = true;
	}
	else {
		*m_health = 0;
		m_is_alive = false;
	}
}

int player::get_damage()
{
	return *m_damage;
}

void player::set_damage(int a_damage)
{
	*m_damage = a_damage;
}

bool player::is_alive()
{
	return m_is_alive;
}

void player::take_damage(int a_damage)
{
	set_health(get_health() - a_damage);
}

void player::debug()
{
	std::cout
		<< "# player stats"
		<< "\nhealth: " << get_health()
		<< "\ndamage: " << get_damage()
		<< "\n\n";
}
