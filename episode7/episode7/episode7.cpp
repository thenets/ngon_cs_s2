#include <iostream>

#include "combat.h"
#include "player.h"


int main()
{
	int n_battles{ 0 };

	while(true)
	{
		player player1(200, 12);
		player player2(220, 8);

		combat final_battle(&player1, &player2);
		final_battle.do_combat();
		n_battles++;
	}

	std::cout << "Done!\n";
}
