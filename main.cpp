#include "GameFlow.h"
#include "RegularLogic.h"
#include "HumanPlayer.h"
#include "ConsoleScreen.h"
/**
 * Noa or
 * 208385534
 */
int main() {
    GameLogic *logic = new RegularLogic();
    Player *player1 = new HumanPlayer(Cell ::X, logic);
    Player *player2= new HumanPlayer(Cell ::O, logic);
    Screen *screen = new ConsoleScreen();
    GameFlow game = GameFlow(logic, player1, player2, screen);
    game.playOneTurn();

    delete(logic);
    delete(player1);
    delete(player2);
    delete(screen);

}