#include <iostream>
#include "player.h"

player::player(int a_health, int a_damage)
{
	m_name = new std::string{};
	m_health = new int;
	m_damage = new int;

	set_health(a_health);
	set_damage(a_damage);
}

player::player(int a_health, int a_damage, std::string a_name)
{
	m_name = new std::string;
	m_health = new int;
	m_damage = new int;

	set_health(a_health);
	set_damage(a_damage);
	set_name(a_name);
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

void player::set_name(std::string a_name)
{
	*m_name = a_name;
}

std::string player::get_name()
{
	return *m_name;
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
		<< "# player '" + get_name() + "'"
		<< "\nhealth: " << get_health()
		<< "\ndamage: " << get_damage()
		<< "\n\n";
}
