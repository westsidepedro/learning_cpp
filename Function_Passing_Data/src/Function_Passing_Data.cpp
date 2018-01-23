//============================================================================
// Name        : Function_Passing_Data.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

// Passing Data to Subroutines
/*

 */

#include <iostream>
using namespace std;

void showMenu()
    {
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
    }

int getInput()
    {
    cout << "Enter selection: " << flush;

    int input;
    cin >> input;

    return input;

    }

void processSelection(int poopy)
    {
    switch (poopy)
	{
    case 1:
	cout << "Searching...." << endl;
	break;
    case 2:
	cout << "Opening Records...." << endl;
	break;
    case 3:
	cout << "Quiting" << endl;
	break;
    default:
	cout << "Please select an item from the menu." << endl;
	}
    }

int main()
    {
    showMenu();
    int selection = getInput();
    processSelection(selection);// run processSelection with value of "poopy"
				// being whatever the value of "selection" is

    /*
     ////////////////////////////// Practice Time //////////////////////////////


     void menuOptions(){
     cout << " " << endl;
     cout << "-----Dinner!-----" << endl;
     cout << "1. Lamb" << endl;
     cout << "2. Chicken" << endl;
     cout << "3. Beef" << endl;
     cout << "4. Cat" << endl;
     cout << "5. I'd rather starve please" << endl;

     }

     int dinnerSelection(){

     int pick;
     do{
     cout << "Please choose your dinner option: " << flush;
     cin >> pick;
     }while( pick > 5 );

     return pick;
     }

     void yourChoice(int eat){
     switch(eat){
     case 1:
     cout << "You chose Lamb, a fine choice!" << endl;
     break;
     case 2:
     cout << "You chose Chicken, would you like some waffles as well?" << endl;
     break;
     case 3:
     cout << "You chose Beef, it's what's for dinner!" << endl;
     break;
     case 4:
     cout << "You chose Cat...... Really?" << endl;
     break;
     case 5:
     cout << "Fine then, go to your room." << endl;
     break;
     default:
     cout << "Please choose your dinner option" << endl;
     }

     }

     main(){

     menuOptions();
     int food = dinnerSelection();
     yourChoice(food);

     */
    return 0;
    }
