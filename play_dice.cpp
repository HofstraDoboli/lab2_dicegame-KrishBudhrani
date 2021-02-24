/* Krish Budhrani */

#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(NULL)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here
    cout << "Welcome to the Dice Game!" << endl;
    int die1;
    int die2;
    int point;
    int numRolls = 0;

    char gameStart;
    cout << "Would you like to roll? (Y/N) ";
    cin >> gameStart;

    while (gameStart == 'Y' || gameStart == 'y')
    {
        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;

        int dieTotal = die1 + die2;

        numRolls++;
        
        if (dieTotal == 7 || dieTotal == 11)
        {
            cout << "You rolled " << die1 << " & " << die2 << endl;
            cout << "You Win!" << endl;
        }
        else if (dieTotal == 2 || dieTotal == 3 || dieTotal == 12)
        {
            cout << "You rolled " << die1 << " & " << die2 << endl;
            cout << "The sum of the dice is " << dieTotal << ". You Lose." << endl;
        }
        else
        {
            cout << "You rolled " << die1 << " & " << die2 << endl;

            char playAgain;
            cout << "Press R to roll again!" << endl;
            cin >> playAgain;

            while(playAgain == 'R' || playAgain == 'r')
            {
                point = dieTotal;

                die1 = (rand() % 6) + 1;
                die2 = (rand() % 6) + 1;

                int dieSum = die1 + die2;

                numRolls++;

                if (dieSum == point)
                {
                    cout << "You rolled " << die1 << " & " << die2 << endl;
                    cout << "You Win" << endl;

                    numRolls = 0;
                }
                else if (dieSum == 7)
                {
                    cout << "You rolled " << die1 << " & " << die2 << endl;
                    cout << "You Lose" << endl;

                    numRolls = 0;
                }
                else 
                {
                    cout << "You rolled " << die1 << " & " << die2 << endl;

                    numRolls++;
                }
                playAgain = 'n';
            }
        }
        gameStart = 'n';
    }
    
    cout << "You rolled " << numRolls << " times" << endl;
    cout << "Bye!" << endl;
}


