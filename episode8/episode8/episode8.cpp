#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "player.h"

void invert_vector_string(std::vector<std::string>* v)
{
    std::vector<std::string> inverted_v;
    while (not v->empty())
    {
        inverted_v.push_back(v->back());
        v->pop_back();
    }
    *v = inverted_v;
}

int main()
{
    // Playing with arrays
    {
        std::vector<std::string> games;
        games.push_back("The Legend of Zelda - The Minish Cap");
        games.push_back("Watch_Dogs 2");
        games.push_back("The Sims 4");
        games.push_back("Need for Speed Underground 2");
        games.push_back("Pokémon X");
        games.push_back("Celeste");
        games.push_back("Ori and The Blind Forest");

        invert_vector_string(&games);

        int i = {};
        while (not games.empty() and games.back().size() > 0)
        {
            i++;
            std::cout
                << i << " - "
                << games.back()
                << "\n";

            games.pop_back();
        }
    }
    
    // Merging arrays
    {
        std::vector<std::string> games;
        games.push_back("The Legend of Zelda - The Minish Cap");
        games.push_back("Watch_Dogs 2");

        std::string games_that_i_love = {};
        games_that_i_love = games[0] + "," + games[1];
        games_that_i_love.replace(games[0].size(), 1, " and ");

        std::cout << "I love " + games_that_i_love + ".\n";
    }

    // Shared pointers
    {
        std::vector<std::shared_ptr<player>> players;
        players.push_back(std::make_shared<player>(200, 12, "Miku"));
        players.push_back(std::make_shared<player>(500, 60, "Tsunade"));
        players.push_back(std::make_shared<player>(350, 90, "Mai"));

        std::for_each(players.begin(), players.end(), [](auto& p) {
            p.get()->debug();
        });
    }

    std::cout << "\nDone!\n";
}
