#pragma once

#include <iostream>
#include <vector>
#include "lib.hpp"

eventParadox a0 = {
  .eventId = 0,
  .eventEra = 1,
  .eventName = "A new beginning?",
  .eventDialogue = "Start naba",
  .eventChoices = {"[A] sge"},
  .choiceSceneId = {101},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a1 = {
  .eventId = 101,
  .eventEra = 1,
  .eventName = "A new beginning?",
  .eventDialogue = "You suddenly, teleported to cave. The cave is massive, while you were inspecting the cave, you begun to see writings on the walls, writings you couldn’t understand." ,
  .eventChoices = {"[A] Analyze the writings.", "[B] Keep moving forward."},
  .choiceSceneId = {125, 103},
  .choiceStabilityCost = {-10, -10},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a2 = {
  .eventId = 103,
  .eventEra = 1,
  .eventName = "A light from the other end.",
  .eventDialogue = "While moving forward, you suddenly came across, 5 groups of human-like creatures. The 5 of them looked at you, and begun yelling." ,
  .eventChoices = {"[A] Run!", "[B] Talk to them."},
  .choiceSceneId = {109, 105},
  .choiceStabilityCost = {-10, -33},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a3 = {
  .eventId = 125,
  .eventEra = 1,
  .eventName = "Cave writings huh?",
  .eventDialogue = "While you analyze the cave writings, you figured out that this is a base for homo sapients, and upon closer inspection on surrounding, you saw that they have spears and slingshots scattered all over the floor. And while scanning the environment you suddenly heard movement coming from the other side of the cave." ,
  .eventChoices = {"[A] Hide!", "[B] Take the weapon", "[C] Talk to them"},
  .choiceSceneId = {126, 104, 105},
  .choiceStabilityCost = {-2, -5, -20},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a4 = {
  .eventId = 111,
  .eventEra = 1,
  .eventName = "The great escape.",
  .eventDialogue = "You managed to escape from the cave, now that you’re outside all you can see are sands, you’re in a Desert." ,
  .eventChoices = {"[A] Explore."},
  .choiceSceneId = {112},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a5 = {
  .eventId = 126,
  .eventEra = 1,
  .eventName = "Sneaky! Sneaky!",
  .eventDialogue = "You hid behind the huge rock. And as they were returning from their hunt to take a rest, you were suddenly given an opportunity to run without them noticing you." ,
  .eventChoices = {"[A] Escape", "[B] Talk to them"},
  .choiceSceneId = {106, 105},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a6 = {
  .eventId = 104,
  .eventEra = 1,
  .eventName = "Ooo! Weapons.",
  .eventDialogue = "While you were busy taking the weapon, the group of homo-sapient noticed your actions, and begun charging at you." ,
  .eventChoices = {"[A] Focus On Defense", "[B] Focus On Attack",},
  .choiceSceneId = {108, 107},
  .choiceStabilityCost = {-20, -20},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a7 = {
  .eventId = 105,
  .eventEra = 1,
  .eventName = "Smooth talker or a dead man?",
  .eventDialogue = "You tried talking to the homo sapients. While talking to them you couldn’t understand a thing that they said, and they look very, very, angry. One of them pointed a spear at your throat." ,
  .eventChoices = {"[A] Make monkey noises", "[B] Take a run."},
  .choiceSceneId = {110, 109},
  .choiceStabilityCost = {-10, -10},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a8 = {
  .eventId = 110,
  .eventEra = 1,
  .eventName = "Bro?",
  .eventDialogue = "You tried making monkey noises, and the homo-sapient laughed at you and stabbed you in the chest." ,
  .eventChoices = {"[A] Welp, this is it."},
  .choiceSceneId = {0},
  .choiceStabilityCost = {-100},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a9 = {
  .eventId = 107,
  .eventEra = 1,
  .eventName = "Off! Dead man.",
  .eventDialogue = "You tried your luck, now you die." ,
  .eventChoices = {"[A] This is the end."},
  .choiceSceneId = {0},
  .choiceStabilityCost = {-200},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a10 = {
  .eventId = 108,
  .eventEra = 1,
  .eventName = "The last stand,",
  .eventDialogue = "While defending yourself from the homo-sapient, your arm is starting to swell, these homo-sapient completely outmatched your abilities and you begin to lose conciousness." ,
  .eventChoices = {"[A] Start running for your life.", "[B] Keep holding on."},
  .choiceSceneId = {109, 107},
  .choiceStabilityCost = {-20, -5},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a11 = {
  .eventId = 106,
  .eventEra = 1,
  .eventName = "The great escape?",
  .eventDialogue = "You managed to escape from the cave, now that you’re outside all you can see are sands, you’re in a Desert." ,
  .eventChoices = {"[A] Explore."},
  .choiceSceneId = {111},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a12 = {
  .eventId = 112,
  .eventEra = 1,
  .eventName = "What!?",
  .eventDialogue = "As you were walking in the discord, you stumbled upon a weird device, almost like it wasn’t made for this era." ,
  .eventChoices = {"[A] Investigate further.", "[B] Play with the device."},
  .choiceSceneId = {113, 123},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a13 = {
  .eventId = 123,
  .eventEra = 1,
  .eventName = "What are you even doing!?",
  .eventDialogue = "Beep!" ,
  .eventChoices = {"[A] Investigate the device", "[B] Keep playing with it."},
  .choiceSceneId = {113, 124},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a14 = {
  .eventId = 113,
  .eventEra = 1,
  .eventName = "What!?",
  .eventDialogue = "As you investigate the the weird device you noticed some weird inscryption on it’s screen, you then noticed it burst in to life. And begun, slowly getting louder and louder." ,
  .eventChoices = {"[A] Run", "[B] Wait for something to happen."},
  .choiceSceneId = {114, 115},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a15 = {
  .eventId = 109,
  .eventEra = 1,
  .eventName = "The run.,",
  .eventDialogue = "While running from the homo-sapients you saw a small creves leading to the exit, with no other option to runned towards it while 5 homo-sapient were chasing you." ,
  .eventChoices = {"[A] I can do this!"},
  .choiceSceneId = {106},
  .choiceStabilityCost = {-10},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a16 = {
  .eventId = 124,
  .eventEra = 1,
  .eventName = "Bro what",
  .eventDialogue = "Boop!" ,
  .eventChoices = {"[A] Investigate the device", "[B] Keep playing with it."},
  .choiceSceneId = {113, 123},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a17 = {
  .eventId = 114,
  .eventEra = 1,
  .eventName = "What!?",
  .eventDialogue = "As you throw the device in to the ground, and runend away, you then noticed something in the air. something fast, something out of this world." ,
  .eventChoices = {"[A] Wait."},
  .choiceSceneId = {116},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a18 = {
  .eventId = 115,
  .eventEra = 1,
  .eventName = "What!?",
  .eventDialogue = "While holding the device, you then noticed something in the air, something fast, something out of this world." ,
  .eventChoices = {"[A] Wait."},
  .choiceSceneId = {117},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a19 = {
  .eventId = 116,
  .eventEra = 1,
  .eventName = "Damn.",
  .eventDialogue = "The unknown ship then begun landing, dust hurled everywhere. as it landed, the door opened. and you saw, humans?" ,
  .eventChoices = {"[A] Wait."},
  .choiceSceneId = {120},
  .choiceStabilityCost = {-5},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a20 = {
  .eventId = 117,
  .eventEra = 1,
  .eventName = "Damn.",
  .eventDialogue = "The unknown ship flew pass you, seemingly like it’s trying to identify you, after plenty of passes around you. It has begin to land." ,
  .eventChoices = {"[A] RUN!", "[B} Just wait."},
  .choiceSceneId = {118, 119},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a21 = {
  .eventId = 120,
  .eventEra = 1,
  .eventName = "Why here? Of all places.",
  .eventDialogue = "As the ship door, fully opened, heavily armed man then exited the ship. one of them is holding a tablet of some kind, and the armed man begun searching the area." ,
  .eventChoices = {"[A] Quietly escape.", "[B] Keep watching."},
  .choiceSceneId = {127, 121},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a22 = {
  .eventId = 118,
  .eventEra = 1,
  .eventName = "I’m tired.",
  .eventDialogue = "You tried running away, and every step you take, you get closer and closer to ship. It seems like you’re being dragged by the unknown ships tractor beam." ,
  .eventChoices = {"[A] Keep running", "[B} Stop running."},
  .choiceSceneId = {118, 119},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a23 = {
  .eventId = 119,
  .eventEra = 1,
  .eventName = "Who, are, they?",
  .eventDialogue = "As the ship lands, and it’s door opened. you were greeted by 4 heavily armed man, with guns pointed at you. You’re surrounded, they asked you begun asking you questions." ,
  .eventChoices = {"[A] Don’t answer any question.", "[B} Tell everything."},
  .choiceSceneId = {122, 128},
  .choiceStabilityCost = {0, 0},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox a24 = {
  .eventId = 127,
  .eventEra = 1,
  .eventName = "Damn.",
  .eventDialogue = "As you quietly try to escape the scene, you accidently stumbled at one of the rocks beneath the sand, the man who was holding the tablet quickly looked at his tablet, as you feel like it has detected something, your presence, as you continue trying to escape the scene, the armed man begin closing in at your position." ,
  .eventChoices = {"[A] Quick! Run!"},
  .choiceSceneId = {0},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a25 = {
  .eventId = 121,
  .eventEra = 1,
  .eventName = "Damn.",
  .eventDialogue = "As you continue to watch, the man holding the tablet begun searching the area, and managed to locate the device that you so unknowingly activated." ,
  .eventChoices = {"[A] Quietly escape.", "[B] Keep watching."},
  .choiceSceneId = {0},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a26 = {
  .eventId = 122,
  .eventEra = 1,
  .eventName = "Never a snitch",
  .eventDialogue = "As you stay quiet while being interrogated, the man a tablet then ordered the man to take you in the ship." ,
  .eventChoices = {"[A] ..."},
  .choiceSceneId = {0},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};

eventParadox a27 = {
  .eventId = 128,
  .eventEra = 1,
  .eventName = "What a snitch.",
  .eventDialogue = "As you told them all of the truth on how you got in to your situation, the guy holding the tablet, ordered his man to take you in to the ship." ,
  .eventChoices = {"[A] ..."},
  .choiceSceneId = {0},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};





std::vector<eventParadox> era1Events = {a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27};