#pragma once
class player
{
	int* m_health;
	int* m_damage;
	bool m_is_alive;

public:
	player(int a_health, int a_damage);
	~player();

	int get_health();
	void set_health(int a_health);
	int get_damage();
	void set_damage(int a_damage);
	bool is_alive();

	void take_damage(int a_damage);

	void debug();
};

