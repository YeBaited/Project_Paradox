#pragma once

#include <iostream>
#include <vector>
#include "lib.hpp"

eventParadox aa0 = {
  .eventId = 0,
  .eventEra = 0,
  .eventName = "The White Room",
  .eventDialogue = "Welcome! you can play the game by moving your arrow keys and pressing enter to your desire choices, goodluck! \n rules: \n if your stability goes down it will be harder to read the text, so watch out.",
  .eventChoices = {
  "[A] Begin.",
  "[A] Start.",
  "[A] Play",
  },
  .choiceSceneId = {1, 1, 1},
  .choiceStabilityCost = {+100, +100, +100},
  .RequirementSceneId = {0,0,0},
  .RequirementSceneChoice = {0,0,0}
};


eventParadox aa1 = {
  .eventId = 1,
  .eventEra = 0,
  .eventName = "The White Room",
  .eventDialogue =
  "You wake up in a vast white void. "
  "There is no sky, no ground, and no sound. "
  "Thousands of strange symbols float around you. "
  "Although you have never seen them before, they somehow feel familiar. "
  "Far ahead, a glowing sphere pulses with blue light.",
  .eventChoices = {
  "[A] Approach the sphere.",
  "[B] Study the symbols."
  },
  .choiceSceneId = {2, 3},
  .choiceStabilityCost = {0, -5},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa2 = {
  .eventId = 3,
  .eventEra = 0,
  .eventName = "Impossible Symbols",
  .eventDialogue =
  "You touch one of the floating symbols. "
  "Suddenly a vision flashes before your eyes. "
  "A giant machine. A black hole. A fractured sky. "
  "Then everything vanishes. "
  "The symbols begin rearranging themselves into a doorway.",
  .eventChoices = {
  "[A] Enter the doorway.",
  "[B] Touch another symbol."
  },
  .choiceSceneId = {6, 7},
  .choiceStabilityCost = {-5, -10},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa3 = {
  .eventId = 2,
  .eventEra = 0,
  .eventName = "The Voice",
  .eventDialogue =
  "As you approach the sphere, a voice echoes through the void. "
  "Operator. Signal established."
  "Can you hear me?",
  .eventChoices = {
  "[A] Ask who is speaking.",
  "[B] Remain silent."
  },
  .choiceSceneId = {4, 5},
  .choiceStabilityCost = {0, -5},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa4 = {
  .eventId = 5,
  .eventEra = 0,
  .eventName = "Silence",
  .eventDialogue =
  "You remain silent. "
  "The sphere brightens. "
  "Psychological confusion detected."
  "Memory loss expected after temporal transfer.",
  .eventChoices = {
  "[A] Continue listening.",
  "[B] Walk away."
  },
  .choiceSceneId = {8, 10},
  .choiceStabilityCost = {0, -5},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa5 = {
  .eventId = 4,
  .eventEra = 0,
  .eventName = "Point Singularity",
  .eventDialogue =
  "I am Point Singularity."
  "Reality is experiencing catastrophic instability." 
  "You have been selected as an Operator.",
  .eventChoices = {
  "[A] Ask what happened.",
  "[B] Ask why you were chosen."
  },
  .choiceSceneId = {8, 9},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa6 = {
  .eventId = 9,
  .eventEra = 0,
  .eventName = "The Operator",
  .eventDialogue =
  "You are the last available Operator."
  "Your mission is to stabilize fractured timelines."
  "Failure will result in total collapse.",
  .eventChoices = {
  "[A] Accept.",
  "[B] Refuse."
  },
  .choiceSceneId = {15,16},
  .choiceStabilityCost = {0,-20},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa7 = {
  .eventId = 16,
  .eventEra = 0,
  .eventName = "Refusal",
  .eventDialogue =
  "Refusal detected."
  "No alternative operators available."
  "Mission mandatory.",
  .eventChoices = {
  "[A] Continue.",
  ""
  },
  .choiceSceneId = {20,0},
  .choiceStabilityCost = {-10,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa8 = {
.eventId = 7,
.eventEra = 0,
.eventName = "Future Echo",
.eventDialogue =
"You touch another symbol. "
"This time you see a blue energy core orbiting a black hole. "
"You hear people screaming. "
"Then the vision collapses.",
.eventChoices = {
"[A] Follow the doorway.",
"[B] Ignore the vision."
},
.choiceSceneId = {11,11},
.choiceStabilityCost = {-5,-5},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox aa9 = {
  .eventId = 6,
  .eventEra = 0,
  .eventName = "The Doorway",
  .eventDialogue =
  "You step through the doorway. "
  "Fragments of history rush past you. "
  "Ancient tribes. Castles. Starships. "
  "All of them seem damaged somehow.",
  .eventChoices = {
  "[A] Keep moving.",
  "[B] Observe the visions."
  },
  .choiceSceneId = {11, 12},
  .choiceStabilityCost = {0, -5},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa10 = {
  .eventId = 12,
  .eventEra = 0,
  .eventName = "The Future",
  .eventDialogue =
  "You witness a station near a black hole. "
  "A giant blue sphere spins in its center. "
  "The image vanishes before you understand it.",
  .eventChoices = {
  "[A] Move on.",
  "[B] Remember the vision."
  },
  .choiceSceneId = {18,18},
  .choiceStabilityCost = {-5,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa11 = {
  .eventId = 10,
  .eventEra = 0,
  .eventName = "Lost",
  .eventDialogue =
  "You walk away from the sphere. "
  "The white void stretches endlessly. "
  "There is nowhere else to go.",
  .eventChoices = {
  "[A] Return.",
  "[B] Keep wandering."
  },
  .choiceSceneId = {8,17},
  .choiceStabilityCost = {0,-15},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa13 = {
  .eventId = 8,
  .eventEra = 0,
  .eventName = "The Fracture",
  .eventDialogue =
  "A fracture has appeared in reality."
  "The damage is spreading across time itself."
  "Primitive. Medieval. Advanced. Every era is affected.",
  .eventChoices = {
  "[A] Ask how to stop it.",
  "[B] Ask what happens if it spreads."
  },
  .choiceSceneId = {13,14},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa14 = {
  .eventId = 14,
  .eventEra = 0,
  .eventName = "Total Collapse",
  .eventDialogue =
  "If the fractures merge, every timeline will cease to exist."
  "Past. Present. Future.",
  .eventChoices = {
  "[A] Continue.",
  "[B] Continue."
  },
  .choiceSceneId = {20,20},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa15 = {
  .eventId = 15,
  .eventEra = 0,
  .eventName = "Acceptance",
  .eventDialogue =
  "Operator status confirmed."
  "Preparing temporal insertion.",
  .eventChoices = {
  "[A] Proceed.",
  ""
  },
  .choiceSceneId = {20,0},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa16 = {
  .eventId = 11,
  .eventEra = 0,
  .eventName = "Timeline Corridor",
  .eventDialogue =
  "A corridor of light appears. "
  "You see countless timelines branching endlessly around you.",
  .eventChoices = {
  "[A] Continue forward.",
  "[B] Reach toward a timeline."
  },
  .choiceSceneId = {18,19},
  .choiceStabilityCost = {0,-10},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa17 = {
  .eventId = 18,
  .eventEra = 0,
  .eventName = "Reality Cracks",
  .eventDialogue =
  "The corridor suddenly shatters like glass. "
  "Mountains appear below. "
  "Cold wind rushes against your face.",
  .eventChoices = {
  "[A] Brace yourself.",
  "[B] Look down."
  },
  .choiceSceneId = {20,20},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa18 = {
  .eventId = 13,
  .eventEra = 0,
  .eventName = "The Mission",
  .eventDialogue =
  "Locate fractures."
  "Restore stability."
  "Preserve history.",
  .eventChoices = {
  "[A] Understood.",
  "[B] Continue."
  },
  .choiceSceneId = {20,20},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox aa19 = {
.eventId = 19,
.eventEra = 0,
.eventName = "Touching History",
.eventDialogue =
"You touch a nearby timeline. "
"Ancient cave drawings suddenly appear around you. "
"The symbols are identical to those from the void.",
.eventChoices = {
"[A] Continue.",
""
},
.choiceSceneId = {20,0},
.choiceStabilityCost = {-5,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox aa20 = {
.eventId = 17,
.eventEra = 0,
.eventName = "Lost Forever",
.eventDialogue =
"You wander endlessly through the void. "
"Eventually even the sphere disappears. "
"Your story ends here.",
.eventChoices = {
"[A] End.",
""
},
.choiceSceneId = {0,0},
.choiceStabilityCost = {-200,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox aa21 = {
.eventId = 20,
.eventEra = 0,
.eventName = "The First Jump",
.eventDialogue =
"Point Singularity speaks one final time. "
"Operator. The first fracture awaits."
"Repair history. Save reality."
"The white room collapses around you. "
"Darkness consumes everything.",
.eventChoices = {
"[A] Continue.",
},
.choiceSceneId = {101},
.choiceStabilityCost = {0},
.RequirementSceneId = {0},
.RequirementSceneChoice = {0}
};


std::vector<eventParadox> era0Events = {aa0, aa1, aa2, aa3, aa4, aa5, aa6, aa7, aa8, aa9, aa10, aa11, aa13, aa14, aa15, aa16, aa17, aa18, aa19, aa20, aa21};