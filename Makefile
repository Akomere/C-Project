# Set variables to be used for runnimg the program
CXX = g++
CXXFLAGS = -Wall -ggdb -std=c++11

#Set variables for target, object files, source and header files
TARGET = fantasyGame
OBJS = Race.o main.o BoardGame.o Human.o Orc.o SmallShield.o Sword.o Weapons.o Elf.o Dwarf.o Hobbit.o RingOfStren.o RingOfLife.o PlateArmour.o LightGear.o LeatherArmour.o LargeShield.o Item.o HeavyGear.o Dagger.o
SRCS = Race.cpp main.cpp BoardGame.cpp Human.cpp Orc.cpp SmallShield.cpp Sword.cpp Weapons.cpp Elf.cpp Dwarf.cpp Hobbit.cpp RingOfStren.cpp RingOfLife.cpp PlateArmour.cpp LightGear.cpp LeatherArmour.cpp LargeShield.cpp Item.cpp HeavyGear.cpp Dagger.cpp
HEADERS = Race.h BoardGame.h Human.h Orc.h SmallShield.h Sword.h Weapons.h Elf.h Dwarf.h Hobbit.h RingOfStren.h RingOfLife.h PlateArmour.h LightGear.h LeatherArmour.h LargeShield.h Item.h HeavyGear.h Dagger.h

#Set variables to automatically run execytable
all: run
run: ${TARGET}
	 ./fantasyGame

.PHONY: all run

#Set the game executable
${TARGET}: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} -o ${TARGET} ${OBJS}

#compile all source files individually and also the use of wildcards
Race.o: Race.cpp Race.h
	${CXX} -c ${CXXFLAGS} $^

main.o: main.cpp
	${CXX} -c ${CXXFLAGS} $^

BoardGame.o: BoardGame.cpp BoardGame.h
	${CXX} -c ${CXXFLAGS} $^

Human.o: Human.cpp Human.h
	${CXX} -c ${CXXFLAGS} $^

Orc.o: Orc.cpp Orc.h
	${CXX} -c ${CXXFLAGS} $^

SmallShield.o: SmallShield.cpp SmallShield.h
	${CXX} -c ${CXXFLAGS} $^

Sword.o: Sword.cpp Sword.h
	${CXX} -c ${CXXFLAGS} $^

Weapons.o: Weapons.cpp Weapons.h
	${CXX} -c ${CXXFLAGS} $^

Elf.o: Elf.cpp Elf.h
	${CXX} -c ${CXXFLAGS} $^

Dwarf.o: Dwarf.cpp Dwarf.h
	${CXX} -c ${CXXFLAGS} $^

Hobbit.o: Hobbit.cpp Hobbit.h
	${CXX} -c ${CXXFLAGS} $^

RingOfStren.o: RingOfStren.cpp RingOfStren.h
	${CXX} -c ${CXXFLAGS} $^

RingOfLife.o: RingOfLife.cpp RingOfLife.h
	${CXX} -c ${CXXFLAGS} $^

PlateArmour.o: PlateArmour.cpp PlateArmour.h
	${CXX} -c ${CXXFLAGS} $^

LightGear.o: LightGear.cpp LightGear.h
	${CXX} -c ${CXXFLAGS} $^

LeatherArmour.o: LeatherArmour.cpp LeatherArmour.h
	${CXX} -c ${CXXFLAGS} $^

LargeShield.o: LargeShield.cpp LargeShield.h
	${CXX} -c ${CXXFLAGS} $^

Item.o: Item.cpp Item.h
	${CXX} -c ${CXXFLAGS} $^

HeavyGear.o: HeavyGear.cpp HeavyGear.h
	${CXX} -c ${CXXFLAGS} $^

Dagger.o: Dagger.cpp Dagger.h
	${CXX} -c ${CXXFLAGS} $^

#Set the clean command to delete both object and executable files
clean:
	rm -f core $(OBJS) *.d *~ $(TARGET)

