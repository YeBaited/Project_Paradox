
// PROJECT PARADOX
// STANDARD ERA FORMAT
// STANDARD RULES

// 10 SCENES OR NARRATION PER ERA <---I

// NORMAL SCENE <---I
// 2 choices

// IMPORTANT SCENE <---I
// 3 choices

// CRITICAL SCENE <---I
// 4 choices

// << SCENE IS A BLOCK NOT VARIABLE >>


// << VARIABLES >>
// narration        - SCENE STORY NARRATIVE
// sceneType        - NORMAL / IMPORTANT / CRITICAL - different number of choices
// ---------        
// choices          - PLAYER CHOICES
// stabilityEffect  - EFFECT AMOUNT ON STABILITY INDEX ( +5 / +10 / -20 / 0 ) into stabilityIndex
// stabiltyEffect MUST BE DYNAMIC TO THE CRITICALITY OF EFFECT ON THE TIMELINE 


// << GENERAL INFORMATION >>

// IN A SCENE IT CONTAINS: [10][4]
// [10] IS FOR THE STORAGE FOR SCENES (narration) <--> THIS WORK WITH (sceneType)
//													   NORMAL/IMPORTANT/CRITICAL
										   
// [4] IS FOR THE CHOICES (choices) <--> THIS WORK WITH (stabilityEffect)
// SHOULD BE WRITTEN AS [10][4]

// USE PROPER INDEXING!! narration[10] is the INITIALIZATION
//                       narration[9] is how you CALL scene 10


// TIMELINE
//
// MAIN ERA - POINT SINGULARITY
// ERA 1 - 
// ERA 2 -
// ERA 3 -
// ERA 4-
// ERA 5 -



// REMOVE COMMENTS AFTER GNG! <---I

#include <iostream>
#include <string>

using namespace std;

// SCENE STORAGE

string narration[10]; // NARRATION STORAGE PER SCENE

string choices[10][4]; // CHOICES STORAGE PER SCENE 
					   // [10] IS FOR INDEX IN WHICH SCENE,
					   // [4] IS THE AMOUNT OF CHOICES (AMOUNT IS SAID ABOVE)

int stabilityEffect[10][4]; 

int nextScene[10][4];

string sceneType[10];

// ERA EXAMPLE

void loadEra1() {


    // SCENE 0
    // NORMAL SCENE = 2 CHOICES

    sceneType[0] = "NORMAL";

    narration[0] =
    "You arrive at the Medieval District.\n"
    "The streets are silent and abandoned.\n"
    "A strange signal pulses beneath the ruins.\n"
    "A.E.T.H.E.L. detects timeline instability nearby.";

    choices[0][0] =
    "Investigate the signal";

    choices[0][1] =
    "Ignore the signal";

    stabilityEffect[0][0] = 5;
    stabilityEffect[0][1] = -3;

    nextScene[0][0] = 1;
    nextScene[0][1] = 2;


    // SCENE 1
    // IMPORTANT SCENE = 3 CHOICES

    sceneType[1] = "IMPORTANT";

    narration[1] =
    "You discover an underground archive.\n"
    "Ancient records describe an event called The Fracture.\n"
    "A.E.T.H.E.L. warns that the data is unstable.";

    choices[1][0] =
    "Preserve the archive";

    choices[1][1] =
    "Extract the data";

    choices[1][2] =
    "Destroy the archive";

    stabilityEffect[1][0] = 10;
    stabilityEffect[1][1] = -5;
    stabilityEffect[1][2] = -15;

    nextScene[1][0] = 3;
    nextScene[1][1] = 4;
    nextScene[1][2] = 5;


    // SCENE 2
    // NORMAL SCENE = 2 CHOICES

    sceneType[2] = "NORMAL";

    narration[2] =
    "You leave the signal untouched.\n"
    "The district becomes colder.\n"
    "Timeline corruption slowly increases.";

    choices[2][0] =
    "Continue exploration";

    choices[2][1] =
    "Return to hub";

    stabilityEffect[2][0] = -2;
    stabilityEffect[2][1] = 0;

    nextScene[2][0] = 6;
    nextScene[2][1] = -1;


    // SCENE 3
    // CRITICAL SCENE = 4 CHOICES

    sceneType[3] = "CRITICAL";

    narration[3] =
    "The archive activates unexpectedly.\n"
    "A massive paradox pulse spreads across the district.\n"
    "Reality begins to distort.\n"
    "A.E.T.H.E.L. loses connection temporarily.";

    choices[3][0] =
    "Stabilize the pulse";

    choices[3][1] =
    "Extract the core data";

    choices[3][2] =
    "Shut down the archive";

    choices[3][3] =
    "Escape immediately";

    stabilityEffect[3][0] = 15;
    stabilityEffect[3][1] = -10;
    stabilityEffect[3][2] = 5;
    stabilityEffect[3][3] = -20;

    nextScene[3][0] = 7;
    nextScene[3][1] = 8;
    nextScene[3][2] = 9;
    nextScene[3][3] = -1;


    // SCENE 4+
    // CONTINUE SAME FORMAT TO SCENE 10 index is [9]

}