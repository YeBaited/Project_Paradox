#include <iostream>

#include "lib.hpp"

#include "era0.hpp"
#include "era1.hpp"
#include "era2.hpp"
#include "era3.hpp"
#include "era4.hpp"

bool failsafe = false;
bool skipFailsafe = false;

std::vector<int> sceneIdCache = {}; // this stores all the sceneId, mainly used for detecting duplicate.
std::vector<int> sceneChoicesCache = {}; // store all sceneIdChoices, mainly used for detecting if a sceneIdChoice leads to nowhere.

void verify(std::vector<eventParadox> eraArray){
    for (eventParadox event : eraArray){ // gets each one of the eventParadox
        for (int sceneId : sceneIdCache){
            if (sceneId == event.eventId){
                std::cout << sceneId << " <- Duplicate!" << std::endl;
                failsafe = true;
            };
        };

        if (event.choiceSceneId.size() != event.choiceStabilityCost.size()){
            std::cout << event.eventId << " <- size of choiceSceneId("<< event.choiceSceneId.size() <<") does not match choiceStabilityCost("<< event.choiceStabilityCost.size() <<")!" << std::endl;
            failsafe = true;
        };

        if (event.choiceSceneId.size() != event.RequirementSceneId.size()){
            std::cout << event.eventId << " <- size of choiceSceneId("<< event.choiceSceneId.size() <<") does not match RequirementSceneId("<< event.RequirementSceneId.size() <<")!" << std::endl;
            failsafe = true;
        }; 

        if (event.choiceSceneId.size() != event.RequirementSceneChoice .size()){
            std::cout << event.eventId << " <- size of choiceSceneId("<< event.choiceSceneId.size() <<") does not match RequirementSceneChoice("<< event.RequirementSceneChoice.size() <<")!" << std::endl;
            failsafe = true;
        };

        for (int choiceSceneId : event.choiceSceneId){
            sceneChoicesCache.emplace_back(choiceSceneId);
        };

        sceneIdCache.emplace_back(event.eventId); // add it to the cache.
        std::cout << "Adding sceneId " << event.eventId << " to cache!" << std::endl;
        libParadox::addEvent(event);
    };
};

int main(){

    verify(era0Events);
    verify(era1Events);
    verify(era2Events);
    verify(era3Events);
    verify(era4Events);
    

    for (int choiceSceneId : sceneChoicesCache){ // checks if a choiceSceneId leads to nowhere
        bool checkIfGoodToGo = false;
        for (int sceneId : sceneIdCache){
            
            if (choiceSceneId == sceneId){
                checkIfGoodToGo = true;
            }
        };

        if (not checkIfGoodToGo){
            std::cout << choiceSceneId << " <- Leads to nowhere!" << std::endl;
            failsafe = true;
        }
    };

    libParadox::debugGetEvents();

    std::cout << "Failsafe: " << failsafe << " SkipFailSafe: " << skipFailsafe << std::endl;
    std::cout << ">> STATISTICS << " << std::endl << "total events: " << sceneIdCache.size() << std::endl << "total choices: " << sceneIdCache.size() << std::endl;

    if (not failsafe || skipFailsafe){
        libParadox::begin();
    };
    
    
    std::cout << "game ended" << std::endl;
    // libParadox::popEvent("wow", "crazyIk", std::vector<std::string>{"wtf", "dsadas", "dsada"}, [](int chosen){
    //     std::cout << "callback received! with chosen: " << chosen;
    // });

}