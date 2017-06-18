# Using the lastest version available for CMake to date
cmake_minimum_required(VERSION 3.8)

# Project's name
project(LastWorldWar)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build)

# Set the libraries - Must have
find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)
find_package(SDL_mixer REQUIRED)
find_package(SDL_ttf REQUIRED)
find_package(SDL_net REQUIRED)

# The following folder will be added as "include" in C++ compilation
include_directories(include)

# Set all source files to a variable
file(GLOB SOURCE_CODE source/*.cpp)

# Set compiler flags
set(CMAKE_CXX_FLAGS "${SDL_CFLAGS} -Wall -W -pedantic -ansi -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -lSDL_net -std=c++0x -o -g")

# Executable for Main Game
add_executable(LastWorldWar LastWorldWar.cpp ${SOURCE_CODE})
include_directories(LastWorldWar ${SDL_INCLUDE_DIR} ${SDLIMAGE_INCLUDE_DIR} ${SDLMIXER_INCLUDE_DIR} ${SDLTTF_INCLUDE_DIR} ${SDLNET_INCLUDE_DIR})
target_link_libraries(LastWorldWar ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY} ${SDLMIXER_LIBRARY} ${SDLTTF_LIBRARY} ${SDLNET_LIBRARY})

# Executable for Server
add_executable(LastWorldWarServer server.cpp ${SOURCE_CODE})
include_directories(LastWorldWarServer ${SDL_INCLUDE_DIR} ${SDLIMAGE_INCLUDE_DIR} ${SDLMIXER_INCLUDE_DIR} ${SDLTTF_INCLUDE_DIR} ${SDLNET_INCLUDE_DIR})
target_link_libraries(LastWorldWarServer ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY} ${SDLMIXER_LIBRARY} ${SDLTTF_LIBRARY} ${SDLNET_LIBRARY})

# Installation - Install each needed file to a designated folder
INSTALL(TARGETS LastWorldWar DESTINATION LastWorldWar_GAME)
INSTALL(TARGETS LastWorldWarServer DESTINATION LastWorldWar_GAME)
INSTALL(FILES build/lazy.ttf build/mapaTeste.tmx DESTINATION LastWorldWar_GAME)
INSTALL(DIRECTORY build/images build/sound_effects build/soundtrack DESTINATION LastWorldWar_GAME)
