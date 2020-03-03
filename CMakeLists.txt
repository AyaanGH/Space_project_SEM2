cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 14)

project(cmake_example CXX)

# turns out that g++ will allow variable length arrays but I 
# dont' want students getting dependant on non-standard features
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wvla -Werror=vla")

# limit number of errors shown to 1
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wfatal-errors")

# location of source code files
include_directories(${CMAKE_SOURCE_DIR}/include)
#link_directories(${CMAKE_SOURCE_DIR}/src)

# tell cmake where to put the executables that it creates
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)    
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin ) 

# where to put the object files it creates
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/builds/lib)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/builds/lib)

# add tests
#enable_testing() 
#add_subdirectory(Testing)

add_library( player src/player.cpp )
add_library( menu src/menu.cpp )
add_library( room src/room.cpp )
add_library( npc src/npc.cpp )
add_library( conv src/conv.cpp )
add_library( inventory src/inventory.cpp )
add_library( item src/item_class_src/item.cpp )
add_library( weapon src/item_class_src/weapon.cpp )
add_library( apparel src/item_class_src/apparel.cpp )
add_library( consumable src/item_class_src/consumable.cpp)
add_library( quest src/quest_class_src/quest.cpp)
add_library( fetch src/quest_class_src/fetch.cpp)

add_executable( main src/main.cpp )
target_link_libraries( main player menu room npc conv item inventory weapon apparel consumable quest fetch)



#cmake -G "MinGW Makefiles"  .
#-lpdcurses 