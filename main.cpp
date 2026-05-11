#include <iostream>

#include "lib.hpp"
#include "era1.hpp"

int mainClock = 0;


int main(){
    
    for (eventParadox event : era1Events){
        libParadox::addEvent(event);
    };

    libParadox::debugGetEvents();
    libParadox::begin();
    
    // libParadox::popEvent("wow", "crazyIk", std::vector<std::string>{"wtf", "dsadas", "dsada"}, [](int chosen){
    //     std::cout << "callback received! with chosen: " << chosen;
    // });

}