#pragma once

#include <iostream>
#include <vector>
#include "lib.hpp"

eventParadox d1 = {
.eventId = 401,
.eventEra = 4,
.eventName = "After The Black",
.eventDialogue =
"The stars disappear. "
"The station disappears. "
"Space itself disappears. "
"You stand once again inside the White Room. "
"But now cracks spread across its endless surface. "
"The symbols floating around you are breaking apart.",
.eventChoices = {
"[A] Move forward.",
"[B] Call for Point Singularity."
},
.choiceSceneId = {402,402},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d2 = {
.eventId = 402,
.eventEra = 4,
.eventName = "The Last Meeting",
.eventDialogue =
"Blue fragments gather together. "
"Point Singularity appears, weaker than before. "
"'Operator,' it says. "
"'Temporal fractures contained.' "
"'Final anomaly remains.'",
.eventChoices = {
"[A] Ask what anomaly remains.",
"[B] Stay silent."
},
.choiceSceneId = {403,403},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d3 = {
.eventId = 403,
.eventEra = 4,
.eventName = "The Truth",
.eventDialogue =
"The room changes around you. "
"You see the prehistoric caves. "
"You see the valley. "
"You see the station. "
"They overlap. "
"Point Singularity speaks quietly. "
"'The fractures were never separate incidents.' "
"'They were one event.' "
"'You.'",
.eventChoices = {
"[A] Ask what that means.",
"[B] Refuse to believe it."
},
.choiceSceneId = {404,404},
.choiceStabilityCost = {0,5},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d4 = {
.eventId = 404,
.eventEra = 4,
.eventName = "Operator Origin",
.eventDialogue =
"'Each transfer damaged chronology.' "
"'Each correction created another fracture.' "
"'You survived because you stopped belonging to normal time.' "
"'You became the anchor holding the paradox together.' "
"The White Room shakes violently.",
.eventChoices = {
"[A] Ask how to stop it.",
"[B] Look around."
},
.choiceSceneId = {405,405},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d5 = {
.eventId = 405,
.eventEra = 4,
.eventName = "The Core Fracture",
.eventDialogue =
"A crack opens beneath your feet. "
"Inside it you see every era at once. "
"The cave. "
"The mountain. "
"The station. "
"Point Singularity points toward it. "
"'The paradox survives because you survived.'",
.eventChoices = {
"[A] Step closer.",
"[B] Observe the fracture."
},
.choiceSceneId = {406,406},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d6 = {
.eventId = 406,
.eventEra = 4,
.eventName = "Final Directive",
.eventDialogue =
"'There is only one remaining correction.' "
"'Remove the anchor.' "
"You realize what Point Singularity means. "
"The anchor is you.",
.eventChoices = {
"[A] Accept.",
"[B] Ask if there is another way."
},
.choiceSceneId = {407,407},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d7 = {
.eventId = 407,
.eventEra = 4,
.eventName = "No Alternative",
.eventDialogue =
"'No.' "
"Point Singularity's voice cracks with static. "
"'Your existence between timelines prevents closure.' "
"'History cannot heal while you remain outside it.' "
"The cracks in the White Room widen.",
.eventChoices = {
"[A] Walk toward the fracture.",
"[B] Keep listening."
},
.choiceSceneId = {408,408},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d8 = {
.eventId = 408,
.eventEra = 4,
.eventName = "Memories",
.eventDialogue =
"As you approach, fragments appear around you. "
"The cave walls. "
"The desert beacon. "
"The freezing valley. "
"The collapsing station. "
"You realize none of them were separate journeys. "
"They were one continuous collapse.",
.eventChoices = {
"[A] Continue forward.",
"[B] Reach for the memories."
},
.choiceSceneId = {409,409},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d9 = {
.eventId = 409,
.eventEra = 4,
.eventName = "Point Singularity",
.eventDialogue =
"'Operator.' "
"'Thank you.' "
"For the first time, Point Singularity sounds human. "
"'I was created to preserve history.' "
"'You gave history another chance.'",
.eventChoices = {
"[A] Enter the fracture.",
"[B] Look back one last time."
},
.choiceSceneId = {410,410},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox d10 = {
.eventId = 410,
.eventEra = 4,
.eventName = "Release",
.eventDialogue =
"You step into the fracture. "
"The White Room begins collapsing. "
"The floating symbols stop moving. "
"For the first time since awakening, everything becomes quiet.",
.eventChoices = {
"[A] Continue."
},
.choiceSceneId = {411},
.choiceStabilityCost = {0},
.RequirementSceneId = {0},
.RequirementSceneChoice = {0}
};

eventParadox d11 = {
.eventId = 411,
.eventEra = 4,
.eventName = "Correction",
.eventDialogue =
"The prehistoric cave disappears. "
"The medieval valley stabilizes. "
"The station near the black hole fades into proper history. "
"The fractures close one after another.",
.eventChoices = {
"[A] Continue."
},
.choiceSceneId = {412},
.choiceStabilityCost = {0},
.RequirementSceneId = {0},
.RequirementSceneChoice = {0}
};

eventParadox d12 = {
.eventId = 412,
.eventEra = 4,
.eventName = "Fading",
.eventDialogue =
"You cannot feel your hands anymore. "
"You cannot remember your face. "
"The timelines no longer need an anchor.",
.eventChoices = {
"[A] Continue."
},
.choiceSceneId = {413},
.choiceStabilityCost = {0},
.RequirementSceneId = {0},
.RequirementSceneChoice = {0}
};

eventParadox d13 = {
.eventId = 413,
.eventEra = 4,
.eventName = "Final Signal",
.eventDialogue =
"Point Singularity flickers one last time. "
"'Paradox resolved.' "
"'Timeline integrity restored.' "
"'Goodbye, Operator.'",
.eventChoices = {
"[A] ..."
},
.choiceSceneId = {414},
.choiceStabilityCost = {0},
.RequirementSceneId = {0},
.RequirementSceneChoice = {0}
};

eventParadox d14 = {
.eventId = 414,
.eventEra = 4,
.eventName = "Silence",
.eventDialogue =
"There is no White Room anymore. "
"There is no fracture. "
"There is no mission. "
"There is only silence.",
.eventChoices = {
"[A] End."
},
.choiceSceneId = {415},
.choiceStabilityCost = {0},
.RequirementSceneId = {0},
.RequirementSceneChoice = {0}
};

eventParadox d15 = {
.eventId = 415,
.eventEra = 4,
.eventName = "Project Paradox",
.eventDialogue =
"History continues without interruption. "
"No one remembers the fractures. "
"No one remembers the Operator. "
"But somewhere beyond time, one final system message remains: "
"'PROJECT PARADOX: RESOLVED.'",
.eventChoices = {
"[A] Exit Game."
},
.choiceSceneId = {0},
.choiceStabilityCost = {0},
.RequirementSceneId = {0},
.RequirementSceneChoice = {0}
};



std::vector<eventParadox> era4Events = {d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15};