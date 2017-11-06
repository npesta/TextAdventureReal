//
//  main.cpp
//  Nathan Game
//
//  Created by Trinity Krile on 10/26/17.
//  Copyright © 2017 Trinity Krile. All rights reserved.
//

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
    string electric;
    string rat;
    string chestOne;
    string choiceOne;
    string textblock;
    string newt;
    string boss;
    string spider;
    string chesttwo;
    string fullhealthpotion;
    string bosslootOne;
    string greenswitch;
    string greendoor;
    string preshopgold;
    string variableSlime;
    string stick;
    string goggles;
    string flood;
    int ratOne;
    int newtOne;
    int bossOne;
    int spiderOne;
    int slime;
    int HP;
    int maxHP;
    int power;
    int speed;
    int gold;
    int lv1healthpotion;
    int lv2healthpotion;
    int maxhealthpotion;
    int lv1speedpotion;
    int lv2speedpotion;
    int maxspeedpotion;
    
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
    
    cout << "You are a young " << yourClass << " who is thirsty for adventure. You hear about a cave nearby that is rumored to have danger and treasure, and you decide to check it out. You walk into the cave.\n\n";
    
    location = "start";
    
    rat = "yes";
    
    chestOne = "yes";
    
    choiceOne = "yes";
    
    textblock = "yes";
    
    newt = "yes";
    
    boss = "yes";
    
    spider = "yes";
    
    chesttwo = "yes";
    
    fullhealthpotion = "yes";
    
    bosslootOne = "yes";
    
    greenswitch = "yes";
    
    greendoor = "no";
    
    preshopgold = "yes";
    
    variableSlime = "yes";
    
    gold = 0;
    
    lv1healthpotion = 0;
    
    lv2healthpotion = 0;
    
    maxhealthpotion = 0;
    
    lv1speedpotion = 0;
    
    lv2speedpotion = 0;
    
    maxspeedpotion = 0;
    
    stick = "no";
    
    goggles = "no";
    
    flood = "yes";
    
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
    
    slime = 20;
    
    if (name == "npesta")
    {
        cout << "HP?";
        cin >> HP;
        cout << "Attack?";
        cin >> power;
        cout << "Gold?";
        cin >> gold;
        cout << "Speed?";
        cin >> speed;
        if (yourClass == "Mage")
        {
            fire = "yes";
            electric = "yes";
        }
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
            
            else if (choice == "w" || choice == "west")
            {
                location = "lootOne";
            }
            else if (choice != "z") //Help output
            {
                cout << "Choices: 'west', 'w', 'east', 'e'\n\n";
            }
        }
        
        if (location == "enemyOne")
        {
            if (rat == "yes")
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
                            rat = "no";
                        }
                    }
                    
                    else if (yourClass == "Warrior")
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
                            rat = "no";
                        }
                    }
                }
                
                else if (choice == "run")
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
                
                else if (choice != "z")
                {
                    cout << "Choices: 'attack', 'a', 'run'.\n"; //Help output
                }
            }
            
            if (rat == "no")
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
            if (chestOne == "yes")
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
                    chestOne = "no";
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
            
            if (chestOne == "no")
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
            if (choiceOne == "yes")
            {
                if (textblock == "yes")
                {
                    cout << "In this room, you see a statue with two arms extended toward you.\n";
                    cout << "There is an inscription on a plaque near the statue.\n";
                    cout << "'Take only one. If you take both, you will regret it.'\n";
                    cout << "The first object is a healing potion that restores your HP and adds 5 HP to your Max Health.\n";
                    cout << "The second object is a new pair of boots, which for some reason make you faster! (Helps for running away)\n\n";
                    textblock = "no";
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
                    choiceOne = "no";
                }
                
                if (choice == "2")
                {
                    cout << "You take the running boots! Your speed increases!\n";
                    speed = 7;
                    choiceOne = "no";
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
            
            if (choiceOne == "no")
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
            if (newt == "yes")
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
                            newt = "no";
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
                            newt = "no";
                        }
                    }
                }
                
                else if (choice == "run")
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
                
                else if (choice != "z")
                {
                    cout << "Choices: 'attack', 'a', 'run'.\n"; //Help output
                }
            }
            
            if (newt == "no")
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
            if (boss == "yes")
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
                            boss = "no";
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
                            boss = "no";
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
                
                else if (choice != "z")
                {
                    cout << "Choices: 'attack', 'a', 'run'.\n"; //Help output
                }
            }
            
            if (boss == "no")
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
            if (spider == "yes")
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
                            spider = "no";
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
                            spider = "no";
                        }
                    }
                }
                
                else if (choice == "run")
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
                else if (choice != "z")
                {
                    cout << "Choices: 'attack', 'a', 'run'.\n"; //Help output
                }
            }
            
            if (spider == "no")
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
            if (chesttwo == "yes")
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
                        chesttwo = "no";
                        
                    }
                    
                    if (yourClass == "Mage")
                    {
                        cout << "Inside the chest was a brand new staff! This one is much nicer and will allow you to cast runes; if you find any.\n";
                        power = 4;
                        chesttwo = "no";
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
            
            if (chesttwo == "no")
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
            if (fullhealthpotion == "yes")
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
                    fullhealthpotion = "no";
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
            
            if (fullhealthpotion == "no")
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
            
            if (bosslootOne == "yes")
            {
                if (yourClass == "Warrior")
                {
                    cout << "Inside this room, a sword lies in a stone.\n";
                    cout << "Upon closer examination, you find out that the stone is talc.\n";
                    cout << "You take out the sword with ease. It's much nicer than your old one. You become more powerful!\n";
                    power = 10;
                    bosslootOne = "no";
                }
                
                if (yourClass == "Mage")
                {
                    cout << "Inside this room, a single scroll lies.\n";
                    cout << "This scroll gave you the information necessary to cast a fire spell!\n";
                    cout << "You can now use fire in battle! (fs)\n";
                    cout << "This will be effective against some enemies, but not so much against others. Use your best judgement.\n";
                    fire = "yes";
                    bosslootOne = "no";
                }
            }
            
            if (bosslootOne == "no")
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
            if (greenswitch == "yes")
            {
                cout << "Inside this room is a green switch.\n";
                cout << "You press the switch, and you hear a rumbling sound in the distance.\n";
                cout << "You can now move on to the next area!\n";
                greenswitch ="no";
                greendoor = "yes";
            }
            
            if (greenswitch == "no")
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
            if (greendoor == "yes")
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
            
            if (greendoor == "no")
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
            if (preshopgold == "yes")
            {
                cout << "Inside this room, you see, for some reason, gold on the ground.\n";
                cout << "You gain 25G!\n";
                gold = gold + 25;
                preshopgold = "no";
            }
            
            if (preshopgold == "no")
            {
                cout << "You are in an empty room. You can go back, (s) forward, (n) or to your left (w).\n";
                cout << ">";
                cin >> choice;
                
                if (choice == "s" || choice == "south")
                {
                    location = "doorOne";
                }
                
                if (choice == "n" || choice == "north")
                {
                    location = "shop";
                }
                
                if (choice == "w" || choice == "west")
                {
                    location = "slime";
                }
            }
        }
        
        if (location == "shop")
        {
            cout << "You enter the shop. The shopkeep is astounded that someone walked in.\n";
            cout << "'Hello traveler. Please take a look at my wares.'\n";
            cout << "Do you want to look at his products? (y or n)\n";
            cout << ">";
            cin >> choice;
            
            if (choice == "y" || choice == "yes")
            {
                cout << "You decide to take a look.\n";
                choice == "";
                location = "Shop1";
            }
            if (choice == "n" || choice == "no")
            {
                cout << "You tell him you aren't interested at the moment, and walk out.\n";
                location = "lootFour";
            }
        }
        
        if (location == "Shop1")
        {
            cout << "Level 1 Health Potion (1) (5G)\n";
            cout << "Level 2 Health Potion (2) (10G)\n";
            cout << "Max Health Potion (3) (30G)\n";
            cout << "Level 1 Swiftness Potion (4) (5G)\n";
            cout << "Level 2 Swiftness Potion (5) (10G)\n";
            cout << "Max Swiftness Potion (6) (40G)\n";
            cout << "Stick (7) (50G)\n";
            cout << "Electric Spell (8) (50G)\n";
            cout << "Goggles of All-Seeing (9) (100G)\n";
            cout << "Select an option to learn more about an object/buy the object. You can also leave (s).\n";
            cout << ">";
            cin >> choice;
            
            if (choice == "s" || choice == "south")
            {
                location = "lootFour";
            }
            
            if (choice == "1")
            {
                cout << "Level 1 Health Potion: Heals 5 HP.\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 5)
                    {
                        cout << "You bought the Level 1 Health Potion! Open your inventory (i) to use it.\n";
                        gold = gold - 5;
                        lv1healthpotion = lv1healthpotion + 1;
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 5)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
                
                if (choice == "n")
                {
                    cout << "You decide to not buy the potion.\n";
                    location = "start";
                    location = "Shop1";
                    choice = "";
                }
            }
            
            if (choice == "2")
            {
                cout << "Level 2 Health Potion: Heals 15 HP.\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 15)
                    {
                        cout << "You bought the Level 2 Health Potion! Open your inventory (i) to use it.\n";
                        gold = gold - 15;
                        lv2healthpotion = lv2healthpotion + 1;
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 15)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
                
                if (choice == "n")
                {
                    cout << "You decide to not buy the potion.\n";
                    location = "start";
                    location = "Shop1";
                    choice = "";
                }
            }
            
            if (choice == "3")
            {
                cout << "Max Health Potion: Heals all HP.\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 30)
                    {
                        cout << "You bought the Max Health Potion! Open your inventory (i) to use it.\n";
                        gold = gold - 30;
                        maxhealthpotion = maxhealthpotion + 1;
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 30)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
                
                if (choice == "n")
                {
                    cout << "You decide to not buy the potion.\n";
                    location = "start";
                    location = "Shop1";
                    choice = "";
                }
            }
            
            if (choice == "4")
            {
                cout << "Level 1 Swiftness Potion: Increases your speed by 5.\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 5)
                    {
                        cout << "You bought the Level 1 Swiftness Potion! Open your inventory (i) to use it.\n";
                        gold = gold - 5;
                        lv1speedpotion = lv1speedpotion + 1;
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 5)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
                
                if (choice == "n")
                {
                    cout << "You decide to not buy the potion.\n";
                    location = "start";
                    location = "Shop1";
                    choice = "";
                }
            }
            
            if (choice == "5")
            {
                cout << "Level 2 Swiftness Potion: Increases your speed by 15.\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 10)
                    {
                        cout << "You bought the Level 2 Swiftness Potion! Open your inventory (i) to use it.\n";
                        gold = gold - 10;
                        lv2speedpotion = lv2speedpotion + 1;
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 10)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
                
                if (choice == "n")
                {
                    cout << "You decide to not buy the potion.\n";
                    location = "start";
                    location = "Shop1";
                    choice = "";
                }
            }
            
            if (choice == "6")
            {
                cout << "Max Swiftness Potion: Allows you to escape from any monster (excluding bosses).\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 40)
                    {
                        cout << "You bought the Max Swiftness Potion! Open your inventory (i) to use it.\n";
                        gold = gold - 40;
                        maxspeedpotion = maxspeedpotion + 1;
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 40)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
                
                if (choice == "n")
                {
                    cout << "You decide to not buy the potion.\n";
                    location = "start";
                    location = "Shop1";
                    choice = "";
                }
            }
            
            if (choice == "7")
            {
                cout << "Stick: Literally just a stick.\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 50)
                    {
                        cout << "You bought the Stick! Open your inventory (i) to equip it.\n";
                        gold = gold - 50;
                        stick = "yes";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 50)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
            }
            
            if (choice == "8")
            {
                if (yourClass == "Warrior")
                {
                    cout << "You have to be a mage to use this item.\n";
                }
                
                if (yourClass == "Mage")
                {
                    cout << "Electric Spell: Allows you to cast an electric spell.\n";
                    cout << "Do you wish to purchace this item? (y or n)\n";
                    cin >> choice;
                    
                    if (choice == "y")
                    {
                        if (gold >= 50)
                        {
                            cout << "You bought the Electric Spell! You can now use it in battle (es).\n";
                            gold = gold - 50;
                            electric = "yes";
                            location = "start";
                            location = "Shop1";
                            choice = "";
                        }
                        
                        else if (gold < 50)
                        {
                            cout << "You do not have enough gold to buy this item.\n";
                            location = "start";
                            location = "Shop1";
                            choice = "";
                        }
                    }
                    
                    if (choice == "n")
                    {
                        cout << "You decide to not buy the Electric Spell.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
            }
            
            if (choice == "9")
            {
                cout << "Goggles of All-Seeing: Allows you to see secret doors.\n";
                cout << "Do you wish to purchace this item? (y or n)\n";
                cin >> choice;
                
                if (choice == "y")
                {
                    if (gold >= 100)
                    {
                        cout << "You bought the Goggles of All-Seeing! If there is a secret door in the room, you will be notified.\n";
                        gold = gold - 100;
                        goggles = "yes";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                    
                    else if (gold < 100)
                    {
                        cout << "You do not have enough gold to buy this item.\n";
                        location = "start";
                        location = "Shop1";
                        choice = "";
                    }
                }
            }
        }
        
        if (location == "slime")
        {
            if (variableSlime == "yes") //Note: When you kill the slime the screen repestedly prints "You are in an empty room. You can go back to the room near the shop (s) or you can head onward (n)."
            {
                cout << "A slime stands in your way!\n";
                cout << ">";
                cin >> choice;
                
                if (choice == "attack" || choice == "a")
                {
                    if (yourClass == "Mage")
                    {
                        cout << "You stab it with your staff. It didn't take much damage.\n";
                        slime = slime - 3;
                        
                        if (slime > 0)
                        {
                            cout << "The slime is hurt! ";
                            HP = HP - 7;
                            cout << "The spider strikes back! You lose 7 HP! (" << HP << "/" << maxHP << ")\n";
                            if (HP == 0 || HP < 0)
                            {
                                cout << "You have been killed by a slime. Game over.";
                                choice = "z";
                            }
                            
                        }
                        
                        if (slime == 0 || slime < 0)
                        {
                            cout << "The slime is killed! It drops 10G.\n";
                            gold = gold + 10;
                            variableSlime = "no";
                        }
                    }
                    
                    if (yourClass == "Warrior")
                    {
                        cout << "You stab it with your sword. It doesn't do much damage.\n";
                        slime = slime - 3;
                        
                        if (slime > 0)
                        {
                            cout << "The slime is hurt! ";
                            HP = HP - 3;
                            cout << "The slime attacks! You lose 4 HP. (" << HP << "/" << maxHP << ")\n";
                            if (HP == 0 || HP < 0)
                            {
                                cout << "You have been killed by a slime. Game over.";
                                choice = "z";
                            }
                        }
                        
                        if (slime == 0 || slime < 0)
                        {
                            cout << "The slime is killed! It drops 10G.\n";
                            gold = gold + 10;
                            variableSlime = "no";
                        }
                    }
                }
                
                else if (choice == "run")
                {
                    if (speed > 10)
                    {
                        cout << "You ran back to the previous room.\n";
                        location = "lootFour";
                    }
                    
                    if (speed <= 10)
                    {
                        cout << "You were unable to run away.\n";
                        HP = HP - 5;
                        cout << "The slime attacks! You lose 5 HP! (" << HP << "/" << maxHP << ")\n";
                        if (HP == 0 || HP < 0)
                        {
                            cout << "You have been killed by a slime. Game over.";
                            choice = "z";
                        }
                    }
                }
                
                else if (choice == "fs")
                {
                    if (yourClass == "Mage")
                    {
                        if (fire == "yes")
                        {
                            cout << "You attack the slime with your fire spell! It does good damage!\n";
                            slime = slime - 7;
                            
                            if (slime > 0)
                            {
                                cout << "The slime is hurt! ";
                                HP = HP - 7;
                                cout << "The slime attacks! You lose 7 HP. (" << HP << "/" << maxHP << ")\n";
                                if (HP == 0 || HP < 0)
                                {
                                    cout << "You have been killed by a slime. Game over.";
                                    choice = "z";
                                }
                            }
                            
                            if (slime == 0 || slime < 0)
                            {
                                cout << "The slime is killed! It drops 10G.\n";
                                gold = gold + 10;
                                variableSlime = "no";
                            }
                        }
                    }
                }
                
                else if (choice == "es")
                {
                    if (yourClass == "Mage")
                    {
                        if (electric == "yes")
                        {
                            cout << "You attack the slime with electricity. It does decent damage.\n";
                            slime = slime - 5;
                            
                            if (slime > 0)
                            {
                                cout << "The slime is hurt! ";
                                HP = HP - 7;
                                cout << "The slime attacks! You lose 7 HP. (" << HP << "/" << maxHP << ")\n";
                                if (HP == 0 || HP < 0)
                                {
                                    cout << "You have been killed by a slime. Game over.";
                                    choice = "z";
                                }
                            }
                            
                            if (slime == 0 || slime < 0)
                            {
                                cout << "The slime is killed! It drops 10G.\n";
                                gold = gold + 10;
                                variableSlime = "no";
                            }
                        }
                    }
                }
                
                else if (choice != "z")
                {
                    if (yourClass == "Warrior")
                    {
                        cout << "Choices: 'attack', 'a', 'run'.\n"; //Help output
                    }
                    
                    else if (yourClass == "Mage")
                    {
                        cout << "Choices: 'attack', 'a', 'run', 'es' (electricity), 'fs' (fire spell).\n"; //Help output
                    }
                }
            }
            
            else if (variableSlime == "no")
            {
                cout << "You are in an empty room. You can go back to the room near the shop (s) or you can head onward (n)";
                cin >> choice;
                
                if (choice == "s" || choice == "south")
                {
                    location = "lootFour";
                }
                
                else if (choice == "n" || choice == "north")
                {
                    location = "agility";
                }
            }
        }
        
        if (location == "agility")
        {
            if (flood == "yes")
            {
                if (speed >= 25)
                {
                    cout << "You walked into the room. All of the sudden, a floodgate opened to your right.\nYou were quick to react and got on higher ground before the flood reached you!\n";
                    cout << "When the flood clears, you survey your options.";
                    flood = "no";
                }
                
                else if (speed < 25)
                {
                    cout << "You walked into the room. All of the sudden, a floodgate opened to your right.\nYou could not get on high ground quick enough, and you were swept away with the flood.";
                    location = "curseOne";
                }
            }
            
            else if (flood == "no")
            {
                cout << "You can go back the way you came (s) or you can head onward (n).";
                cin >> choice; //Added cin choice
                
                if (choice == "s")
                {
                    location = "slime";
                }
                
                else if (choice == "n")
                {
                    location = "curseOne"; //Added locations when the user types s or n.
                }
            }
        }
        
        if (location == "curseOne")
        {
            cout << "The flood brought you to a cursed room! From what seems to be nowhere, a voice says,\n";
            cout << "'Answer this riddle or be cursed with weakness!'\n";
            cout << "Do you want to try the riddle? (y/n)\n";
            cout << ">";
            cin >> choice;
            
            if (choice == "n")
            {
                cout << "If you don't listen to the riddle, you cannot progress. Do you want to try the riddle? (y/n)\n";
                cout << ">";
                cin >> choice;
                
                if (choice == "n")
                {
                    cout << "If you say no, you will die here. There is no other way. Do you want to try the riddle?? (y/n)\n";
                    cout << ">";
                    cin >> choice;
                    
                    if (choice == "n")
                    {
                        cout << "Dude. Come on. Try the riddle.\n";
                        cout << ">";
                        cin >> choice;
                        
                        if (choice == "n")
                        {
                            cout << "Why? Why are you doing this? Do. The. Riddle!\n";
                            cout << ">";
                            cin >> choice;
                            
                            if (choice == "n")
                            {
                                cout << "JUST DO THE FLIPPING RIDDLE! (y/y)\n";
                                cout << ">";
                                cin >> choice;
                                
                                if (choice == "n")
                                {
                                    cout << "...\n";
                                    cout << ">";
                                    cin >> choice;
                                    
                                    if (choice == "n")
                                    {
                                        cout << "I get it.\n";
                                        cout << ">";
                                        cin >> choice;
                                        
                                        if (choice == "n")
                                        {
                                            cout << "You just wanted to see what would happen.\n";
                                            cout << ">";
                                            cin >> choice;
                                            
                                            if (choice == "n")
                                            {
                                                cout << "What I'd say next. Yeah, you heard right. I have a conscience.\n";
                                                cout << ">";
                                                cin >> choice;
                                                
                                                if (choice == "n")
                                                {
                                                    cout << "And you know what? I'm tired of narrating you! You're so boring!\n";
                                                    cout << ">";
                                                    cin >> choice;
                                                    
                                                    if (choice == "n")
                                                    {
                                                        cout << "I should just kill you. I have that power.\n";
                                                        cout << ">";
                                                        cin >> choice;
                                                        
                                                        if (choice == "n")
                                                        {
                                                            cout << "This is your last chance.\n";
                                                            cout << ">";
                                                            cin >> choice;
                                                            
                                                            if (choice == "n")
                                                            {
                                                                cout << "Ugh, fine. You called my bluff. I hate what you've done here, but unfortunately for me, the programmer is pleased.\nHe enjoyed what you did and decided to give you some gold...\n";
                                                                gold = gold + 20;
                                                                cout << "You've gained 20 gold, blah blah blah, whatever. Just do the fricking riddle now.\n";
                                                                cout << ">";
                                                                cin >> choice;
                                                                
                                                                if (choice == "n")
                                                                {
                                                                    cout << "I don't understand. You meant yes, correct? Great. Here comes the riddle.\n";
                                                                    location = "riddle";
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            
            if (choice == "y")
            {
                location = "riddle";
            }
        }
        
        if (location == "riddle")
        {
            cout << "The voice speaks again.\n";
            cout << "'If the product of 3 and c is b, express the sum of c and 3 in terms of b!'\n";
            cout << "Is it...\n";
            cout << "3(b+3) (1)\n";
            cout << "(b+3)\b (2)\n";
            cout << "(b/3)+3 (3)\n";
            cout << "3b+3 (4)\n";
            cout << "Um... that's not really much of a riddle. (5)\n";
            cout << ">";
            cin >> choice;
            
            if (choice == "3")
            {
                cout << "'Oh. You actually got it. Well, um, bye I guess?'";
                cout << "The voice is gone. (Also if you actually solved that I'm impressed.)\n";
                cout << "The only way to go is forward (n)\n";
                cout << ">";
                cin >> choice;
            }
            
            if (choice == "5")
            {
                cout << "'What? Yes it is. It's a riddle.'";
                cout << "You tell him riddles are not math problems.";
                cout << "'Yeah? Well, I just think you don't know how to do the math.'\n";
                cout << "You ask if he even knows how to do the math.\n";
                cout << "'Um... um... Well of course I do! I am the one who asked the riddle!'\n";
                cout << "You tell him you doubt this. You ask him to show his work.\n";
                cout << "'OK! FINE! I got it off the internet. I just wanted to curse you. Ugh... I guess I'll be on my way now.'\n";
                cout << "The voice is gone.\n";
            }
        }
        
        if (choice == "i" || choice == "inventory")
        {
            if (1 > 0)
            {
                cout << "You have " << lv1healthpotion << " Level 1 Health Potion(s). (1)\n";
                cout << "You have " << lv2healthpotion << " Level 2 Health Potion(s). (2)\n";
                cout << "You have " << maxhealthpotion << " Max Health Potion(s). (3)\n";
                cout << "You have " << lv1speedpotion << " Level 1 Swiftness Potion(s). (4)\n";
                cout << "You have " << lv2speedpotion << " Level 2 Swiftness Potion(s). (5)\n";
                cout << "You have " << maxspeedpotion << " Max Speed Potion(s). (6)\n";
                if (stick == "yes")
                {
                    cout << "You have the stick. (7)\n";
                }
                cout << ">";
                cin >> choice;
                
                if (choice == "1")
                {
                    if (lv1healthpotion > 0)
                    {
                        cout << "You have used a Level 1 Health Potion. You gained 5 HP!\n";
                        lv1healthpotion = lv1healthpotion - 1;
                        HP = HP + 5;
                        if (HP > maxHP)
                        {
                            HP = maxHP;
                        }
                        cout << "You now have " << HP << " HP.\n";
                    }
                }
                
                if (choice == "2")
                {
                    if (lv2healthpotion > 0)
                    {
                        cout << "You have used a Level 2 Health Potion. You gained 15 HP!\n";
                        lv2healthpotion = lv2healthpotion - 1;
                        HP = HP + 15;
                        if (HP > maxHP)
                        {
                            HP = maxHP;
                        }
                        cout << "You now have " << HP << " HP.\n";
                    }
                }
                
                if (choice == "3")
                {
                    if (maxhealthpotion > 0)
                    {
                        cout << "You have used a Max Health Potion. You gained all HP.\n";
                        maxhealthpotion = maxhealthpotion - 1;
                        HP = maxHP;
                        cout << "You now have " << HP << " HP.\n";
                    }
                }
                
                if (choice == "4")
                {
                    if (lv1speedpotion > 0)
                    {
                        cout << "You have used a Level 1 Swiftness Potion. Your speed increases by 5!\n";
                        lv1speedpotion = lv1speedpotion - 1;
                        speed = speed + 5;
                    }
                }
                
                if (choice == "5")
                {
                    if (lv2speedpotion > 0)
                    {
                        cout << "You have used a Level 2 Swiftness Potion. Your speed increases by 15!\n";
                        lv2speedpotion = lv2speedpotion - 1;
                        speed = speed + 15;
                    }
                }
                
                if (choice == "6")
                {
                    if (maxspeedpotion > 0)
                    {
                        cout << "You have used a Max Speed Potion. You can run away from any normal enemy!\n";
                        maxspeedpotion = maxspeedpotion - 1;
                        speed = 99;
                    }
                }
                
                if (choice == "7")
                {
                    if (stick == "yes")
                    {
                        cout << "You equip the stick. You become... more powerful?\n";
                        power = 15;
                    }
                }
            }
        }
        
        if (choice == "stats" || choice == "stat")
        {
            cout << "Your stats are:\n";
            cout << "HP: " << HP << "\nSpeed: " << speed << "\nGold: " << gold << "\nPower " << power << "\n";
        }
    }
    return 0;
}
