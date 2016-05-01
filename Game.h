#ifndef GAME_H
#define GAME_H
#include "Decks.h"

struct Player{
    string name;
    Card* first;
    int money;
    int bet;
    int sum;
    bool BJ;
    bool hasAce;
    bool bust;
};

class Game
{
    public:
        Game(int players, int money);
        ~Game();
        void dealRound(Decks *deck);
        void hit(Player*, Decks *deck);
        void hitDealer(Player*, Decks *deck);
        void placeBets();
        void playRound(Decks *deck);
        void showPlayerHand(Player* player, Decks *deck);
        void showDealerHand(Decks *deck);
        void revealDealerHand(Player* dealer, Decks *deck);
        void hitOrStay(Player* player, Decks *deck);
        void determineWins(Player* player, Player* dealer, Decks *deck);
    protected:
    private:
        vector<Player*> players;
        int playernum;
};

#endif // GAME_H
