//
//  prs_stage1.cpp
//  PaperRockScizrs
//
//  Created by Shawn Gritzmacher on 1/23/23.
//  Copyright © 2023 Shawn Gritzmacher. All rights reserved.
//
#if prs_stage1

#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string>


using namespace std;

int main()
{
    // plan - use a while loop
    // pcs
    // int userChoice = 1 + rand() % 3;
    // accept a string
    // put info a while vs switch/case:
    // connect array to random function
    // wordle good app as example
    // store number results into strings
    
    // we're not pushing data in.
    // while loop i think is fit for play - choosing
    while(1)
    {
        
        //issue falling deeper and deepr into if statement
        //need to go back and compare setup to other apps we've created.
        
        
        cout << "press 1 to play " << endl;
        cout << "press 2 to exit" << endl;
        int playerEnter;
        cin >> playerEnter;
        
        if(playerEnter == 1)
        {
            // user chooses
            cout << " Select the following numbers to play" << endl;
            cout << " Press 1: Paper" << endl;
            cout << " Press 2: Rock" << endl;
            cout << " Press 3: Scissors" << endl;
            int userSelect;
            cin >> userSelect;
            
            if(userSelect == 1)
            {
                cout << "Now select 1 to see if you beat the machine" << endl;
                cout << "Select 1 " << endl;
                int machineNumber;
                
                if(machineNumber == 1)
                {
                    int machineResult = 1 + rand() % 3;
                    
                    if(machineResult == 1)
                    {
                        
                    }
                }
                
            }
            if(userSelect == 2)
            {
                cout << "Now select 1 to see if you beat the machine" << endl;
            }
            if(userSelect == 3)
            {
                cout << "Now select 1 to see if you beat the machine" << endl;
            }
            else
            {
                cout << "Invalid selection. Exit" << endl;
            }
            //within this loop reveal the machine to the player and who wins.
            
            
            
        }
        else
        {
            cout << "Exit " << endl;
        }
    }
    
    
    
}

#endif

