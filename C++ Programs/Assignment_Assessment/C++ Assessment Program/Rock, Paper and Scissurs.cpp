#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Function to get the computer's choice (Rock, Paper, or Scissors)
int getComputerChoice() 
{
    return rand() % 3; // Generates a random number between 0 and 2
}


// Function to determine the winner for a single round
int determineWinner(int userChoice, int computerChoice) 
{
    if (userChoice == computerChoice) 
	{
        return 0; // It's a tie
    }
    
	else if ((userChoice == 0 && computerChoice == 2) 
	|| (userChoice == 1 && computerChoice == 0) 
	|| (userChoice == 2 && computerChoice == 1)) 
	
	{
        return 1; // User wins
    }
    
	else
	{
        return -1; // Computer wins
    }
}


// Main Function
int main() 
{
    int userChoice, computerChoice, round, userWins, computerWins, ties;
    int totalRounds;
    string userName;

    cout << "\n************** Welcome to Rock, Paper, Scissors! **************\n"<<endl;
    
//User Input WHo Play the Game
    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";

	cout<<"\n                        Name                          \n";

	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
    
    cout << "\nEnter your Name : ";
    cin >> userName;
    
//User Input How mUch Round Want to Play the Game
    cout<<"\n\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";

	cout<<"\n                        Round                          \n";

	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
    
    cout << "\nHello, " << userName << "! \nEnter the number of rounds you want to play : ";
    cin >> totalRounds;

// Game Begins
	cout<<"\n\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";

	cout<<"\n                        GAME BEGINS                          \n";

	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";

    userWins = computerWins = ties = 0;

    srand(time(nullptr)); // Seed the random number generator with the current time


// Round Calculations
    for (round = 1; round <= totalRounds; round++) 
	{
        int roundsLeft = totalRounds - round + 1;
        cout << "\n\nRound " << round << " (Rounds left : " << roundsLeft << ")\n" << endl;

// Get user's choice
        
        cout << "\n 0 for Rock";
        cout << "\n 1 for Paper";
        cout << "\n 2 for Scissors";

		cout << "\n\nEnter your choice :  ";
        cin >> userChoice;
        
        
        // Validate user input
        if (userChoice < 0 || userChoice > 2) 
		{
            cout << "\n\nx - x - x  Invalid choice. Please enter 0 for Rock, 1 for Paper, or 2 for Scissors.  x - x - x" << endl;
            round--;
            continue;
        }

        // Get computer's choice
        computerChoice = getComputerChoice();

        // Display choices
        cout <<endl <<endl<< "===>   "<< userName << " chose : ";
        
// User Choice        
        switch (userChoice) 
		{
            case 0:
                cout << "Rock" << endl;
                break;
            case 1:
                cout << "Paper"<<endl;
                break;
            case 2:
                cout << "Scissors" <<endl << endl;
                break;
        }

// Computer Choice
        cout << "===>   Computer chose : ";
        switch (computerChoice) 
		{
            case 0:
                cout << "Rock" << endl;
                break;
            case 1:
                cout << "Paper" << endl;
                break;
            case 2:
                cout << "Scissors" << endl <<endl;
                break;
        }

        // Determine the winner of this round
        int result = determineWinner(userChoice, computerChoice);

        if (result == 0) 
		{
            cout << "\n*-*-*-*-*   It's a Tie!   *-*-*-*-*\n" << endl;
            ties++;
        } 
		
		else if (result == 1) 
		{
            cout<<"\n*-*-*-*-*  " << userName << " wins this Round!   *-*-*-*-*\n" << endl;
            userWins++;
        }
		
		else 
		{
            cout << "\n*-*-*-*-*   Computer wins this Round!   *-*-*-*-*\n" << endl;
            computerWins++;
        }

        // Display current score
        cout<<"\n>>>>>   Current Score : "<<userName<<" - "<<userWins <<", Ties - "<<ties <<", Computer - "<<computerWins<<"   <<<<<"<<endl;
  		cout<<"\n\n-------------------------------------------------------------------------------------------\n";  
	}  //<----- For Loop CLosed Here


    // Display game results
    cout << "\n\n       xxx Game Over ! xxx       \n" << endl;
    cout << "\n    Total Rounds Played : " << totalRounds <<endl << endl;
    cout <<"\t>>  "<< userName << "'s Wins: " << userWins << endl;
    cout << "\n\t>>  Computer Wins: " << computerWins << endl;
    cout << "\n\t>>  Ties: " << ties <<endl << endl;

    if (userWins > computerWins) 
	{
        cout <<"\n ************* "<< userName << " wins the game! ************* \n" << endl;
    } 
	
	else if (computerWins > userWins) 
	{
        cout << "\n ************* Computer wins the game! ************* \n" << endl;
    } 
	
	else 
	{
        cout << "\n ************* It's a tie game! ************* \n" << endl;
    }

    return 0;
}
