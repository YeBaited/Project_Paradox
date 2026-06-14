#pragma once

#include <ftxui/component/component.hpp>
#include <ftxui/component/app.hpp>

#include <ftxui/dom/elements.hpp>

#include <ftxui/screen/screen.hpp>

#include <iostream>
#include <fstream>

// Eras
using namespace ftxui;

struct eventParadox{
    int eventId;
    int eventEra;
    std::string eventName;
    std::string eventDialogue;
    std::vector<std::string> eventChoices;
    std::vector<int> choiceSceneId;
    std::vector<int> choiceStabilityCost;
    std::vector<int> RequirementSceneId;
    std::vector<int> RequirementSceneChoice;
};

std::vector<eventParadox> eventScenes = {}; // Stores all the scenes
std::string eraNameList[5] = {"Point Of Singularity", "Primitive", "Medieval", "Advanced", "!?UNKNOWN?!"};

bool showDebug = false;
bool showCharacterCreation = true;

int choiceSelected = 0;       // This is for the choices
int currentTab = 0;           // 0 Is menu | 1 is dialogue
int maxStability = 100;       // Max bro
int currentStability = 100;   // Player Stability, if it reaches 0 you lose.
int currentEventScene = 0;    // Just scene id
int currentEra = 0;           // Holds the current era
int renderTotal = 0;          // For debugging

std::string debugInputData;
std::string debugLog = "unk";
std::string playerName = "";
std::string eraName = "Unknown";
std::string currentStatus = "Breathing...";
std::string currentDialogue = "Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?";
std::string currentEventTitle = "Beginning?";

std::vector<int> eventIdLog = {};
std::vector<int> eventChoiceLog = {};
std::vector<std::string> currentEventChoice = {
  "[A] AaAaA",
  "[B] BbBbB",
  "[C] CcCcC"
};

class libDialogue {
  private:
    eventParadox defaultFailsafe = {
      .eventId = -1,
      .eventEra = 0,
      .eventName = "unknown Event.",
      .eventDialogue = "an unknown event probably caused this, actions taken will going back to even -1.",
      .eventChoices = {"Understood."},
      .choiceSceneId = {0},
      .choiceStabilityCost = {100},
      .RequirementSceneId = {0},
      .RequirementSceneChoice = {0}
    };

    eventParadox currentEventData; // storing event so it's easier to access

    eventParadox getEvent(){ // This get the eventParadox struct
      eventParadox targetEvent;
      for (eventParadox e : eventScenes){
        if (e.eventId == currentEventScene){
          targetEvent = e;
          break;
        };
      }

      if (targetEvent.eventId != currentEventScene){ // ensure that it's the correct one
        return defaultFailsafe;
      };

      currentEventData = targetEvent;
      return targetEvent;
    };

    bool isValidEvent(int idTarget){
      for (eventParadox e : eventScenes){
        if (e.eventId == idTarget){
          return true;
        };
      }
      return false;
    };

    void encryptText( ){
      int forgivenessAmount = 10;
      int encryptionAmount = (maxStability - currentStability) / forgivenessAmount;
      int currentIteration = 0;
      
      while (currentIteration < encryptionAmount){
        char replacements[7] = {'?', '#', '*', '@', '%', '!', '&'};

        srand(time(0) * renderTotal + currentIteration);
        int currentRandom = rand() % currentDialogue.size() + 1;
        int typeOfReplacement = rand() % 7;
        
        currentDialogue[currentRandom] = replacements[typeOfReplacement];
        currentIteration += 1;
      };
      
    };

  public:
    void setEventSceneToSelected(){ // Set the scene to the selected next scene
      eventParadox targetEvent = getEvent();

      int newSceneEvent = 0;
      if (isValidEvent(targetEvent.choiceSceneId[choiceSelected])){ // issue since eventScenes stored all event but it isn't organized in a way that eventScene is 1,2 ,3 it can be 1,3,2 
        newSceneEvent = targetEvent.choiceSceneId[choiceSelected];
      } else {
        newSceneEvent = 0;
        debugLog = "Is a Invalid scene Id!";
      };

      currentEventScene = newSceneEvent;
    };

    void updateDialogue(){ // just update the dialogue and stuff
      
      eventParadox targetEvent = getEvent();
      
      currentDialogue = targetEvent.eventDialogue;
      currentEventChoice = targetEvent.eventChoices;
      currentEra = targetEvent.eventEra;
      currentEventTitle = targetEvent.eventName;
      eraName = eraNameList[currentEra];

      encryptText();
    };

    void updatePlayer(){ // This updates the player status and such
      eventParadox targetEvent = getEvent();

      currentStability += targetEvent.choiceStabilityCost[choiceSelected];
      eventIdLog.push_back(targetEvent.eventId);
      eventChoiceLog.push_back(choiceSelected);

      if (currentStability > maxStability){
        currentStability = maxStability;
      };      

      if (currentStability < 0){
        currentStability = 0;
      };

      if (currentStability >= 90){
        currentStatus = "Breathing...";
      } else if (currentStability >= 80){
        currentStatus = "Breathing..";
      } else if (currentStability >= 70){
        currentStatus = "Breathing.";
      } else if (currentStability >= 60){
        currentStatus = "Struggling.";
      } else if (currentStability >= 50){
        currentStatus = "Weakening.";
      } else if (currentStability >= 50){
        currentStatus = "Despair.";
      } else if (currentStability >= 40){
        currentStatus = "Darkness.";
      } else if (currentStability >= 30){
        currentStatus = "????";
      } else if (currentStability >= 20){
        currentStatus = "!!!!";
      } else if (currentStability >= 10){
        currentStatus = "####";
      } else if (currentStability < 10){
        currentStatus = "!!P&RAD0x?!";
      };   
    };

