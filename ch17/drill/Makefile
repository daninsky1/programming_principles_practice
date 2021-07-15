# -*- MakeFile -*-

all: 1

# drill
app1name = drill
app1exec = $(app1name).exe
	
1: $(app1exec)

$(app1exec): $(app1name).cpp
	clang++ $(app1name).cpp -o $(app1exec)


cleanobj:
	rm -f *.o
clean:
	rm -f *.o *.exe