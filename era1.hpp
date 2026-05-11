#pragma once

#include <iostream>
#include <vector>
#include "lib.hpp"

eventParadox scene1_1 = {
    .eventId = 0,
    .eventEra = 0,
    .eventName = "Introduction",
    .eventDialogue = "You are " + playerName + ", a scientist working on some weird ass time travelling invention, as you were doing your job you suddenly came across an abondened time travelling machine.",
    .eventChoices = {"[A] Go towards the machine.", "[B] Ignore the machine."},
    .choiceSceneId = {1, 4},
    .choiceStabilityCost = {-10, -33}
};

eventParadox scene1_2 = {
    .eventId = 4,
    .eventEra = 0,
    .eventName = "Bro",
    .eventDialogue = "Welp, you fucking ended the game. Congrats dumbass.",
    .eventChoices = {"[A] Go back to the starting area."},
    .choiceSceneId = {0},
    .choiceStabilityCost = {100}
};

eventParadox scene2_1 = {
    .eventId = 1,
    .eventEra = 0,
    .eventName = "What does this do!?",
    .eventDialogue = "As you go towards the machine, you saw it hummed in to life, and suddenly the monitor starts turning on and calling your name. It hells, 'Daddy please press me.'",
    .eventChoices = {"[A] Press the button.", "[B] Analyze the surrounding."},
    .choiceSceneId = {3, 2},
    .choiceStabilityCost = {-40, 10}
};


eventParadox scene2_2 = {
    .eventId = 2,
    .eventEra = 0,
    .eventName = "An enigmatic machine.",
    .eventDialogue = "As you analyze the machine, you came across the word 'Project Paradox', with tons of research paper all littered on the ground. While you were analyzing the machine, the room door suddenly closed shut with no way out, and the machine uttered another word 'Daddy, please, Press me.'",
    .eventChoices = {"[A] Press the button."},
    .choiceSceneId = {3},
    .choiceStabilityCost = {-20}
};


eventParadox scene3 = {
    .eventId = 3,
    .eventEra = 0,
    .eventName = "What the F#*#!!!",
    .eventDialogue = "The machine burst in to life. And just like that, you went unconscious. After several days, you wake up, with a strange sounds in the surrounding, a fucking dinosaur! THE END",
    .eventChoices = {"[A] Well fuck."},
    .choiceSceneId = {0},
    .choiceStabilityCost = {100}
};

std::vector<eventParadox> era1Events = {scene1_1, scene2_1, scene2_2, scene3, scene1_2};