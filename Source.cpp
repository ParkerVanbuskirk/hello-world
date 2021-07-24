#include <iostream>
#include "Header.h"
int main()
{
	
	std::string l1 = "1"; std::string l2 = "2"; std::string l3 = "3";
	std::string l4 = "4"; std::string l5 = "5"; std::string l6 = "6";		//values to disply on the board (the positions are displayed differntly)
	std::string l7 = "7"; std::string l8 = "8"; std::string l9 = "9";

	std::string player1_go = "please make your move player 1\n";            //messages to user(s)
	std::string player2_go = "please make your move player 2\n";
	std::string wrong_input = "please try again, your space that you selected is used or invalid.\n"; 
	std::string player1_win = "\n\n\nplayer 1 wins!\n";
	std::string player2_win = "\n\n\nplayer 2 wins!\n";

	int playerplay;

	for (int turn = 0; turn < 9; turn++)
	{
		std::cout << "tic tac toe \n\n " << l7 << " " << l8 << " " << l9 << "\n " << l4 << " " << l5 << " " << l6 << "\n " << l1 << " " << l2 << " " << l3 << "\n\n";   // displays board
		if (turn % 2 == 0 && turn < 8)
		{
			std::cout << player1_go;
		}
		else
		{
			std::cout << player2_go;
		}
		std::cin >> playerplay;
		if (is_slot_valid(playerplay) == true )
		{
			switch (playerplay)
			{
			case 1:
				if (is_slot1_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l1 = "O";
					}
					else
					{
						l1 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 2:
				if (is_slot2_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l2 = "O";
					}
					else
					{
						l2 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 3:
				if (is_slot3_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l3 = "O";
					}
					else
					{
						l3 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 4:
				if (is_slot4_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l4 = "O";
					}
					else
					{
						l4 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 5:
				if (is_slot5_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l5 = "O";
					}
					else
					{
						l5 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 6:
				if (is_slot6_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l6 = "O";
					}
					else
					{
						l6 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 7:
				if (is_slot7_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l7 = "O";
					}
					else
					{
						l7 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 8:
				if (is_slot8_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l8 = "O";
					}
					else
					{
						l8 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			case 9:
				if (is_slot9_avail() == true)
				{
					if (turn % 2 == 0)
					{
						l9 = "O";
					}
					else
					{
						l9 = "X";
					}
				}
				else
				{
					std::cout << wrong_input;
					turn--;
				}
				break;
			}
		}
		else
		{
			std::cout << wrong_input;
			turn--;
		}
		//if(player win function) {say which player won, turn = 12;} -todo
		if (l1 == "O" && l2 == "O" && l3 == "O" || l4 == "O" && l5 == "O" && l6 == "O" || l7 == "O" && l8 == "O" && l9 == "O" || //horizontal		player 1
			l1 == "O" && l4 == "O" && l7 == "O" || l2 == "O" && l5 == "O" && l8 == "O" || l3 == "O" && l6 == "O" && l9 == "O" || //vertical        win check
			l1 == "O" && l5 == "O" && l9 == "O" || l3 == "O" && l5 == "O" && l7 == "O"  )										 //diagnal
			
		{
			std::cout << player1_win;
			turn = 12;
		}
		if (l1 == "X" && l2 == "X" && l3 == "X" || l4 == "X" && l5 == "X" && l6 == "X" || l7 == "X" && l8 == "X" && l9 == "X" ||		//player 2
			l1 == "X" && l4 == "X" && l7 == "X" || l2 == "X" && l5 == "X" && l8 == "X" || l3 == "X" && l6 == "X" && l9 == "X" || 
			l1 == "X" && l5 == "X" && l9 == "X" || l3 == "X" && l5 == "X" && l7 == "X"  )										 

		{
			std::cout << player2_win;
			turn = 12;
		}
	}
	std::cout << "\n " << l7 << " " << l8 << " " << l9 << "\n " << l4 << " " << l5 << " " << l6 << "\n " << l1 << " " << l2 << " " << l3 << "\n";
}