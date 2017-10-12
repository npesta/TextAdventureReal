// TextAdventure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <random>
using namespace std;

int main()
{
	string name;
	string yourClass;
	string choice;
	string location;
	string died;
	string fire;
	string variableOne;
	string variableTwo;
	string variableThree;
	string variableFour;
	string variableFive;
	string variableSix;
	string variableSeven;
	string variableEight;
	string variableNine;
	string variableTen;
	string variableEleven;
	string variableTwelve;
	string variableThirteen;
	int ratOne;
	int newtOne;
	int bossOne;
	int spiderOne;
	int HP;
	int maxHP;
	int power;
	int speed;
	int gold;

	cout << "Before we begin, I need to know your name. What is your name?\n";
	cout << ">";
	cin >> name;

	cout << "I also need to know your Class. Are you a Warrior or a Mage?\n";
	cout << ">";
	cin >> yourClass;

	while (yourClass != "Mage" && yourClass != "Warrior")
	{
		cout << "Please pick either Warrior or Mage. (Case Sensitive)\n";
		cout << ">";
		cin >> yourClass;
	}

	cout << "Let's begin. ";

	cout << "You are a young " << yourClass << " who is thirsty for adventure. You hear about a cave nearby that is rumored to have     danger and treasure, and you decide to check it out. You walk into the cave.\n\n";

	location = "start";

	variableOne = "yes";

	variableTwo = "yes";

	variableThree = "yes";

	variableFour = "yes";

	variableFive = "yes";

	variableSix = "yes";

	variableSeven = "yes";

	variableEight = "yes";

	variableNine = "yes";

	variableTen = "yes";

	variableEleven = "yes";

	variableTwelve = "no";

	variableThirteen = "yes";

	gold = 0;

	if (yourClass == "Mage")
	{
		maxHP = 30;
		HP = 30;
		power = 1;
		speed = 4;
	}

	if (yourClass == "Warrior")
	{
		maxHP = 15;
		HP = 15;
		power = 2;
		speed = 2;
	}

	fire = "no";

	ratOne = 4;

	newtOne = 6;

	spiderOne = 8;

	bossOne = 15;

	if (name == "npesta")
	{
		cout << "HP?";
		cin >> HP;
		cout << "Attack?";
		cin >> power;
		cout << "Location?";
		cin >> location;
	}

	while (choice != "z")
	{
		if (location == "start")
		{
			cout << "There are two passages, one going east and the other going west.\n";
			cout << ">";
			cin >> choice;

			if (choice == "e" || choice == "east")
			{
				location = "enemyOne";
			}

			if (choice == "w" || choice == "west")
			{
				location = "lootOne";
			}
		}

		if (location == "enemyOne")
		{
			if (variableOne == "yes")
			{
				cout << "A rat blocks the path!\n";
				cout << ">";
				cin >> choice;

				if (choice == "attack" || choice == "a")
				{
					if (yourClass == "Mage")
					{
						cout << "You stab it with your staff.\n";
						ratOne = ratOne - power;

						if (ratOne > 0)
						{
							cout << "The rat is hurt! ";
							HP = HP - 1;
							cout << "The rat bites back! You lose one HP! (" << HP << "/" << maxHP << ")\n";
							if (HP == 0)
							{
								cout << "You have been killed by a rat. Game over.";
								choice = "z";
							}

						}

						if (ratOne == 0 || ratOne < 0)
						{
							cout << "The rat is killed! It does not drop anything of use.\n";
							variableOne = "no";
						}
					}

					if (yourClass == "Warrior")
					{
						cout << "You stab it with your sword.\n";
						ratOne = ratOne - power;

						if (ratOne > 0)
						{
							cout << "The rat is hurt! ";
							HP = HP - 1;
							cout << "The rat bites back! You lose 1 HP. (" << HP << "/" << maxHP << ")\n";
							if (HP == 0)
							{
								cout << "You have been killed by a rat. Game over.";
								choice = "z";
							}
						}

						if (ratOne == 0 || ratOne < 0)
						{
							cout << "The rat is killed! It does not drop anything of use.\n";
							variableOne = "no";
						}
					}
				}

				if (choice == "run")
				{
					if (speed > 4)
					{
						cout << "You ran back to the enterance.";
						location = "start";
					}

					if (speed <= 4)
					{
						cout << "You were unable to run away.\n";
						HP = HP - 1;
						cout << "The rat bites! You lose 1 HP! (" << HP << "/" << maxHP << ")\n";
						if (HP == 0)
						{
							cout << "You have been killed by a rat. Game over.";
							choice = "z";
						}
					}
				}
			}

			if (variableOne == "no")
			{
				cout << "You are in an empty room. You can go onward (n) or back to the enterance (s)\n";
				cout << ">";
				cin >> choice;

				if (choice == "n" || choice == "north")
				{
					location = "choiceOne";
				}

				if (choice == "s" || choice == "south")
				{
					location = "start";
				}
			}
		}

		if (location == "lootOne")
		{
			if (variableTwo == "yes")
			{
				cout << "There is a chest in front of you.\n";
				cout << "You can go back (s), or onward (n).\n";
				cout << ">";
				cin >> choice;

				if (choice == "o" || choice == "open")
				{
					cout << "You open the chest. Inside was 5G!\n";
					gold = gold + 5;
					cout << "You now have " << gold << "G. ";
					variableTwo = "no";
				}

				if (choice == "n" || choice == "north")
				{
					location = "spiderOne";
				}

				if (choice == "s" || choice == "south")
				{
					location = "start";
				}
			}

			if (variableTwo == "no")
			{
				cout << "You can go back (s), or onward (n).\n";
				cout << ">";
				cin >> choice;

				if (choice == "n" || choice == "north")
				{
					location = "spiderOne";
				}

				if (choice == "s" || choice == "south")
				{
					location = "start";
				}
			}
		}

		if (location == "choiceOne")
		{
			if (variableThree == "yes")
			{
				if (variableFour == "yes")
				{
					cout << "In this room, you see a statue with two arms extended toward you.\n";
					cout << "There is an inscription on a plaque near the statue.\n";
					cout << "'Take only one. If you take both, you will regret it.'\n";
					cout << "The first object is a healing potion that restores your HP and adds 5 HP to your Max Health.\n";
					cout << "The second object is a new pair of boots, which for some reason make you faster! (Helps for running away)\n\n";
					variableFour = "no";
				}

				cout << "What will you take?\n";
				cout << "The healing potion (1)\n";
				cout << "The running boots (2)\n";
				cout << "Screw it, I'm just gonna take both! (3)\n";
				cout << ">";
				cin >> choice;

				if (choice == "1")
				{
					cout << "You take the healing potion! You regain all lost HP and gain 5 extra!\n";
					maxHP = maxHP + 5;
					HP = maxHP;
					variableThree = "no";
				}

				if (choice == "2")
				{
					cout << "You take the running boots! Your speed increases!\n";
					speed = 7;
					variableThree = "no";
				}

				if (choice == "3")
				{
					cout << "You take both! Great! You have both now!\n";
					cout << "However, at that very moment you hear a noise behind you.\n";
					cout << "Oh look! npesta the immortal god of all gods has spawned!\n";
					cout << "Before you could react, he instantly flicked you out of existence. Darn.\n";
					cout << "You have been killed. Really easily. Hopefully this should teach you a lesson about following instructions! :D\n";
					cin >> died;
					choice = "z";
				}
			}

			if (variableThree == "no")
			{
				cout << "You are in an empty room.\n";
				cout << "There is a passage ahead (n). You can also go back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "north" || choice == "n")
				{
					location = "newtOne";
				}

				if (choice == "s" || choice == "south")
				{
					location = "enemyOne";
				}
			}
		}

		if (location == "newtOne")
		{
			if (variableFive == "yes")
			{
				cout << "A newt blocks the path!\n";
				cout << ">";
				cin >> choice;

				if (choice == "attack" || choice == "a")
				{
					if (yourClass == "Mage")
					{
						cout << "You stab it with your staff.\n";
						newtOne = newtOne - power;

						if (newtOne > 0)
						{
							cout << "The newt is hurt! ";
							HP = HP - 2;
							cout << "The newt snaps back! You lose two HP! (" << HP << "/" << maxHP << ")\n";
							if (HP == 0 || HP < 0)
							{
								cout << "You have been killed by a newt. Game over.";
								choice = "z";
							}

						}

						if (newtOne == 0 || newtOne < 0)
						{
							cout << "The newt is killed! It does not drop anything of use.\n";
							variableFive = "no";
						}
					}

					if (yourClass == "Warrior")
					{
						cout << "You stab it with your sword.\n";
						newtOne = newtOne - power;

						if (newtOne > 0)
						{
							cout << "The newt is hurt! ";
							HP = HP - 2;
							cout << "The newt bites back! You lose 2 HP. (" << HP << "/" << maxHP << ")\n";
							if (HP == 0 || HP < 0)
							{
								cout << "You have been killed by a newt. Game over.";
								choice = "z";
							}
						}

						if (newtOne == 0 || newtOne < 0)
						{
							cout << "The newt is killed! It does not drop anything of use.\n";
							variableFive = "no";
						}
					}
				}

				if (choice == "run")
				{
					if (speed > 4)
					{
						cout << "You ran back to the previous room.\n";
						location = "choiceOne";
					}

					if (speed <= 4)
					{
						cout << "You were unable to run away.\n";
						HP = HP - 2;
						cout << "The newt bites! You lose 1 HP! (" << HP << "/" << maxHP << ")\n";
						if (HP == 0 || HP < 0)
						{
							cout << "You have been killed by a newt. Game over.";
							choice = "z";
						}
					}
				}
			}

			if (variableFive == "no")
			{
				cout << "You are in an empty room. You can go back (s) or through a passage to your left (w)\n";
				cout << ">";
				cin >> choice;

				if (choice == "s" || choice == "south")
				{
					location = "choiceOne";
				}

				if (choice == "w" || choice == "west")
				{
					location = "prebossOne";
				}
			}
		}

		if (location == "prebossOne")
		{
			cout << "You are in an empty room. There is a door to your north. It looks super-menacing and definately something you don't want to open until you feel ready.\n";
			cout << "If you feel ready, feel free to go through the door (n). If not, go back (s).\n";
			cout << ">";
			cin >> choice;

			if (choice == "n" || choice == "north")
			{
				location = "bossOne";
			}

			if (choice == "s" || choice == "south")
			{
				location = "newtOne";
			}
		}

		if (location == "bossOne")
		{
			if (variableSix == "yes")
			{
				cout << "A corrupted skeleton stands in your way!\n";
				cout << ">";
				cin >> choice;

				if (choice == "attack" || choice == "a")
				{
					if (yourClass == "Mage")
					{
						cout << "You stab it with your staff.\n";
						bossOne = bossOne - power;

						if (bossOne > 0)
						{
							cout << "The skeleton is hurt! ";
							HP = HP - 5;
							cout << "The skeleton strikes back! You lose five HP! (" << HP << "/" << maxHP << ")\n";
							if (HP == 0 || HP < 0)
							{
								cout << "You have been killed by a skeleton. Game over.";
								choice = "z";
							}

						}

						if (bossOne == 0 || bossOne < 0)
						{
							cout << "The skeleton is killed! It drops 20G.\n";
							gold = gold + 20;
							variableSix = "no";
						}
					}

					if (yourClass == "Warrior")
					{
						cout << "You stab it with your sword.\n";
						bossOne = bossOne - power;

						if (bossOne > 0)
						{
							cout << "The skeleton is hurt! ";
							HP = HP - 5;
							cout << "The skeleton bites back! You lose 5 HP. (" << HP << "/" << maxHP << ")\n";
							if (HP == 0 || HP < 0)
							{
								cout << "You have been killed by a skeleton. Game over.";
								choice = "z";
							}
						}

						if (bossOne == 0 || bossOne < 0)
						{
							cout << "The skeleton is killed! It drops 20G.\n";
							gold = gold + 20;
							variableSix = "no";
						}
					}
				}

				if (choice == "run")
				{
					if (speed > 100)
					{
						cout << "You ran back to the enterance.";
						location = "start";
					}

					if (speed <= 100)
					{
						cout << "You were unable to run away.\n";
						HP = HP - 5;
						cout << "The skeleton attacks! You lose 5 HP! (" << HP << "/" << maxHP << ")\n";
						if (HP == 0 || HP < 0)
						{
							cout << "You have been killed by a skeleton. Game over.";
							choice = "z";
						}
					}
				}
			}

			if (variableSix == "no")
			{
				cout << "You are in an empty room. There is a passage to your left (w) and straight ahead (n). You can also go back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "w" || choice == "west")
				{
					location = "switchOne";
				}

				if (choice == "n" || choice == "north")
				{
					location = "lootThree";
				}

				if (choice == "s" || choice == "south")
				{
					location = "prebossOne";
				}
			}
		}

		if (location == "spiderOne")
		{
			if (variableSeven == "yes")
			{
				cout << "A large spider stands in your way!\n";
				cout << ">";
				cin >> choice;

				if (choice == "attack" || choice == "a")
				{
					if (yourClass == "Mage")
					{
						cout << "You stab it with your staff.\n";
						spiderOne = spiderOne - power;

						if (spiderOne > 0)
						{
							cout << "The spider is hurt! ";
							HP = HP - 3;
							cout << "The spider strikes back! You lose three HP! (" << HP << "/" << maxHP << ")\n";
							if (HP == 0 || HP < 0)
							{
								cout << "You have been killed by a spider. Game over.";
								choice = "z";
							}

						}

						if (spiderOne == 0 || spiderOne < 0)
						{
							cout << "The spider is killed! It drops 5G.\n";
							gold = gold + 5;
							variableSeven = "no";
						}
					}

					if (yourClass == "Warrior")
					{
						cout << "You stab it with your sword.\n";
						spiderOne = spiderOne - power;

						if (spiderOne > 0)
						{
							cout << "The spider is hurt! ";
							HP = HP - 3;
							cout << "The spider bites back! You lose 3 HP. (" << HP << "/" << maxHP << ")\n";
							if (HP == 0 || HP < 0)
							{
								cout << "You have been killed by a spider. Game over.";
								choice = "z";
							}
						}

						if (spiderOne == 0 || spiderOne < 0)
						{
							cout << "The spider is killed! It drops 5G.\n";
							gold = gold + 5;
							variableSeven = "no";
						}
					}
				}

				if (choice == "run")
				{
					if (speed > 100)
					{
						cout << "You ran back to the enterance.";
						location = "start";
					}

					if (speed <= 100)
					{
						cout << "You were unable to run away.\n";
						HP = HP - 3;
						cout << "The spider attacks! You lose 3 HP! (" << HP << "/" << maxHP << ")\n";
						if (HP == 0 || HP < 0)
						{
							cout << "You have been killed by a spider. Game over.";
							choice = "z";
						}
					}
				}
			}

			if (variableSeven == "no")
			{
				cout << "You are in an empty room. There is a passage to your right (e). You can also go back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "e" || choice == "east")
				{
					location = "lootTwo";
				}

				if (choice == "s" || choice == "south")
				{
					location = "lootOne";
				}
			}
		}

		if (location == "lootTwo")
		{
			if (variableEight == "yes")
			{
				cout << "There is a large chest in front of you.\n";
				cout << "You can go through a passage on your right (e) or you can go back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "o" || choice == "open")
				{
					if (yourClass == "Warrior")
					{
						cout << "Inside the chest was a brand new sword! It makes you much more powerful.\n";
						power = 5;
						variableEight = "no";

					}

					if (yourClass == "Mage")
					{
						cout << "Inside the chest was a brand new staff! This one is much nicer and will allow you to cast runes; if you find any.\n";
						power = 4;
						variableEight = "no";
					}
				}
				if (choice == "e" || choice == "e")
				{
					location = "healOne";
				}

				if (choice == "s" || choice == "south")
				{
					location = "spiderOne";
				}

			}

			if (variableEight == "no")
			{
				cout << "You can go through a passage on your right (e) or you can go back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "e" || choice == "e")
				{
					location = "healOne";
				}

				if (choice == "s" || choice == "south")
				{
					location = "spiderOne";
				}
			}
		}

		if (location == "healOne")
		{
			if (variableNine == "yes")
			{
				cout << "A singular potion is fixed to the wall.\n";
				cout << "There is a note inscribed on the potion.\n";
				cout << "'Take this potion when there is a real need for it'\n";
				cout << "You can drink the potion now (y), or you can choose to go back (s).\nThere is also a passage to your left (w) and right (e).\n";
				cout << ">";
				cin >> choice;

				if (choice == "y")
				{
					cout << "You drink the potion. Your HP is fully restored!\n";
					HP = maxHP;
					variableNine = "no";
				}

				if (choice == "s" || choice == "south")
				{
					location = "lootTwo";
				}

				if (choice == "e" || choice == "east")
				{
					location = "lootOne";
				}

				if (choice == "w" || choice == "west")
				{
					location = "doorOne";
				}
			}

			if (variableNine == "no")
			{
				cout << "You are in an empty room. There is a passage to your left (w) and right (e).\nYou can also go back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "s" || choice == "south")
				{
					location = "lootTwo";
				}

				if (choice == "e" || choice == "east")
				{
					location = "lootOne";
				}

				if (choice == "w" || choice == "west")
				{
					location = "doorOne";
				}
			}
		}

		if (location == "lootThree")
		{

			if (variableTen == "yes")
			{
				if (yourClass == "Warrior")
				{
					cout << "Inside this room, a sword lies in a stone.\n";
					cout << "Upon closer examination, you find out that the stone is talc.\n";
					cout << "You take out the sword with ease. It's much nicer than your old one. You become more powerful!\n";
					power = 10;
					variableTen = "no";
				}

				if (yourClass == "Mage")
				{
					cout << "Inside this room, a single scroll lies.\n";
					cout << "This scroll gave you the information necessary to cast a fire spell!\n";
					cout << "You can now use fire in battle! (f)\n";
					cout << "This will be effective against some enemies, but not so much against others. Use your best judgement.\n";
					fire = "yes";
					variableTen = "no";
				}
			}

			if (variableTen == "no")
			{
				cout << "The only way you can go is back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "s" || choice == "south")
				{
					location = "bossOne";
				}
			}
		}

		if (location == "switchOne")
		{
			if (variableEleven == "yes")
			{
				cout << "Inside this room is a green switch.\n";
				cout << "You press the switch, and you hear a rumbling sound in the distance.\n";
				cout << "You can now move on to the next area!\n";
				variableEleven ="no";
				variableTwelve = "yes";
			}
			
			if (variableEleven == "no")
			{
				cout << "The only way you can go is back. (s)\n";
				cout << ">";
				cin >> choice;

				if (choice == "s" || choice == "south")
				{
					location = "bossOne";
				}
			}	
		}

		if (location == "doorOne")
		{
			if (variableTwelve == "yes")
			{
				cout << "The green door has now been opened.\n";
				cout << "You can go through the door (e) or back (s).\n";
				cout << ">";
				cin >> choice;

				if (choice == "e" || choice == "east")
				{
					location = "lootFour";
				}

				if (choice == "s" || choice == "south")
				{
					location = "healOne";
				}
			}

			if (variableTwelve == "no")
			{
				cout << "In front of you lies a green door. You cannot open it with force.\n";
				cout << "You can go back (s)\n";
				cout << ">";
				cin >> choice;

				if (choice == "s" || choice == "south")
				{
					location = "healOne";
				}
			}
		}

		if (location == "lootFour")
		{
			if (variableThirteen == "yes")
			{
				cout << "Inside this room, you see, for some reason, gold on the ground.\n";
				cout << "You gain 50G!\n";
				gold = gold + 50;
				variableThirteen = "no";
			}

			if (variableThirteen == "no")
			{
				cout << "End for now. More soon.";
				cin >> choice;
			}
		}
	}
	return 0;
}



