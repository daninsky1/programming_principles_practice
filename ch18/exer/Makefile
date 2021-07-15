# -*- Makefile -*-

all: 1 2 3

# exercise 1

appname1 = 1_strdup
appsrc1 = $(appname1).cpp
appexe1 = $(appname1).exe

1: $(appexe1)

$(appexe1): $(appname1).o
	g++ $(appname1).o -o $(appexe1)
	
$(appname1).o: $(appsrc1)
	g++ -g -c $(appsrc1) -o $(appname1).o
	
# exercise 2
appname2 = 2_findx
appsrc2 = $(appname2).cpp
appexe2 = $(appname2).exe

2: $(appexe2)

$(appexe2): $(appname2).o
	g++ $(appname2).o -o $(appexe2)
	
$(appname2).o: $(appsrc2)
	g++ -g -c $(appsrc2) -o $(appname2).o

# exercise 3
appname3 = 3_strcmp
appsrc3 = $(appname3).cpp
appexe3 = $(appname3).exe

3: $(appexe3)

$(appexe3): $(appname3).o
	g++ $(appname3).o -o $(appexe3)
	
$(appname3).o: $(appsrc3)
	g++ -g -c $(appsrc3) -o $(appname3).o
	