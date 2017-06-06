# Using the lastest version available for CMake to date
cmake_minimum_required(VERSION 3.8)

# Project's name
project(LastWorldWar)

# Get all .cpp files and set they to the source code
file(GLOB SOURCE_FILES *.cpp *.h)

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Set the libraries - Must have
find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)
find_package(SDL_mixer REQUIRED)
find_package(SDL_ttf REQUIRED)
find_package(SDL_net REQUIRED)

# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

# Set compiler flags
set(CMAKE_CXX_FLAGS "${SDL_CFLAGS} -Wall -W -pedantic -ansi -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -lSDL_net -std=c++0x -o -g")

# Run the executable
add_executable(LastWorldWar ${SOURCE_FILES})

include_directories(LastWorldWar ${SDL_INCLUDE_DIR} ${SDLIMAGE_INCLUDE_DIR} ${SDLMIXER_INCLUDE_DIR} ${SDLTTF_INCLUDE_DIR} ${SDLNET_INCLUDE_DIR})
target_link_libraries(LastWorldWar ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY} ${SDLMIXER_LIBRARY} ${SDLTTF_LIBRARY} ${SDLNET_LIBRARY})
