
#include "GameFlow.h"
#include "RegularLogic.h"
#include "HumanPlayer.h"
#include "ConsoleScreen.h"
#include "AIPlayer.h"

/**
 * Noa or
 * 208385534
 */
int main() {
    cout << "Hello!" << '\n' << "Choose how to play othello:" << '\n' <<
         "1: 2 Human players." << '\n' << "2: A Human player and an AI player." << endl;
    int choice;
    cin >> choice;
    Player *player2;
    GameLogic *logic = new RegularLogic();
    Player *player1= new HumanPlayer(Cell ::X, logic);
    if (choice == 1) {
        player2 = new HumanPlayer(Cell::O, logic);
    } else {
        player2 = new AIPlayer(Cell::O, logic);
    }
    Screen *screen = new ConsoleScreen();

    GameFlow game = GameFlow(logic, player1, player2, screen);
    game.playOneTurn();

    delete(logic);
    delete(player1);
    delete(player2);
    delete(screen);

}