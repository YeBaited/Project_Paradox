#pragma once

#include <iostream>
#include <vector>
#include "lib.hpp"

eventParadox b0 = {
  .eventId = 201,
  .eventEra = 2,
  .eventName = "The Drop",
  .eventDialogue =
  "You hit the forest floor hard. "
  "The air is freezing, wet, and wrong. "
  "Ozone burns your throat as pale fog crawls between the trees. "
  "Far off, you see a valley settlement lit by firelight, and beyond it, a mountain wrapped in storm.",
  .eventChoices = {
  "[A] Move toward the settlement lights.",
  "[B] Stay hidden and study the forest."
  },
  .choiceSceneId = {202, 202},
  .choiceStabilityCost = {0, -5},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox b1 = {
.eventId = 202,
.eventEra = 2,
.eventName = "The Frozen Forest",
.eventDialogue =
"The ground around you trembles in tiny loops. "
"A sapling grows to full height, withers, and returns to seed in the span of a breath. "
"Between the trees, you catch the sound of iron boots, distant chanting, and a low mechanical hum from the mountain.",
.eventChoices = {
"[A] Follow the mechanical hum.",
"[C] Go with the flow",
"[B] Track the iron boots.",
},
.choiceSceneId = {204, 205, 206},
.choiceStabilityCost = {-5, 0, 0},
.RequirementSceneId = {0, 0, 0},
.RequirementSceneChoice = {0, 0, 0}
};
eventParadox b2 = {
  .eventId = 204,
  .eventEra = 2,
  .eventName = "Commander Marx",
  .eventDialogue =
  "You are stopped at a barricade of sharpened wood and pitted steel. "
  "Commander Marx studies you with a soldier's suspicion. "
  "'Quarantine first,' he says. 'Questions later. If you are contaminated, you do not enter the valley.'",
  .eventChoices = {
  "[A] Submit to quarantine and earn access.",
  "[B] Challenge his authority with your knowledge."
  },
  .choiceSceneId = {207, 208},
  .choiceStabilityCost = {-5, 10},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox b3 = {
  .eventId = 205,
  .eventEra = 2,
  .eventName = "Inquisitor Joshua",
  .eventDialogue =
  "You are dragged into a firelit circle where Inquisitor Joshua raises a cross of charred wood. "
  "The crowd is restless, armed with farm tools, knives, and fear. "
  "'The valley is cursed,' he cries. 'The forest will be purified. The scholars will burn with it.'",
  .eventChoices = {
  "[A] Speak calmly and claim you witnessed the anomaly.",
  "[B] Turn the crowd against the scholars."
  },
  .choiceSceneId = {211, 212},
  .choiceStabilityCost = {-5, 10},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox b4 = {
  .eventId = 206,
  .eventEra = 2,
  .eventName = "Inquisitor Joshua",
  .eventDialogue =
  "You are dragged into a firelit circle where Inquisitor Joshua raises a cross of charred wood. "
  "The crowd is restless, armed with farm tools, knives, and fear. "
  "'The valley is cursed,' he cries. 'The forest will be purified. The scholars will burn with it.'",
  .eventChoices = {
  "[A] Speak calmly and claim you witnessed the anomaly.",
  "[B] Turn the crowd against the scholars."
  },
  .choiceSceneId = {211, 212},
  .choiceStabilityCost = {-5, 10},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox b5= {
.eventId = 211,
.eventEra = 2,
.eventName = "A Calm Witness",
.eventDialogue =
"Joshua listens, narrowing his eyes as you describe the forest loops and the crater glow. "
"The crowd quiets. For one brief moment, fear turns into attention. "
"He does not trust you, but he wants the story to spread before dawn.",
.eventChoices = {
"[A] Offer proof to delay the purge.",
"[B] Push him to march on the crater now."
},
.choiceSceneId = {215, 218},
.choiceStabilityCost = {-10, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b6 = {
.eventId = 208,
.eventEra = 2,
.eventName = "Marx's Warning",
.eventDialogue =
"Commander Marx corners you in a supply tent. "
"He does not believe your story, but he believes the evidence of the valley: crop rot, animal panic, and vanished sentries. "
"'If you know more than you're saying,' he growls, 'then prove useful.'",
.eventChoices = {
"[A] Accept his command structure.",
"[B] Reveal the truth about the fracture."
},
.choiceSceneId = {213, 215},
.choiceStabilityCost = {-5, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b7 = {
.eventId = 207,
.eventEra = 2,
.eventName = "The Quarantine Ledger",
.eventDialogue =
"Marx's soldiers mark your wrists with ash and thread. "
"They catalog every wound, every bruise, every strange mark on your skin. "
"One of them mutters that the mountain has been 'breathing' again, and that the valley's sickness moves faster near the crater.",
.eventChoices = {
"[A] Help the patrol and gain their trust.",
"[B] Steal a gate pass from the armor rack."
},
.choiceSceneId = {213, 214},
.choiceStabilityCost = {-5, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b8 = {
.eventId = 214,
.eventEra = 2,
.eventName = "The Forest Loop",
.eventDialogue =
"The path repeats itself. "
"You pass the same fallen log three times. "
"A frozen deer in the brush twitches, decays, and returns to life in a single blink. "
"The fracture is warping distance, time, and direction into one another.",
.eventChoices = {
"[A] Use the garrison routes to push forward.",
"[B] Follow the scholar markings through the stone."
},
.choiceSceneId = {219, 221},
.choiceStabilityCost = {-5, -10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b9 = {
.eventId = 213,
.eventEra = 2,
.eventName = "The Hidden Paths",
.eventDialogue =
"You find a forgotten drainage cut beneath the valley wall. "
"Inside, the stone is wet and slick with frost. "
"Etched into the walls are repeated spiral marks that resemble the symbols from the White Room.",
.eventChoices = {
"[A] Follow the old passage under the settlement.",
"[B] Climb back out and cross the exposed slope."
},
.choiceSceneId = {219, 220},
.choiceStabilityCost = {-5, 5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b10 = {
.eventId = 215,
.eventEra = 2,
.eventName = "The Ice Gorge",
.eventDialogue =
"You cross a ravine where the wind howls through blue stone like a machine trying to breathe. "
"Below, the fracture pulses through the ice. "
"Every pulse leaves behind a brief, luminous echo of a future city.",
.eventChoices = {
"[A] Stay on the exposed ridge and climb faster.",
"[B] Move carefully through the narrow tunnel."
},
.choiceSceneId = {220, 221},
.choiceStabilityCost = {5, -5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b11 = {
.eventId = 212,
.eventEra = 2,
.eventName = "The Purge Chant",
.eventDialogue =
"You speak one sentence too many, and the mob surges. "
"Torches rise. Someone screams that the forest is already alive. "
"The crowd begins marching uphill in a burning wave, dragging you with them.",
.eventChoices = {
"[A] Use the chaos to move ahead of them.",
"[B] Slip away while the mob is distracted."
},
.choiceSceneId = {217, 218},
.choiceStabilityCost = {10, -5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b12 = {
.eventId = 217,
.eventEra = 2,
.eventName = "The Widening Fracture",
.eventDialogue =
"The valley behind you is now split by flashes of white light. "
"Birds fall out of the sky and then rise again a heartbeat later, flying backward. "
"You can feel the summit calling like a wound that wants to be closed.",
.eventChoices = {
"[A] Commit to the climb and ignore the danger.",
"[B] Pause and stabilize your footing before moving."
},
.choiceSceneId = {222, 223},
.choiceStabilityCost = {10, -5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b13 = {
.eventId = 218,
.eventEra = 2,
.eventName = "The Ash March",
.eventDialogue =
"A mixed column forms beneath the storm: soldiers, scholars, and frightened villagers all moving toward the mountain. "
"The fracture has forced the factions into a temporary truce. "
"Every step forward seems to cost the valley another sliver of time.",
.eventChoices = {
"[A] Guide the march through the safest route.",
"[B] Break away and reach the summit first."
},
.choiceSceneId = {222, 224},
.choiceStabilityCost = {-10, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b14 = {
.eventId = 220,
.eventEra = 2,
.eventName = "The Scholar Archive Tent",
.eventDialogue =
"Renz has turned a collapsed sheepfold into a temporary archive. "
"Scrolls, broken lenses, and plates of machine metal cover every surface. "
"He believes the mountain is speaking in layers of symbol, and he wants you to hear the grammar of the fracture.",
.eventChoices = {
"[A] Help decode the symbols.",
"[B] Take a field guide and leave quietly."
},
.choiceSceneId = {225, 226},
.choiceStabilityCost = {-10, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b15 = {
.eventId = 219,
.eventEra = 2,
.eventName = "The Garrison Forward Camp",
.eventDialogue =
"Marx establishes a forward camp in a half-frozen quarry. "
"His soldiers are building signal posts from salvaged beams and black iron. "
"He calls the mountain a tactical wound and insists it can still be contained.",
.eventChoices = {
"[A] Ask for armed escort to the crater.",
"[B] Suggest a quieter route through the ruins."
},
.choiceSceneId = {224, 225},
.choiceStabilityCost = {-5, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b16 = {
.eventId = 221,
.eventEra = 2,
.eventName = "The Zealot Bonfire",
.eventDialogue =
"Joshua's followers have stacked every superstition into a single fire. "
"They chant that the valley's hunger must be fed before dawn or the mountain will open. "
"The heat is immense. The fear is worse.",
.eventChoices = {
"[A] Blend into the crowd and listen for weakness.",
"[B] Stoke the zealots into marching sooner."
},
.choiceSceneId = {226, 227},
.choiceStabilityCost = {0, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b17 = {
.eventId = 226,
.eventEra = 2,
.eventName = "The Ash Road Ambush",
.eventDialogue =
"Joshua's zealots ambush the road with pitch torches and spears. "
"They believe the mountain path is a test and the scholars are a lie. "
"In the confusion, you spot a safer route through the old stonework below.",
.eventChoices = {
"[A] Use the ambush as cover and slip away.",
"[B] Incite a false target and redirect the mob."
},
.choiceSceneId = {230, 231},
.choiceStabilityCost = {-5, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b18 = {
.eventId = 224,
.eventEra = 2,
.eventName = "The Lower Pass",
.eventDialogue =
"The route narrows between black cliffs. "
"Someone has marked the path with ash, chalk, and scraps of cloth to prevent the looped terrain from stealing travelers. "
"The mountain above you glows faintly, like a machine under strain.",
.eventChoices = {
"[A] Take the marked path upward.",
"[B] Cut across the scree and move faster."
},
.choiceSceneId = {229, 230},
.choiceStabilityCost = {-5, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b19 = {
.eventId = 225,
.eventEra = 2,
.eventName = "The Copper Index",
.eventDialogue =
"Renz reveals a metal index tablet copied from the wreckage. "
"It contains alignment markers, calibration lines, and a symbol that matches the White Room's central sphere. "
"The shard is not holy. It is an interface key.",
.eventChoices = {
"[A] Use the index to track the core.",
"[B] Share the truth with the garrison."
},
.choiceSceneId = {229, 231},
.choiceStabilityCost = {-10, 5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b20 = {
.eventId = 226,
.eventEra = 2,
.eventName = "The Ash Road Ambush",
.eventDialogue =
"Joshua's zealots ambush the road with pitch torches and spears. "
"They believe the mountain path is a test and the scholars are a lie. "
"In the confusion, you spot a safer route through the old stonework below.",
.eventChoices = {
"[A] Use the ambush as cover and slip away.",
"[B] Incite a false target and redirect the mob."
},
.choiceSceneId = {230, 231},
.choiceStabilityCost = {-5, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b21 = {
.eventId = 222,
.eventEra = 2,
.eventName = "The Broken Watchtower",
.eventDialogue =
"You reach a shattered watchtower where the stone has been split cleanly by a vertical scar of light. "
"From above, the crater can almost be seen. "
"From below, the valley seems to bend away from the tower, as if the structure is floating in a wrong century.",
.eventChoices = {
"[A] Climb the outer stones to gain height.",
"[B] Search the interior for a hidden route."
},
.choiceSceneId = {227, 228},
.choiceStabilityCost = {-5, 5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b22 = {
.eventId = 223,
.eventEra = 2,
.eventName = "The Hollow Bell",
.eventDialogue =
"A chapel bell hangs in a ruined belfry, ringing with no wind and no hand. "
"Each toll produces a brief flash of future architecture in the snow. "
"You realize the valley is accumulating echoes from eras that have not yet happened.",
.eventChoices = {
"[A] Follow the ringing toward the summit.",
"[B] Smash the bell and stop the echo."
},
.choiceSceneId = {227, 228},
.choiceStabilityCost = {-10, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b23 = {
.eventId = 227,
.eventEra = 2,
.eventName = "The Wolf Line",
.eventDialogue =
"You find a line of frozen wolf tracks leading directly toward the mountain. "
"Half of them vanish, then reappear three paces away. "
"The animals are not lost. They are being edited by the fracture.",
.eventChoices = {
"[A] Follow the animals' path.",
"[B] Reject the loop and force your own route."
},
.choiceSceneId = {232, 233},
.choiceStabilityCost = {0, -5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b24 = {
.eventId = 228,
.eventEra = 2,
.eventName = "The Flooded Tunnel",
.eventDialogue =
"A narrow tunnel under the ridge is flooded with black meltwater. "
"Bubbles rise from below, each one carrying a flicker of the future. "
"The passage is dangerous, but it is also stable enough to move through without triggering the loops above.",
.eventChoices = {
"[A] Push through the water.",
"[B] Return to the open slope and risk the weather."
},
.choiceSceneId = {232, 233},
.choiceStabilityCost = {-5, 5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b25 = {
.eventId = 231,
.eventEra = 2,
.eventName = "The Oracle Stone",
.eventDialogue =
"A slab of white stone at the summit begins projecting impossible images into the snow. "
"You see the White Room, the future facility, and the valley all layered together. "
"The fracture is not just in the mountain. It is in the sequence of history itself.",
.eventChoices = {
"[A] Use the stone as a guide.",
"[B] Destroy it before the vision spreads."
},
.choiceSceneId = {234, 235},
.choiceStabilityCost = {-5, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b26 = {
.eventId = 229,
.eventEra = 2,
.eventName = "The Summit Approach",
.eventDialogue =
"The higher you climb, the more the valley stops looking medieval and starts looking temporary. "
"Frost turns to white static. "
"The air tastes like metal and burned lightning. "
"You are close enough now to hear the machine trying to wake itself.",
.eventChoices = {
"[A] Rush the final ascent.",
"[B] Search for a stable access point."
},
.choiceSceneId = {234, 235},
.choiceStabilityCost = {0, -5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b27 = {
.eventId = 230,
.eventEra = 2,
.eventName = "Night at the Crater",
.eventDialogue =
"You camp near the crater rim under a sky split by aurora-like fractures. "
"Every few seconds, the core below emits a dull pulse that changes the shape of the shadows. "
"The valley below has gone silent. Everyone is waiting for the same impossible answer.",
.eventChoices = {
"[A] Observe the pulses and calculate the pattern.",
"[B] Wake the others and begin the final push."
},
.choiceSceneId = {234, 235},
.choiceStabilityCost = {-10, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b28 = {
.eventId = 235,
.eventEra = 2,
.eventName = "The Terminal Spine",
.eventDialogue =
"You jam your hands into the access port and feel the machine recognize you. "
"Symbols cascade across the interface exactly like the White Room. "
"The fracture is not just near the core. The core is the fracture.",
.eventChoices = {
"[A] Plug in and stabilize the system.",
"[B] Pull the emergency lever and force a shutdown."
},
.choiceSceneId = {238, 239},
.choiceStabilityCost = {-5, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b29 = {
.eventId = 234,
.eventEra = 2,
.eventName = "The Dragon Revealed",
.eventDialogue =
"At the heart of the wreck, a terminal column rises from the chassis like a spine. "
"The machine is not attacking the valley. "
"It is trying to reboot itself in the wrong century, and every failed restart tears another thread in history.",
.eventChoices = {
"[A] Override the core manually.",
"[B] Trigger the emergency reboot sequence."
},
.choiceSceneId = {238, 239},
.choiceStabilityCost = {-10, 10},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b30 = {
.eventId = 233,
.eventEra = 2,
.eventName = "The Fracture Pulse",
.eventDialogue =
"A wave of white light rolls through the mountain, freezing everyone in place. "
"When it passes, half a second has been stolen from each heartbeat. "
"The fracture is accelerating. The summit cannot wait.",
.eventChoices = {
"[A] Sprint through the pulse window.",
"[B] Stabilize your footing and slow the temporal damage."
},
.choiceSceneId = {236, 237},
.choiceStabilityCost = {10, -5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b31 = {
.eventId = 232,
.eventEra = 2,
.eventName = "The Engine Choir",
.eventDialogue =
"Near the crater, you hear voices layered with machine noise. "
"It is not sound from people. It is the dreadnought core cycling through failed system states and corrupted command phrases. "
"The engine is singing its own collapse into existence.",
.eventChoices = {
"[A] Record the sequence for the terminal.",
"[B] Interrupt the pattern and force silence."
},
.choiceSceneId = {236, 237},
.choiceStabilityCost = {-10, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b32 = {
.eventId = 236,
.eventEra = 2,
.eventName = "Manual Core Dump",
.eventDialogue =
"You execute the override. "
"The core drops its stored failure state into the void, and the entire engine shudders as if it just remembered how to die correctly. "
"Outside, the medieval witnesses see a collapsing star where the dragon used to be.",
.eventChoices = {
"[A] Seal the fracture completely.",
"[B] Hold the line while the vacuum blast builds."
},
.choiceSceneId = {240, 240},
.choiceStabilityCost = {-15, -5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b33 = {
.eventId = 237,
.eventEra = 2,
.eventName = "Fault Cascade",
.eventDialogue =
"The shutdown fails halfway through, then succeeds in a different way. "
"Alarms tear through the mountain. "
"The engine buckles, the crater folds inward, and the valley shouts as one voice while time itself tries to escape.",
.eventChoices = {
"[A] Attempt a desperate correction.",
"[B] Brace for temporal ejection."
},
.choiceSceneId = {240, 240},
.choiceStabilityCost = {10, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b34 = {
.eventId = 238,
.eventEra = 2,
.eventName = "Collapsing Star",
.eventDialogue =
"The core begins folding inward around the terminal command. "
"Black metal peels away in layers, revealing a blinding center of controlled light. "
"The medieval valley below preserves the event as an impossible celestial collapse.",
.eventChoices = {
"[A] Keep the command locked until the seal closes.",
"[B] Release the surge and trust the timeline."
},
.choiceSceneId = {240, 240},
.choiceStabilityCost = {-10, 5},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b35 = {
.eventId = 239,
.eventEra = 2,
.eventName = "Vacuum Launch",
.eventDialogue =
"A vacuum blast tears through the summit, ripping snow, stone, and static from the crater rim. "
"You are thrown clear of the core as the wreck implodes behind you. "
"The valley shrinks below like a memory being forced into storage.",
.eventChoices = {
"[A] Let the surge carry you forward.",
"[B] Fight to hold on to the final stabilizing thread."
},
.choiceSceneId = {240, 240},
.choiceStabilityCost = {-5, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b36 = {
.eventId = 240,
.eventEra = 2,
.eventName = "Starfall Ascent",
.eventDialogue =
"You are hurled through the white blaze of the fracture. "
"Below, the mountain, the valley, and the three factions collapse into a single point of preserved history. "
"The terminal clears one final line: 'TRANSFER COMPLETE.' "
"The future tears open ahead of you.",
.eventChoices = {
"[A] Surrender to the temporal surge.",
"[B] Prepare for Era 3."
},
.choiceSceneId = {241, 241},
.choiceStabilityCost = {0, 0},
.RequirementSceneId = {0, 0},
.RequirementSceneChoice = {0, 0}
};

eventParadox b37 = {
.eventId = 241,
.eventEra = 2,
.eventName = "Temporal Vacuum",
.eventDialogue =
"The mountain disappears beneath you. "
"The collapsing star consumes the summit and the valley below shrinks into a single point of light. "
"You are no longer falling through air. "
"You are falling through history itself. "
"Fragments of different eras surround you.",
.eventChoices = {
"[A] Reach toward the lights.",
"[B] Close your eyes."
},
.choiceSceneId = {242,242},
.choiceStabilityCost = {0,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox b38 = {
.eventId = 242,
.eventEra = 2,
.eventName = "The Corridor",
.eventDialogue =
"For a brief moment, you return to the White Room. "
"The floating symbols from the beginning surround you again. "
"Point Singularity appears only as broken lines of blue code. "
"'Operator. Fracture containment incomplete.' "
"'Final anchor point located.' "
"'Preparing emergency insertion.'",
.eventChoices = {
"[A] Ask where you are going.",
"[B] Remain silent."
},
.choiceSceneId = {243,243},
.choiceStabilityCost = {-5,0},
.RequirementSceneId = {0,0},
.RequirementSceneChoice = {0,0}
};

eventParadox b39 = {
  .eventId = 243,
  .eventEra = 2,
  .eventName = "Crossed Signals",
  .eventDialogue =
  "The symbols around you begin changing shape. "
  "You see prehistoric caves. "
  "You see the valley. "
  "You see giant structures floating in space. "
  "All three eras overlap for a moment. "
  "The fracture was never separate events. "
  "It was one wound spreading through time.",
  .eventChoices = {
  "[A] Focus on the future images.",
  "[B] Focus on Point Singularity."
  },
  .choiceSceneId = {244,244},
  .choiceStabilityCost = {-10,-5},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox b40 = {
  .eventId = 244,
  .eventEra = 2,
  .eventName = "Insertion Failure",
  .eventDialogue =
  "WARNING messages flood your vision. "
  "'Destination instability detected.' "
  "'Anchor collapse imminent.' "
  "Point Singularity's voice becomes distorted. "
  "'Operator—this location created the fractures—' "
  "'You must survive long enough to reach the source—'",
  .eventChoices = {
  "[A] Hold onto consciousness.",
  "[B] Let the transfer happen."
  },
  .choiceSceneId = {245,245},
  .choiceStabilityCost = {0,0},
  .RequirementSceneId = {0,0},
  .RequirementSceneChoice = {0,0}
};

eventParadox b41 = {
  .eventId = 245,
  .eventEra = 2,
  .eventName = "Arrival",
  .eventDialogue =
  "Cold glass presses against your back. "
  "You cannot move. "
  "Red warning lights flash through your closed eyes. "
  "You hear metal groaning somewhere far away. "
  "Then a mechanical voice speaks: "
  "'Cryostasis interrupted.' "
  "'Black hole proximity critical.'",
  .eventChoices = {
  "[A] Open your eyes."
  },
  .choiceSceneId = {301},
  .choiceStabilityCost = {0},
  .RequirementSceneId = {0},
  .RequirementSceneChoice = {0}
};


std::vector<eventParadox> era2Events = {b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b18, b19, b20, b21, b22, b23, b24, b25, b26, b27, b28, b29, b30, b31, b32, b33, b34, b35, b36, b37, b38, b39, b40, b41};