cmake_minimum_required(VERSION 3.20)
project(MyWorld)

set(CMAKE_CXX_STANDARD 17)

add_executable(MyWorld main.cpp World.cpp World.h Organism.h Organism.cpp Plant.cpp Plant.h Animal.cpp Animal.h Grass.cpp Grass.h Dandelion.cpp Dandelion.h WolfBerries.cpp WolfBerries.h Hogweed.cpp Hogweed.h Guarana.cpp Guarana.h Wolf.cpp Wolf.h Sheep.cpp Sheep.h Fox.cpp Fox.h Turtle.cpp Turtle.h Antelope.cpp Antelope.h Console.cpp Console.h Human.cpp Human.h Commentator.cpp Commentator.h)
