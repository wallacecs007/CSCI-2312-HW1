/*
Chase Wallace

Worked on: 1/22/2018, 1/23/2018

CSCI 2312

Project: Assignment one for 2312. The purpose of this assignment is to create a psuedo code outline following the ROC(K)ET method for
the game battleship. The only task of this assignment is to pseudocode up to the first missle launch by one of the players.
So this will include the starting menu for the game, and also will include the the placing of the players ships. IMPORTANT:
Make sure to include the logic for the checks making sure that the user can't place a ship on top of one another and off of the map.

God I hope the time I put into this degree is worth it <3

*/

//Main function will begin below

int main()
{

	//First I need to declar some starting variables, these will include two 10x10 arrays one per player
	//Then I will include an int for menu select.

	/*
	int water = 0
	int hit = 1
	int miss = 2
	int ship = 3
	*/



	//Create a do-while loop to run the game until the user(s) are done.

		//Create a menu to output to the users with 3 options: 1. Play Game 2. Rules/How to Play 3. Quit Game

		//Read in user input

		//Begin a switch statement to check for user input

			//Case 1

				//Call playGame()

			//Case 2

				//Output Rules/How to (No function needed for this since it will be a simple output

			//Case 3

				//return 0 to quit

			//Case 4

				//Default case to make sure player enters a valid selection and if not it spits it back at them

}

//Play Game function

void playGame(int player1[10][10], int player2[10][10])
{

	
	
	/*############################################################
	# One possibility is going to be that the user says they want#
	#the ship to be placed right, left, up, or down. This way    #
	#they can't mess with the length of the ship and I don't have#
	#to code a check.                                            #
	#############################################################*/

	//Declare 4 ints x1, x2, y1, & y2 in order to read in the users inputs

	//Call createBoard for player 1 & 2's arrays

	//Start the user 1's ship placement

	//The ships will be placed in order like this: 5, 4, 3, 3, 2 (size of ships)

	//for loop that loops through the 5 ships

		//Start do while loop for checks

			//Ask for the users start location for the ship and output it's length so they know its size. 

			//Then ask for the users second set of coordinates for the ship

			//Create an if statement to check to make sure both checkOverlap() and checkOutOfBounds() return true

				//If they return true place the ship using place ship functions

			//If false return a message saying one of the two was out of bounds or on a ship and tell them to try again
		
		//If the user places the ship the do-while ends here
	
	//loop then loops and starts the next ship

	///////////////////////////////////////////////////////////////////////////////
	////////                       Start player two here                   //////// 
	///////////////////////////////////////////////////////////////////////////////

	//Start the user 2's ship placement

	//The ships will be placed in order like this: 5, 4, 3, 3, 2 (size of ships)

	//for loop that loops through the 5 ships

		//Start do while loop for checks

			//Ask for the users start location for the ship and output it's length so they know its size. 

			//Then ask for the users second set of coordinates for the ship

			//Create an if statement to check to make sure both checkOverlap() and checkOutOfBounds() return true
			//IF STATEMENT ALSO NEEDS TO CHECK TO MAKE SURE SHIP LENGTH IS CORRECT

				//If they return true place the ship using place ship functions

			//If false return a message saying one of the two was out of bounds or on a ship and tell them to try again

		//If the user places the ship the do-while ends here

	//loop then loops and starts the next ship


}

//createBoard function - This needs to create the blank board, almost completely forgot about this!!!!!

void createBoard(int player[10][10])
{

	//Create two nested for loops to fill the array full of zeros (water)

}

//placeShips function - Needs to have a variable of the users array put into it, plus the length of the ship being placed.

void placeShips(int player[10][10], int x1, int x2, int y1, int y2)
{

	//Create some sets of if and else if statements to check where the ship is going.

		//These if and else statements will check to see which way the ship is being put and to make sure that it is not being place diaganolly
	
			//now create a for statement to replace the positions of the ship with 1's instead of 0's

		//End if statements and end the ship placement function return back to playGame() function

}

//checkOverlap function - This will need to have the user array brought in to test it

bool checkOverlap(int player[10][10], int x1, int x2, int y1, int y2)
{

	//Inside this I will a nested if statement inside a for loop.

		//The statements will run through a fake placement of the ship and check to see if there is already
		//A ship where it is to be placed. 

		//Will return true if there is no ship, will return false if there is a ship.

}

//checkOutOfBounds function - This will also need to have the user array brought in to test it

bool checkOutOfBounds(int player[10][10], int x1, int x2, int y1, int y2)
{

	//Simple if statement to make sure that the x and y values are greater than 0 and less than or equal to 10. If they don't fit 
	//This parameter return false.

}