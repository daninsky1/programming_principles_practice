# -*- MakeFile -*-

all: 3 4 5 6 7 8 9

# exercise 3
app3name = 3_to_lower
app3exec = $(app3name).exe
	
3: $(app3exec)

$(app3exec): $(app3name).cpp
	clang++ $(app3name).cpp -o $(app3exec)

# exercise 4
app4name = 4_strdup
app4exec = $(app4name).exe
	
4: $(app4exec)

$(app4exec): $(app4name).cpp
	clang++ $(app4name).cpp -o $(app4exec)

# exercise 5
app5name = 5_findx
app5exec = $(app5name).exe
	
5: $(app5exec)

$(app5exec): $(app5name).cpp
	clang++ $(app5name).cpp -o $(app5exec)

# exercise 6
app6name = 6_memory_exhaustion
app6exec = $(app6name).exe
	
6: $(app6exec)

$(app6exec): $(app6name).cpp
	clang++ $(app6name).cpp -o $(app6exec)

# exercise 7
app7name = 7_free_store_input
app7exec = $(app7name).exe
	
7: $(app7exec)

$(app7exec): $(app7name).cpp
	clang++ $(app7name).cpp -o $(app7exec)

# exercise 8
app8name = 8_free_store_input
app8exec = $(app8name).exe
	
8: $(app8exec)

$(app8exec): $(app8name).cpp
	clang++ $(app8name).cpp -o $(app8exec)

# exercise 9
app9name = 9_memo_growth
app9exec = $(app9name).exe
	
9: $(app9exec)

$(app9exec): $(app9name).cpp
	clang++ $(app9name).cpp -o $(app9exec)

cleanobj:
	rm -f *.o
clean:
	rm -f *.o *.exe