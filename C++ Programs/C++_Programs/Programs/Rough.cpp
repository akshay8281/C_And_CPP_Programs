#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {
    int playerChoice;
    int computerChoice;
    
    string name;
	int round;
	
    // Seed the random number generator
    srand(time(0));
    
    cout<<"\nEnter your Name : ";
	cin>>name;

	cout<<"\nEnter How Much Round Want To Play : ";
	cin>>round;
    
    cout << "Let's play Rock, Paper, Scissors!" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    
    cout << "Enter your choice (1/2/3): ";
    cin >> playerChoice;
    
    // Generate a random choice for the computer (1 for Rock, 2 for Paper, 3 for Scissors)
    computerChoice = rand() % 3 + 1;
    
    cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
    }
    
    cout << "You chose: ";
    switch (playerChoice) {
        case 1:
            cout << "Rock" << endl;
            break;
        case 2:
            cout << "Paper" << endl;
            break;
        case 3:
            cout << "Scissors" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            return 1;
    }
    
    // Determine the winner
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
    
    return 0;
}