    void resetEverything(){
      currentStability = maxStability;

      eventIdLog.clear();
      eventChoiceLog.clear();

      currentEra = 0;
      currentEventScene = 0;
      choiceSelected = 0;

    };

};

libDialogue paradoxClass;
auto screen = ftxui::App::Fullscreen(); // screenshit size

InputOption inputOpt = {
  .multiline = false,
  .on_change = []{
    if (debugInputData == "tab 0"){
      currentTab = 0;
      debugInputData = "";
    };

    if (debugInputData == "tab 1"){
      currentTab = 1;
      debugInputData = "";
    };

    if (debugInputData == "maxStability"){
      currentStability = maxStability;
      debugInputData = "";
    }

  }
};

Component debugInput = Input(&debugInputData, "Debug command", inputOpt);
Component playerNameInput = Input(&playerName, "Your name...", InputOption{
  .multiline = false,
});

Component beginButton = Button("Start the adventure!", []{

  showCharacterCreation = false;
  currentTab = 1;
  
  std::ofstream file("playerName.txt");

  if (file.is_open()){
    file << playerName;
    file.close();
  };

  Maybe(beginButton, &showCharacterCreation);
  Maybe(playerNameInput, &showCharacterCreation);
});

Component choices = Menu(&currentEventChoice, &choiceSelected, MenuOption{
  .on_enter = []{
    debugLog = "choiSelected: " + std::to_string(choiceSelected) + " curSceneSelected: " + std::to_string(currentEventScene);
    
    paradoxClass.updatePlayer(); // Update player first since some variable will probably change after changing the paradoxClass.

    paradoxClass.setEventSceneToSelected();
    paradoxClass.updateDialogue();
    
    // need to scan for all event and check event id btw
    // currentDialogue = eventScenes[currentEventScene].eventDialogue;
    // currentEventChoice = eventScenes[currentEventScene].ChoiceReplies;
  }
});


auto componentList = Container::Vertical({
  debugInput,
  playerNameInput,
  beginButton,
  choices,
});

auto topBar = Renderer([]{ // TopBar ig
  return hbox({
    center(text("Project Paradox")) | border | color(Color::Purple3) | flex,
    window(text("Version"), text("1.0.0"))
  });
});

auto debugBar = Renderer(componentList, []{ // Debug dady
  if (not showDebug){
    return text("");
  };

  return vbox({
    hbox({
      center(text("[DEBUG MODE]")) | flex,
      window(text("Command"), debugInput->Render()) | flex,
      window(text("curChoi"), text(std::to_string(choiceSelected))),
      window(text("curTab"), text(std::to_string(currentTab))),
      window(text("curRender"), text(std::to_string(renderTotal))),
      window(text("curSceneId"), text(std::to_string(currentEventScene))),
      window(text("curLog"), text(debugLog))
    }) | borderDashed,
  });
});

auto dialogueMain = Renderer([]{ // Dialogue

  return vbox({
    hbox({
      window(text("Name"), text(playerName)),
      window(text("Current-Era"), text(eraNameList[currentEra])),
      window(text("Stability"), text(std::to_string(currentStability) + "%")),
      window(text("Status"), text(currentStatus)) | color(Color::Blue),
    }) | border,
    vbox({
      center(text(eraName + " - " + currentEventTitle)) | color(Color::Red),
      separator(),
      paragraphAlignLeft(currentDialogue),
      choices->Render(),
    }) | border
  });
});



auto menuMain = Renderer(componentList, []{ // Menu
  return vbox({
    paragraphAlignCenter("Welcome to Project Paradox... \n\nTo begin please input your name \n\nand press 'Begin'") | border,
    hbox({
      window(text("Character Name"), playerNameInput->Render())
    }),
    center(beginButton->Render())
  }) | border;
});

auto uiTabs = Container::Tab({
  menuMain,
  dialogueMain
}, &currentTab);

auto mainRender = Renderer(componentList, []{ // btw this renders every frame.
  renderTotal += 1;
  return vbox({
    topBar->Render(),
    debugBar->Render(),
    uiTabs->Render()
  });
});



namespace libParadox{
  
  void setEra(std::string eraName){
    eraName = eraName;
  };

  void popEvent(std::string eventName, std::string dialogueText, std::vector<std::string> choices, std::function<void(int)> callback){ // legacy 
    // please remove
    
    currentEventChoice.clear();
    currentTab = 1;

    currentDialogue = dialogueText;
    currentEventChoice = choices;
    
  };

  void addEvent(eventParadox paradoxScene){
    eventScenes.push_back(paradoxScene);
  };


  void addAsync(std::function<void(void)> asyncMain){
    screen.Post([&](){
      asyncMain();
    });
  };

  void debugChangeTab(int tabArg){
    std::cout << "TabArg is: " << tabArg << std::endl;
    std::cout << "prev Tab Value: " << currentTab << std::endl;
    
    currentTab = tabArg;
    screen.PostEvent(Event::Custom);
    std::cout << "current Tab Value: " << currentTab << std::endl;
  }

  void debugGetEvents(){
    std ::cout << std::endl << "==> debug_getEvents <==" << std::endl;
    for (eventParadox event : eventScenes){
      std::cout << event.eventName << std::endl;
    };
  };

  void begin(){

    std::ifstream file("playerName.txt");

    if (file.is_open()){
      file >> playerName;
      file.close();
    }

    currentEventChoice = eventScenes[0].eventChoices;
    currentDialogue = eventScenes[0].eventDialogue;

    screen.Post([&](){
      renderTotal += 1;
    });
    screen.Loop(mainRender);

  };


  void stop(){
    screen.ExitLoopClosure();
  };
};
