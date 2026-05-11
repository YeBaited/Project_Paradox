#include <iostream>
#include <vector>


struct event{
    std::string eventName;
    std::string eventDialoge;
    std::vector<std::string> eventChoices;
};

event IntroductionToEra = {
    .eventName = "Introduction",
    .eventDialoge = "This is an intro event dialogue!",
    .eventChoices = {"[A] First choice", "[B] Second choice", "[C] Third choice"}
};


int main(){
    std::cout << IntroductionToEra.eventName;
}