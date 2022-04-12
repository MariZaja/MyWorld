cmake_minimum_required(VERSION 3.20)
project(MyWorld)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyWorld main.cpp World.cpp World.h Organism.h Plant.cpp Plant.h Animal.cpp Animal.h Grass.cpp Grass.h Organism.cpp Dandelion.cpp Dandelion.h WolfBerries.cpp WolfBerries.h Hogweed.cpp Hogweed.h Guarama.cpp Guarama.h)
