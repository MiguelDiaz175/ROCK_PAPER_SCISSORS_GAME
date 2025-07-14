#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){

    int userPick;
    string botPick;

    srand(time(0));
    int botNum = rand() % 3 + 1;
    
    if (botNum == 1) {
        botPick = "Rock";
    } else if (botNum == 2) {
        botPick = "Paper";
    } else if (botNum == 3) {
        botPick = "Scissors";
    } 

    cout << endl;
    cout << "Rock, Paper, Scissors!" << endl;
    cout << endl;

    cout << "Your options are: " << endl;
    cout << "1: Rock" << endl;
    cout << "2: Paper" << endl;
    cout << "3: Scissor" << endl;
    cout << endl;
    cout << "Choose a number to play: ";
    cin >> userPick;
    cout << "Bot chose " << botPick << "!" << endl;
    cout << endl;

    if (botNum == userPick) {
        cout << "DRAW!";
    } else if ((botNum == 1) && (userPick == 2)) {
        cout << "YOU WIN!" << endl;
    } else if ((botNum == 1) && (userPick == 3)) {
        cout << "YOU LOSE!" << endl;
    } else if ((botNum == 2) && (userPick == 1)) {
        cout << "YOU LOSE!" << endl;
    } else if ((botNum == 2) && (userPick == 3)) {
        cout << "YOU WIN!" << endl;
    } else if ((botNum == 3) && (userPick == 1)) {
        cout << "YOU WIN!" << endl;
    } else if ((botNum == 3) && (userPick == 2)) {
        cout << "YOU LOSE!" << endl;
    } else {
        cout << "Run program again, incorrect input";
    }

    return 0;
}