//
//  prs_stage2.cpp
//  PaperRockScizrs
//
//  Created by Shawn Gritzmacher on 1/23/23.
//  Copyright © 2023 Shawn Gritzmacher. All rights reserved.
//
#if PRS_game

#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

constexpr int g_playGame = 1;
constexpr int g_exitGame = 2;


int main()
{
    // main scenarios
    srand((unsigned)time(0));
    
    cout << "Welcome to Paper Rock Scissors " << endl;
    cout << "Please choose 1 to play or 2 to exit " << endl;
    int userSelect;
    cin >> userSelect;
    
    switch(userSelect)
    {
        case g_playGame:
        {
            //game generates its play.
            int prsComp = 1 + rand() % 3;
            
            //present to user now
            cout << "Paper Rock Scissors" << endl;
            cout << " Make a choice by typing a number" << endl;
            cout << " 1. Paper " << endl;
            cout << " 2. Rock " << endl;
            cout << " 3. Scissors " << endl;
            int userChoice;
            cin >> userChoice;
            
            
            // PAPER -
            // paper to paper = tie,
            if(userChoice == prsComp)
            {
                cout << " Paper to Paper. Tie. No winner. " << endl;
            }
        
            // paper to rock = wins, paper wraps rock crushes it!
            if(userChoice < prsComp)
            {
                cout << "Paper to Rock.  You win! Paper eventually crushes rock. " << endl;
            }
          
            // paper to scissors = loses, scissors cuts paper.
            if(userChoice < prsComp)
            {
                cout << "Paper to Scissors. You lose. Scissors cuts paper." << endl;
                
            }
            
            // ROCK -
            // rock to rock = tie,
            if(userChoice == prsComp)
            {
                 cout << " Rock to Rock. Tie. No winner." << endl;
            }
            
           
            // rock to paper = loses, paper wraps rock
            if(userChoice > prsComp)
            {
                cout << " Rock to Paper.  You lose.  Rock succumbs to paper. " << endl;
            }
        // note; 2 > 1
          
            
            // rock to scissors = wins, rock smashes scissors
            if(userChoice < prsComp)
            {
                cout << " Rock to Scissors. You win! Rock smashes scissors. " << endl;
                
            }
            
            // SCISSORS -
            // scissors to scissors = tie
            if(userChoice == prsComp)
            {
                cout << " Scissors to Scissors. Tie. No winner. " << endl;
            }
            
            
            
            // scissors to rock = lose, rock smashes scissors
            if(userChoice > prsComp)
            {
                cout << " Scissors to Rock. You lose. Rock smashes scissors." << endl;
            }
            
            
            
            // scissors to paper = wins, scissors cuts paper
            if(userChoice > prsComp)
            {
                cout << " Scissors to Paper. You win! Scissors cuts paper. " << endl;
            }
            break;
        
        }
        case g_exitGame:
        {
            cout << " Exit " << endl;
            
        }
        default:
        {
            cout << "Invalid information. " << endl;
        }
    }
    
}


#endif

