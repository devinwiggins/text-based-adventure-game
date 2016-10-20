#include <iostream>
#include <Windows.h>
#include "player.h"
#include "mob.h"
#include "string.h"
#include "forest location.h"
#include "main.h"

void GameStart()
{
	//north door, east door, south door, west door, enemy, gamewin, hint, cabin, weapon, ambush, special weapon, white birch tree, text
/*[0][0]*/	Map location01 = Map{ 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, "this cabin has a marking near the door that reads '1'. There's also a note that reads ['the deciduous leaves are facing south, a safe path to egress']\n there are two doors east and south.\n" };
/*[0][1]*/	Map location02 = Map{ 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, "Another cabin with a marking near the door. It reads '8'.\n a note reads ['the deciduous leaves are facing south a safe path to egress']\n there are three doors east, south, and west.\n"};
/*[0][2]*/	Map location03 = Map{ 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, "This place is ominous.\nthere are three doors east, south, west.\n there's also a weapon here.\n" };
/*[0][3]*/	Map location04 = Map{ 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, "this cabin is empty.\n theres a marking near the door that reads '17'.\n there are three doors east, south, west.\n" };
/*[0][4]*/	Map location05 = Map{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, "the marking in this cabin reads '187'\n there is only one door west\n" };
/*[1][0]*/	Map location06 = Map{ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, "character awakens to find that he is in a dark forest with nothing but his barehands.\nthere are three paths, north, east, and south.\n" };
/*[1][1]*/	Map location07 = Map{ 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, "there are four paths north, east, south, and west\n" };
/*[1][2]*/	Map location08 = Map{ 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, "you're inside of a cabin. There's a marking on the door that reads '12'. a note reads ['the deciduous leaves are facing south a safe path to egress'] \n there are four doors north, east, south, west\n" };
/*[1][3]*/	Map location09 = Map{ 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, "This cabin is a derelict.\n there is a marking near the door that reads '21'\n there are four doors north, east, south, west.\n" };
/*[1][4]*/	Map location10 = Map{ 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, "A white birch.\n there is only one path, west. there's also a weapon here.\n" };
/*[2][0]*/	Map location11 = Map{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, "there are three paths north, east, south.\n" };
/*[2][1]*/	Map location12 = Map{ 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, "A cabin with a white birch growing through the ceiling.\n there's a marking near the door that reads '19'.\n this cabin only has three visble doors north, east, south, west.\n" };
/*[2][2]*/	Map location13 = Map{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "There are three visble paths north, east, and west.\n" };
/*[2][3]*/	Map location14 = Map{ 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "this Cabin has a marking near the door that reads '7' there are three visible doors north, east, and west.\n" };
/*[2][4]*/	Map location15 = Map{ 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, "there is only one visble path west.\n there's also a weapon here" };
/*[3][0]*/	Map location16 = Map{ 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, " there is only one path, east.\n" };
/*[3][1]*/	Map location17 = Map{ 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, " there are four paths north, east, south, west.\n" };
/*[3][2]*/	Map location18 = Map{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, "there are two paths west and west.\n " };
/*[3][3]*/	Map location19 = Map{ 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, " the path you came in wa cut off by a tree that fell. there is only one path, east" };
/*[3][4]*/	Map location20 = Map{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, "you found the exit! type 'E' to continue" };
/*[4][0]*/	Map location21 = Map{ 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, "there is only one path east.\n" };
/*[4][1]*/	Map location22 = Map{ 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, "  the northern path w3as blocked by a fallen tree.\n there are only two paths east and west" };
/*[4][2]*/	Map location23 = Map{ 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, " there are two paths east and west" };
/*[4][3]*/	Map location24 = Map{ 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, " there are two paths east and west" };
/*[4][4]*/	Map location25 = Map{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, " there is only one path west" };
	Map location[5][5] =
	{
		{ location01, location02, location03, location04, location05 },
		{ location06, location07, location08, location09, location10 },
		{ location11, location12, location13, location14, location15 },
		{ location16, location17, location18, location19, location20 }
	};

}
void readME()
{
	system("cls");

	printf("---instructions---\n type 'north' 'south' 'east' or 'west' to move in a possisble direction\n");
	printf("if a location has a weapon in it type 'take' to pick it up\n");
	printf("look out for hints to find the exit of the game there are more than one\n");
	printf("dont forget that enemies respawn so avoid ambush locations if you can.\n");
	printf("you will not be able to view instructions in-game");
	printf("press 'E' to begin The game");

	MyString ChangeScreen;
	char Input[255];
	std::cin >> Input;
	ChangeScreen = MyString(Input);
	ChangeScreen.ToLower();

	if (ChangeScreen.findSub("e") == true)
	{
		GameStart();
	}
}
int main()
{
	std::cout << "--------------------------[Final Night]---------------------------\nTo review instructions type press the 'Q' button. Press 'E' to start\n";
	
	MyString m;
	char Input[255];
	std::cin >> Input;
	m = MyString(Input);
	m.ToLower();
	
	if ( m.findSub("q")  == true)
	{
		readME();
	}
	
	else if (m.findSub("e") == true)
	{
		GameStart();
	}
	system("pause");
	// how to use mystring as a c style string and cin
}
// the deciduous leaves are facing south a safe path to egress 