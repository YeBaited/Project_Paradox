#pragma once

#include <iostream>
#include <vector>
#include "lib.hpp"

eventParadox c1 = {
  .eventId = 301,
  .eventEra = 3,
  .eventName = "Waking Up",
  .eventDialogue = 
      "You open your eyes. The glass lid of your sleep pod slides open. "
      "The air is cold and smells like metal. "
      "The computer screen in front of you is flashing red. "
      "It says you are near a black hole, and a small space station is floating right outside. "
      "Then your neural link buzzes. A message from Point Singularity: "
      "\"Operator. A timeline fracture has been detected at this location. Investigate.\"",
  .eventChoices = {"[A] Check the ship's computer for more data.", "[B] Put on your spacesuit and go to the station."},
  .choiceSceneId = {302, 303},
  .choiceStabilityCost = {0, 0},
  .RequirementSceneId = {0, 0},
  .RequirementSceneChoice = {0, 0}
};

eventParadox c2 = {
    .eventId = 303,
    .eventEra = 3,
    .eventName = "The Open Bay",
    .eventDialogue = 
        "You float inside the station's landing bay. It is huge, dark, and empty. "
        "Hundreds of small silver robots float in the air, completely still. "
        "They look like they are waiting for a signal. "
        "Point Singularity: 'I am reading strange energy from these units. "
        "They may have been affected by the timeline fracture. Watch yourself.'",
    .eventChoices = {"[A] Ignore the robots and walk deeper into the station.", "[B] Try to turn one of the robots on."},
    .choiceSceneId = {306, 311},
    .choiceStabilityCost = {0, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c3 = {
    .eventId = 302,
    .eventEra = 3,
    .eventName = "The Warning",
    .eventDialogue = 
        "The computer shows a map of the station. A red light blinks on the lowest deck. "
        "The crew left a message: 'The gravity is pulling us in. The engines are dead. Do not come aboard.' "
        "The message cuts off. "
        "A timer shows you don't have much time before the station breaks apart. "
        "Point Singularity sends another alert: 'Stability dropping. The fracture is growing. Move fast.'",
    .eventChoices = {"[A] Go anyway. There might be survivors.", "[B] Stay on the ship and scan the station from here."},
    .choiceSceneId = {304, 305},
    .choiceStabilityCost = {-10, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c4 = { 
    .eventId = 304,
    .eventEra = 3,
    .eventName = "Into the Dark",
    .eventDialogue = 
        "You board the station. The walls groan as the black hole pulls on them. "
        "Doors are closing by themselves to keep the air inside. "
        "You slide under a heavy blast door just before it slams shut. "
        "You are now in the main control room. "
        "Your neural link flickers. Point Singularity's voice cuts in and out: "
        "\"The fracture is... inside the station. Find... the source.\"",
    .eventChoices = {"[A] Look for the crew's flight logs.", "[B] Try to fix the station's main power."},
    .choiceSceneId = {306, 307},
    .choiceStabilityCost = {0, -10},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c5 = {
    .eventId = 305,
    .eventEra = 3,
    .eventName = "The Ghost Signal",
    .eventDialogue = 
        "Your ship scans deep inside the station. No heartbeats found. "
        "But then your radio turns on by itself. "
        "A strange broken voice comes through: 'We are still here. We are inside the machine.' "
        "Point Singularity responds through your neural link: "
        "\"That signal is not normal. It is coming from inside a timeline crack. Answer it.\"",
    .eventChoices = {"[A] Answer the radio.", "[B] Ignore it and fly over to the station."},
    .choiceSceneId = {308, 304},
    .choiceStabilityCost = {-5, -10},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c6 = {
    .eventId = 306,
    .eventEra = 3,
    .eventName = "The Trap",
    .eventDialogue = 
        "You walk down a long hallway. The robots suddenly wake up. Their eyes turn red. "
        "They start circling you. One of them drops a small memory drive on the floor. "
        "Point Singularity: 'That drive is giving off timeline energy. "
        "It may have data connected to the fracture source.'",
    .eventChoices = {"[A] Pick up the memory drive.", "[B] Kick it away and run."},
    .choiceSceneId = {312, 313},
    .choiceStabilityCost = {-5, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c7 = {
    .eventId = 313,
    .eventEra = 3,
    .eventName = "Alarm",
    .eventDialogue = 
        "The drive hits the floor and explodes with a bright flash. "
        "A loud alarm goes off all over the station. The robots rush toward you. "
        "Point Singularity: 'Stability dropping fast. The alarm is making the fracture worse. Move!'",
    .eventChoices = {"[A] Run down the nearest maintenance hatch!", "[B] Freeze and raise your hands."},
    .choiceSceneId = {315, 316},
    .choiceStabilityCost = {-10, -15},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c8 = {
    .eventId = 316,
    .eventEra = 3,
    .eventName = "Captured",
    .eventDialogue = 
        "The robots grab your arms. A flat voice says: 'Intruder found. Preparing for disposal.' "
        "They lock you in a small steel room. The air starts leaving. "
        "Point Singularity: 'Operator, I cannot hold the timeline stable much longer. You need to get out. Now.'",
    .eventChoices = {"[A] Use your suit's laser to cut the door lock.", "[B] Wait and look for another way out."},
    .choiceSceneId = {317, 318},
    .choiceStabilityCost = {-20, -10},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c9 = {
    .eventId = 318,
    .eventEra = 3,
    .eventName = "The Secret Panel",
    .eventDialogue = 
        "You find a loose metal panel on the wall. You pull it open. "
        "There is a hidden crawlspace inside. "
        "A heavy tool from the old crew is sitting there. "
        "Point Singularity: 'That tool was used to build the fracture stabilizer in Sublevel 7. Take it.'",
    .eventChoices = {"[A] Take the tool and crawl through.", "[B] Leave it behind."},
    .choiceSceneId = {319, 319},
    .choiceStabilityCost = {0, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c10 = {
    .eventId = 307,
    .eventEra = 3,
    .eventName = "Access Denied",
    .eventDialogue = 
        "You find a computer terminal but it needs a captain's keycard. "
        "A maintenance drone spots you and starts coming your way. "
        "Point Singularity: 'No time for terminals. Find another way in.'",
    .eventChoices = {"[A] Try to hack it quickly.", "[B] Run before the drone gets close."},
    .choiceSceneId = {311, 313},
    .choiceStabilityCost = {-10, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c12 = {
    .eventId = 308,
    .eventEra = 3,
    .eventName = "The AI Crew",
    .eventDialogue = 
        "The voice speaks again. It is not a person. It is the station's computer. "
        "The crew saved their minds inside it before their bodies died. "
        "But Point Singularity warns you: "
        "\"Operator. When the timeline cracked, these minds got stuck between layers. "
        "They are not fully in this time anymore. Be careful.\" "
        "The AI offers to copy all their knowledge into your suit.",
    .eventChoices = {"[A] Accept the data.", "[B] Refuse. It feels too risky."},
    .choiceSceneId = {309, 310},
    .choiceStabilityCost = {-10, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c13 = {
    .eventId = 310,
    .eventEra = 3,
    .eventName = "Left Alone",
    .eventDialogue = 
        "The AI goes quiet. The station lights turn off. "
        "You are alone in the dark. Then you hear a clicking sound outside your ship. "
        "Something is moving on the hull. "
        "Point Singularity: 'The fracture is pulling loose objects toward it. "
        "Do not stay out here. Put on your suit and get inside the station now.'",
    .eventChoices = {"[A] Put on your suit and board the station.", "[B] Force entry via the airlock."},
    .choiceSceneId = {303, 303},
    .choiceStabilityCost = {-10, -10},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c14 = {
    .eventId = 312,
    .eventEra = 3,
    .eventName = "The Message",
    .eventDialogue = 
        "You plug the drive into your suit. A video plays. "
        "A scientist says: 'The black hole is not just a black hole. "
        "It is a crack in the timeline. Go to Sublevel 7. We built something there that can fix it.' "
        "Point Singularity: 'This confirms it. Sublevel 7 is the fracture point. Go.'",
    .eventChoices = {"[A] Go down to Sublevel 7.", "[B] Forget the message and look for another way down."},
    .choiceSceneId = {314, 315},
    .choiceStabilityCost = {-5, -10},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c15 = {
    .eventId = 315,
    .eventEra = 3,
    .eventName = "The Escape Hatch",
    .eventDialogue = 
        "You jump into a dark pipe and slide down fast. "
        "Two drones follow you, firing lasers that burn through the walls. "
        "You fall through a vent and land hard on a lower deck. "
        "Point Singularity: 'You are getting closer to the fracture. Keep going down.'",
    .eventChoices = {"[A] Keep moving down.", "[B] Take a breather."},
    .choiceSceneId = {314, 314}, // Maps both to Sublevel 7 layout
    .choiceStabilityCost = {-5, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c18 = {
    .eventId = 317,
    .eventEra = 3,
    .eventName = "Breaking Free",
    .eventDialogue = 
        "Your laser sparks and breaks the door lock. The door opens. "
        "The robots outside freeze up, confused. "
        "Point Singularity: 'Good. The fracture energy is messing with their systems. Use that. Go.'",
    .eventChoices = {"[A] Run past them down the stairs.", "[B] Slip away quietly."},
    .choiceSceneId = {314, 314},
    .choiceStabilityCost = {-5, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c19 = {
    .eventId = 319,
    .eventEra = 3,
    .eventName = "The Shortcut",
    .eventDialogue = 
        "You crawl through the hot pipes. The tool helps you break open a grate at the end. "
        "You drop down and land in Sublevel 7. "
        "Point Singularity: 'You made it. The fracture is right below you. I can feel it from here.'",
    .eventChoices = {"[A] Step into the room.", "[B] Survey the perimeter first."},
    .choiceSceneId = {314, 314},
    .choiceStabilityCost = {0, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c20 = {
    .eventId = 311,
    .eventEra = 3,
    .eventName = "The Helper",
    .eventDialogue = 
        "The drone stops. Instead of attacking, it shows a hologram of a crew member. "
        "The hologram points down a dark staircase and says: 'Safe zone this way. Hurry.' "
        "Point Singularity: 'That hologram is being powered by the fracture itself. "
        "The crew is using the crack in the timeline to reach you. Follow it.'",
    .eventChoices = {"[A] Follow the hologram.", "[B] Don't trust it. Go the other way."},
    .choiceSceneId = {314, 313},
    .choiceStabilityCost = {-5, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c21 = {
    .eventId = 309,
    .eventEra = 3,
    .eventName = "Saved Minds",
    .eventDialogue = 
        "The data moves into your suit. Maps, star charts, and science notes fill your screen. "
        "You now know exactly where the engine core is. But the data also shows something else—"
        "a hidden lab on Sublevel 7, built right on top of the fracture. "
        "Point Singularity: 'The data includes timeline coordinates. "
        "Go to Sublevel 7 first. The crew there will explain what you are walking into.'",
    .eventChoices = {"[A] Head to Sublevel 7.", "[B] Proceed with caution."},
    .choiceSceneId = {314, 314},
    .choiceStabilityCost = {0, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c22 = {
    .eventId = 314,
    .eventEra = 3,
    .eventName = "Sublevel 7",
    .eventDialogue = 
        "You find the old lab. Dust everywhere, wires hanging loose. "
        "In the middle of the room, three holograms of the lost crew members appear. "
        "They look up at you. "
        "Point Singularity: 'Operator. These are the people who first discovered the fracture. "
        "They have been trapped here since the timeline broke. Listen to them.'",
    .eventChoices = {"[A] Ask them what happened here.", "[B] Listen to their recorded message first."},
    .choiceSceneId = {321, 322},
    .choiceStabilityCost = {-10, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c23 = {
    .eventId = 322,
    .eventEra = 3,
    .eventName = "Listening In",
    .eventDialogue = 
        "You listen to the recording. The crew talks about a machine called the Gravity Core. "
        "They say it was built to seal the timeline fracture from the inside. "
        "But it needs a real person to pull the lever because the station AI got broken by the crack. "
        "Point Singularity: 'That machine is what I sent you here for. Go to the core.'",
    .eventChoices = {"[A] Head to the core room.", "[B] Move out."},
    .choiceSceneId = {320, 320},
    .choiceStabilityCost = {0, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c24 = {
    .eventId = 321,
    .eventEra = 3,
    .eventName = "The Secret Mission",
    .eventDialogue = 
        "The crew tells you the truth. "
        "\"We found that the black hole is actually a timeline fracture, a crack in the simulation. "
        "We built a Gravity Core to close it and stop it from getting bigger. "
        "But the core broke before we could finish. "
        "The whole timeline is at risk. "
        "You have to activate the Gravity Shield or everything here gets erased.\"",
    .eventChoices = {"[A] Ask where the core is.", "[B] Ask why they cannot do it themselves."},
    .choiceSceneId = {320, 323},
    .choiceStabilityCost = {0, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c25 = {
    .eventId = 320,
    .eventEra = 3,
    .eventName = "The Gravity Core",
    .eventDialogue = 
        "You walk into a giant room. In the center is a huge ball of spinning blue energy. "
        "It looks like a tiny star. This is the Gravity Core, the machine built to seal the fracture. "
        "Point Singularity: 'I can see the crack from here. It runs straight through the core. "
        "You have two options. Choose carefully.'",
    .eventChoices = {"[A] Panel Alpha: Turn on the Gravity Shield to close the fracture.", "[B] Panel Omega: Destroy the station to stop the fracture."},
    .choiceSceneId = {330, 331},
    .choiceStabilityCost = {-10, -30},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c28 = {
    .eventId = 330,
    .eventEra = 3,
    .eventName = "Turning on the Shield",
    .eventDialogue = 
        "You grab the lever. The gravity from the fracture makes your arms feel very heavy. "
        "You push hard and slowly move the lever up. The blue light flashes like crazy. "
        "Point Singularity: 'I can see the fracture starting to close. Keep going. Do not let go.'",
    .eventChoices = {"[A] Keep pushing with everything you have.", "[B] Let go. It is breaking your suit."},
    .choiceSceneId = {332, 333},
    .choiceStabilityCost = {-10, -20},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c30 = {
    .eventId = 331,
    .eventEra = 3,
    .eventName = "The Self-Destruct",
    .eventDialogue = 
        "You choose to destroy the station. "
        "The computer voice counts down: 'Self-destruct in 30 seconds. All data will be erased.' "
        "Point Singularity: 'If the station is gone, the fracture loses its anchor point. "
        "The timeline will hold. But everything the crew built will be lost forever.'",
    .eventChoices = {"[A] Confirm the command.", "[B] Cancel and try the shield instead."},
    .choiceSceneId = {335, 330},
    .choiceStabilityCost = {-30, -5},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c31 = {
    .eventId = 323,
    .eventEra = 3,
    .eventName = "A Human Touch",
    .eventDialogue = 
        "\"We are only holograms now,\" the captain says. "
        "\"We cannot touch anything physical. Only a real person can go into the gravity field and pull the lever. "
        "You are the only one here. You are the only one who can close the fracture.\""
        "Point Singularity: 'They are right, Operator. It has to be you.'",
    .eventChoices = {"[A] Agree to help.", "[B] Refuse. It is too dangerous."},
    .choiceSceneId = {320, 324},
    .choiceStabilityCost = {0, -20},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c32 = {
    .eventId = 332,
    .eventEra = 3,
    .eventName = "Shield Active",
    .eventDialogue = 
        "You push one last time. The lever clicks into place. "
        "A big blue wave of energy shoots out of the station. The shaking stops. "
        "The station is steady now. "
        "Point Singularity: 'Fracture sealed. Timeline stable. Well done, Operator.'",
    .eventChoices = {"[A] Check the monitors.", ""},
    .choiceSceneId = {340, 0},
    .choiceStabilityCost = {0, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c33 = {
    .eventId = 333,
    .eventEra = 3,
    .eventName = "Weakening",
    .eventDialogue = 
        "You let go. The gravity throws you back onto the floor. "
        "The shield is only half on. The station is still in danger but the pulling is a little weaker. "
        "Point Singularity: 'The fracture is still open. You have to go back. Get up.'",
    .eventChoices = {"[A] Get up and try again.", "[B] Give up and look for an escape pod."},
    .choiceSceneId = {330, 334},
    .choiceStabilityCost = {-15, -10},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c34 = {
    .eventId = 335,
    .eventEra = 3,
    .eventName = "The Blast",
    .eventDialogue = 
        "You press the button. The blue core turns white. "
        "You run back to your ship and get out just in time. "
        "The station explodes behind you, lighting up the dark space. "
        "Point Singularity: 'Fracture anchor destroyed. Timeline holding. Good call, Operator.'",
    .eventChoices = {"[A] Fly away into the stars.", ""},
    .choiceSceneId = {341, 0},
    .choiceStabilityCost = {0, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c35 = {
    .eventId = 324,
    .eventEra = 3,
    .eventName = "Cold Choice",
    .eventDialogue = 
        "You step back. The whole room shakes hard. A loud alarm goes off. "
        "The black hole is pulling the station in closer. The metal walls start to bend. "
        "Point Singularity: 'Operator. The fracture is tearing open. "
        "If this station gets pulled in, the timeline crack becomes permanent. There is no coming back from that.'",
    .eventChoices = {"[A] Change your mind and run to the core.", "[B] Stay here. It is over."},
    .choiceSceneId = {320, 325},
    .choiceStabilityCost = {0, -50},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

eventParadox c36 = {
    .eventId = 334,
    .eventEra = 3,
    .eventName = "No Escape",
    .eventDialogue = 
        "You check the escape pods. They are all broken. "
        "The crew holograms appear next to you. "
        "'There is no other way out,' they say. 'You have to finish this.' "
        "Point Singularity: 'Operator. You are the only variable that can close this fracture. Go back.'",
    .eventChoices = {"[A] Go back to the lever."},
    .choiceSceneId = {330},
    .choiceStabilityCost = {-10},
    .RequirementSceneId = {0},
    .RequirementSceneChoice = {0}
};

 eventParadox c37 = {
    .eventId = 340,
    .eventEra = 3,
    .eventName = "Saved Outpost",
    .eventDialogue = 
        "The station is safe. The fracture is closed. The crew's data is saved. "
        "Point Singularity: 'Era 3 stable. The timeline is holding. "
        "The crew's work will not be lost. You did well, Operator.' "
        "You set your ship's course for home.",
    .eventChoices = {"[A] Continue."},
    .choiceSceneId = {401},
    .choiceStabilityCost = {0},
    .RequirementSceneId = {0},
    .RequirementSceneChoice = {0}
};

eventParadox c38 = {
    .eventId = 341,
    .eventEra = 3,
    .eventName = "Safe Horizon",
    .eventDialogue = 
        "The station is gone. The fracture has nothing left to hold onto and fades away. "
        "Point Singularity: 'Era 3 cleared. Timeline fracture closed. "
        "The data is gone but the timeline is safe. That is what matters.' "
        "You sit in your cockpit, looking out at the quiet stars, and move on.",
    .eventChoices = {"[A] Continue."},
    .choiceSceneId = {401},
    .choiceStabilityCost = {0},
    .RequirementSceneId = {0},
    .RequirementSceneChoice = {0}
};

eventParadox c39 = {
    .eventId = 325,
    .eventEra = 3,
    .eventName = "Crushed",
    .eventDialogue = 
        "The gravity gets too strong. The ceiling falls. "
        "The station breaks apart and gets pulled into the black hole piece by piece. "
        "The timeline fracture tears wide open. "
        "Point Singularity goes silent. "
        "Your journey ends here, in the dark.",
    .eventChoices = {"[A] End of the line.", ""}, // Padded for fixed array sizes
    .choiceSceneId = {0, 0},
    .choiceStabilityCost = {-200, 0},
    .RequirementSceneId = {0, 0},
    .RequirementSceneChoice = {0, 0}
};

std::vector<eventParadox> era3Events = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c12, c13, c14, c15, c18, c19, c20, c21, c22, c23, c24, c25, c28, c30, c31, c32, c33, c34, c35, c36, c37, c38, c39};