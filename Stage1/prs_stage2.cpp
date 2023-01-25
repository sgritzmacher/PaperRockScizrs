//
//  prs_stage2.cpp
//  PaperRockScizrs
//
//  Created by Shawn Gritzmacher on 1/23/23.
//  Copyright © 2023 Shawn Gritzmacher. All rights reserved.
//
#if prs_stage2

#include <stdio.h>
#include <iostream>
#include <time.h>


int main()
{
    // main scenarios
    
    // MAIN: we have us playing the computer
    // strucure reques play or exit
    // switch > case: playGame, exitGame, default
    // have computer generate choice
    // int prsComp = 1 + rand() % 3
    
    // next
    // we choose between paper rock scissors
    // cout "Paper Rock Scissors
    // cout " Make a choice by typing a number
    // cout " 1. Paper
    // cout " 2. Rock
    // cout " 3. Scissors
    // int userChoice;
    // cin >> userChoice;
    
    // begin comparing in if statements
    // prsComp to userChoice
    
    
    // next we as the computer to generate its choice
    // we compare the 2 results
    // we acknowledge the winner
    

    // paper rock scissors
    // these are if/else statements
    // can use functions to tidy up
    
    // PAPER -
    // paper to paper = tie,
    // if(userChoice == prsComp
    // Note ; 1 == 1
    // cout << " Paper to Paper. Tie. No winner. " << endl;
    
    // paper to rock = wins, paper wraps rock crushes it!
    // if(userChoice < prsComp
    // note; 1 < 2
    // cout << "Paper to Rock.  You win! Paper eventually crushes rock.
    
    // paper to scissors = loses, scissors cuts paper.
    // if(userChoice < prsComp
    // note; 1 < 3
    // cout << "Paper to Scissors. You lose. Scissors cuts paper.
    
    
    // ROCK -
    // rock to rock = tie,
    // if(userChoice == prsComp
    // note; 2 == 2
    // cout << " Rock to Rock. Tie. No winner. << endl;
    
    // rock to paper = loses, paper wraps rock
    // if(userChoice > prsComp
    // note; 2 > 1
    // cout << " Rock to Paper.  You lose.  Rock succumbs to paper.
    
    // rock to scissors = wins, rock smashes scissors
    // if(userChoice < prsComp
    // note 2 < 3
    // cout << " Rock to Scissors. You win! Rock smashes scissors.
    
    
    // SCISSORS -
    // scissors to scissors = tie
    // if(userChoice == prsComp
    // note; 3 == 3
    // cout << " Scissors to Scissors. Tie. No winner. " << endl;
    
    // scissors to rock = lose, rock smashes scissors
    // if(userChoice > prsComp
    // note; 3 > 2
    // cout << " Scissors to Rock. You lose. Rock smashes scissors." << endl;
    
    // scissors to paper = wins, scissors cuts paper
    // if(userChoice > prsComp
    // note; 3 > 1
    // cout << " Scissors to Paper. You win! Scissors cuts paper. " << endl;
    
    
    
    
}


#endif
