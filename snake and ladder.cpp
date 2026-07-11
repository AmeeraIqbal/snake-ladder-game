/*
============================================================
                 SNAKE AND LADDER GAME
============================================================

Author      : Ameera Iqbal
Language    : C++
Course      : Programming Fundamentals
Semester    : 2nd Semester
Year        : 2026

Description:
A console-based Snake and Ladder game for two players.
Players enter dice values manually. The game includes
snakes, ladders, overshoot checking, and special rules
for consecutive sixes.

============================================================
*/

// Header file
#include <iostream>

using namespace std;

// Main function
int main()
{
    // Variable declarations
    int d;              // Dice value
    int P1 = 0;         // Player 1 position
    int P2 = 0;         // Player 2 position
    int n = 0;          // Game status (0 = continue, 1 = game over)
    int c = 0;          // Number of consecutive sixes
    int startPos = 0;   // Position before the current move

    // Display game title and rules
    cout << "=========================================================" << endl;
    cout << "     Welcome to the 1-100 Snake and Ladder Game          " << endl;
    cout << "  (Rules: 3,5,7... 6s are discarded; 1 and even 6s count) " << endl;
    cout << "=========================================================" << endl;

    // Continue the game until a player wins
    while (n == 0) 
    {
        // ---------------- Player 1 Turn ----------------
        cout << "\nTurn of Player 1\n"; 
        cout << "******************\n"; 
        
        startPos = P1; 
        c = 0; 
        
        do 
        {
            // Take dice input from the player
            cout << "Throw dice = "; 
            cin >> d; 
            
            // Check if the dice value is valid
            while (d < 1 || d > 6) 
            {
                cout << "Invalid input! Dice value must be between 1 and 6. Try again: ";
                cin >> d;
            }
            
            // Count consecutive sixes
            if (d == 6) 
            {
                c = c + 1; 
            }
        } while (d == 6); 

        // Apply the rule for three or more consecutive sixes
        if (c >= 3 && c % 2 != 0) 
        {
            cout << "Illegal Streak! " << c << " consecutive 6s are discarded.\n";
            cout << "Only your final roll (" << d << ") counts!\n";
            P1 = P1 + d; 
        } 
        else 
        {
            P1 = P1 + c * 6 + d; 
        }

        // Prevent the player from moving beyond 100
        if (P1 > 100) 
        {
            cout << "Overshoot! Move exceeds 100. Resetting back to " << startPos << "\n";
            P1 = startPos; 
        }

        // Check if the player landed on a ladder
        if (P1 == 8)   P1 = 26;
        if (P1 == 21)  P1 = 82;
        if (P1 == 43)  P1 = 77;
        if (P1 == 50)  P1 = 91;

        // Check if the player landed on a snake
        if (P1 == 44)  P1 = 22;
        if (P1 == 62)  P1 = 18;
        if (P1 == 95)  P1 = 51;
        if (P1 == 98)  P1 = 13;

        // Check if Player 1 reached position 100
        if (P1 == 100) 
        {
            cout << "P1 wins\n"; 
            n = 1; 
        } 
        else 
        {
            cout << "Current Position P1: " << P1 << "\n";
        }

        if (n == 1) 
        {
            break;
        }

        // ---------------- Player 2 Turn ----------------
        cout << "\nTurn of Player 2\n"; 
        cout << "******************\n"; 
        
        startPos = P2; 
        c = 0; 
        
        do 
        {
            // Take dice input from the player
            cout << "Throw dice = "; 
            cin >> d; 
            
            // Check if the dice value is valid
            while (d < 1 || d > 6) 
            {
                cout << "Invalid input! Dice value must be between 1 and 6. Try again: ";
                cin >> d;
            }
            
            // Count consecutive sixes
            if (d == 6) 
            {
                c = c + 1; 
            }
        } while (d == 6); 

        // Apply the rule for three or more consecutive sixes
        if (c >= 3 && c % 2 != 0) 
        {
            cout << "Illegal Streak! " << c << " consecutive 6s are discarded.\n";
            cout << "Only your final roll (" << d << ") counts!\n";
            P2 = P2 + d; 
        } 
        else 
        {
            P2 = P2 + c * 6 + d; 
        }
        
        // Prevent the player from moving beyond 100
        if (P2 > 100) 
        {
            cout << "Overshoot! Move exceeds 100. Resetting back to " << startPos << "\n";
            P2 = startPos; 
        }

        // Check if the player landed on a ladder
        if (P2 == 8)   P2 = 26;
        if (P2 == 21)  P2 = 82;
        if (P2 == 43)  P2 = 77;
        if (P2 == 50)  P2 = 91;

        // Check if the player landed on a snake
        if (P2 == 44)  P2 = 22;
        if (P2 == 62)  P2 = 18;
        if (P2 == 95)  P2 = 51; 
        if (P2 == 98)  P2 = 13;

        // Check if Player 2 reached position 100
        if (P2 == 100) 
        {
            cout << "P2 wins\n"; 
            n = 1; 
        }
        else 
        {
            cout << "Current Position P2: " << P2 << "\n";
        }
    }

    // Display game over message
    cout << "\n*******************************************************" << endl;
    cout << "                       GAME OVER                         " << endl;
    cout << "*********************************************************" << endl;

    return 0;
}
