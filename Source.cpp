#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//This function allows the array to be printed in the right positions
void boardFunct(char board[][3]) {
	for (int i = 0; i < 3; i++) {
		cout << "\n\t";
		for (int j = 0; j < 3; j++) {
			cout << "[ " << board[i][j] << " ]";
		}
	}
}

int main() {

	//Allows to restart the game from the if statement that ends the game when all moves are done
	restart:
	char board[3][3] = {
		{'1','2','3'},{'4','5','6'},{'7','8','9'}
	};

	int pick;
	cout << "\n\t*******************\n";
	cout << "\t* C++ Tic Tac Toe *";
	cout << "\n\t*******************\n";
	cout << "\n\tPlayer 1 [X]\n";
	cout << "\tPlayer 2 [O]\n";

	//Calls the function to print the tic tac toe
	boardFunct(board);
	cout << endl;
	
	//A while loop that runs until either player wins or the user exit's the program from a given command
	while (1) {

		//This loop allows both player to make their move after each other
		while (1) {

			//Allows the program to return the player back to their turn if a wrong selection was made
			retry:
			cout << "\n\tPlayer 1 Turn: ";
			cin >> pick;

			//A switch statement that replace the given input from the number into the 1st player symbol
			switch (pick) {
			case 1:
				//These if statemens will print an error if the player choose a number that has been chosen
				if (board[0][0] == 'X' || board[0][0] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[0][0] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 2:
				if (board[0][1] == 'X' || board[0][1] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[0][1] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 3:
				if (board[0][2] == 'X' || board[0][2] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[0][2] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 4:
				if (board[1][0] == 'X' || board[1][0] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[1][0] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 5:
				if (board[1][1] == 'X' || board[1][1] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[1][1] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 6:
				if (board[1][2] == 'X' || board[1][2] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[1][2] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 7:
				if (board[2][0] == 'X' || board[2][0] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[2][0] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 8:
				if (board[2][1] == 'X' || board[2][1] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[2][1] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			case 9:
				if (board[2][2] == 'X' || board[2][2] == 'O') {
					cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
					boardFunct(board);
					cout << "\n" << endl;
					goto retry;
				}
				else {
					board[2][2] = 'X';
					boardFunct(board);
					cout << "\n" << endl;
				}
				break;

			default:
				cout << "\nError: Invalid Selection!" << endl;
				break;
			}

			//This loop goes through the array 3 times and set i equal to the corresponding number
			for (int i = 0; i <= 2; i++){
				//This executes if any column matches with the char 'X'
				if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') {
					cout << "\tPlayer 1 Wins!" << endl;
					cout << "\tRestarting Game..." << endl;
					Sleep(2500);
					goto restart;
				}
				//This executes if any row matches with the char 'X'
				else if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
					cout << "\tPlayer 1 Wins!" << endl;
					cout << "\tRestarting Game..." << endl;
					Sleep(2500);
					goto restart;
				}
				//This executes if at diagonal from top left to bottom right matches char 'X'
				else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
					cout << "\tPlayer 1 Wins!" << endl;
					cout << "\tRestarting Game..." << endl;
					Sleep(2500);
					goto restart;
				}
				//This executes if at diagonal from top right to bottom left matches char 'X'
				else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
					cout << "\tPlayer 1 Wins!" << endl;
					cout << "\tRestarting Game..." << endl;
					Sleep(2500);
					goto restart;
				}
				//This executes if there are no numbers (moves) to make to prevent the loop from continuing
				else if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3'
					&& board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6'
					&& board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9') {
					cout << "\tGame Over! \n\tRestarting Game..." << endl;
					Sleep(2500);
					goto restart;
				}
			}

			//This loop allows player 2 to make their choice after player 1 makes their move
			while (1) {

				//Allows the program to return the player back to their turn if a wrong selection was made
				retry2:
				cout << "\n\tPlayer 2 Turn: ";
				cin >> pick;
				
				//A switch statement that replace the given input from the number into the 2nd player symbol
				switch (pick) {
				case 1:
					//These if statemens will print an error if the player choose a number that has been chosen
					if (board[0][0] == 'X' || board[0][0] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[0][0] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 2:
					if (board[0][1] == 'X' || board[0][1] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[0][1] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 3:
					if (board[0][2] == 'X' || board[0][2] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[0][2] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 4:
					if (board[1][0] == 'X' || board[1][0] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[1][0] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 5:
					if (board[1][1] == 'X' || board[1][1] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[1][1] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 6:
					if (board[1][2] == 'X' || board[1][2] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[1][2] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 7:
					if (board[2][0] == 'X' || board[2][0] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[2][0] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 8:
					if (board[2][1] == 'X' || board[2][1] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[2][1] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				case 9:
					if (board[2][2] == 'X' || board[2][2] == 'O') {
						cout << "\n\tWrong Selection! \n\tTry Again!" << endl;
						boardFunct(board);
						cout << "\n" << endl;
						goto retry2;
					}
					else {
						board[2][2] = 'O';
						boardFunct(board);
						cout << "\n" << endl;
					}
					break;

				default:
					cout << "\nError: Invalid Selection!" << endl;
					break;
				}

				//This loop goes through the array 3 times and set i equal to the corresponding number
				for (int i = 0; i <= 2; i++) {
					//This executes if any column matches with the char 'O'
					if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O') {
						cout << "\tPlayer 2 Wins!" << endl;
						cout << "\tRestarting Game..." << endl;
						Sleep(2500);
						goto restart;
					}
					//This executes if any row matches with the char 'O'
					else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
						cout << "\tPlayer 2 Wins!" << endl;
						cout << "\tRestarting Game..." << endl;
						Sleep(2500);
						goto restart;
					}
					//This executes if at diagonal from top left to bottom right matches char 'O'
					else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
						cout << "\tPlayer 2 Wins!" << endl;
						cout << "\tRestarting Game..." << endl;
						Sleep(2500);
						goto restart;
					}
					//This executes if at diagonal from top right to bottom left matches char 'O'
					else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
						cout << "\tPlayer 2 Wins!" << endl;
						cout << "\tRestarting Game..." << endl;
						Sleep(2500);
						goto restart;
					}
				}
				//This prevents the loop for the second player to continuously loop
				break;
			}
		}
	}
	return 0;
}