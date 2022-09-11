/*
  code written BY : Abhishek Patel
  project : Virtual Cricket Game

*/


#include"game.h"    // This Custom Header file contains <iostream> ,"players.h" ,<vector>, <ctime>,<limits>,<cstdlib> header files

using namespace std;

int main()
{
    Game game;

    // For Displaying name and Instructions of the game
    game.greetingUser();
    cout<<"\t Press Enter To Continue";
    cin.ignore();

    // To Show pool of 11 players from which team  will select their players
    game.displayPool();


    cout<<"\t Press Enter To Select The Players ";
    cin.ignore();

    // function to select players from displaypool
    game.selectPlayers();

    // function to Show the selected Players
    game.showPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout<<"\t Press Enter For Toss ";
    cin.ignore();
    game.toss();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    //Firstinning  will played in this function
    game.startFirstInning();

    //Secondinning will played in this function
    game.startSecondInning();

    //Result calculation
    game.resultOfMatch();

    game.summary();


    return 0;
}
