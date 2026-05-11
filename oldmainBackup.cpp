// #include <ftxui/component/component.hpp>
// #include <ftxui/component/app.hpp>

// #include <ftxui/dom/elements.hpp>

// #include <ftxui/screen/screen.hpp>


// #include <iostream>

// bool showDebug = true;

// int main(){
//   using namespace ftxui;
//   int currentTab = 1;
//   int choiceSelected = 0;


//   std::vector<std::string> entries = {
//     "Choice A",
//     "Choice B",
//     "Choice C",
//   };
//   std::string debugInput;

//   Component input = Input(&debugInput, "");
//   Component choiceMenu = Menu(&entries, &choiceSelected);

//   choiceMenu |= CatchEvent([&](Event event){

//     return false;
//   });

//   input |= CatchEvent([&](Event event){
    
//     if (debugInput == "tab 1"){
//       currentTab = 0;
//       debugInput = "";
//       return false;
//     };

//     if (debugInput == "tab 2"){
//       currentTab = 1;
//       debugInput = "";
//       return false;
//     };
    
//     return false;
//   });
  
//   auto startMenu = Renderer([] {
//     return vbox({
//       text("This is the start menu")
//     });
//   });

//   auto dialogue = Renderer([&] {
//     return vbox({
//       hbox({
//         center(text("ERA NAME")) | bold | flex,
//       }) | border,
//       hbox({
//         window(text("Name"), text("Gian Santos")),
//         window(text("Stability"), text("100%")),
//         window(text("Era Progression"), gaugeRight(0.5)) | flex
//       }) | border,
//       paragraphAlignLeft("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse vitae varius eros, vitae scelerisque velit. Vestibulum pretium nibh et mi sollicitudin dignissim. In sed nisi sed nunc rutrum convallis. Ut sed turpis sollicitudin, varius quam vel, fermentum sem. Maecenas nec dapibus eros. Aliquam erat volutpat. Nullam euismod libero a justo aliquet, quis congue nisl facilisis. Vestibulum dictum et diam in vulputate. Vivamus sollicitudin, enim sit amet iaculis consequat, leo eros posuere metus, nec maximus leo tortor quis libero. Donec imperdiet efficitur dui, vitae venenatis felis iaculis nec. Suspendisse varius porta luctus. Nulla scelerisque dui nunc, non malesuada lorem feugiat ut. Vivamus non imperdiet nunc. Suspendisse eget posuere ipsum. Vestibulum non pulvinar diam, nec mattis tellus."),
//       choiceMenu->Render()
//     }) | border;
//   });
  
//   auto tab = Container::Tab({
//     startMenu,
//     dialogue,
//   }, &currentTab);
  
//   auto components = Container::Vertical({
//     input,
//     tab,
//     choiceMenu
//   });

//   auto debugRender = Renderer([&] {
//     if (showDebug){
//       return hbox({
//         window(text("[DEBUG] Command"), input->Render()),
//         window(text("[DEBUG] Command"), text(std::to_string(choiceSelected))),

//       });
//     };
//      return text("");
//   });
  
//   auto renderer = Renderer(components, [&]{
//     return vbox({
//       hbox({
//         center(text("Project Paradox")) | border | flex,
//         window(text("Version"), text("0.0.1")),
//       }),
//       debugRender->Render(),
//       tab->Render() | flex
//     });
//   });

//   auto screen = App::Fullscreen();

//   screen.Loop(renderer);
// }