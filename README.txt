# IMPORTANT



  
-Compile program to builds folder

- Currrent Compile command from root of project



//Without cmake
g++ .\src\main.cpp .\src\player.cpp .\src\menu.cpp -o .\bin\main



//Main Cmake command
cmake --build .  

//Recompiling cmake
cmake -G "MinGW Makefiles"  .