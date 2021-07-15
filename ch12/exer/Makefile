# -*- MakeFile -*-

graphlib_objs = GUI.o Graph.o Window.o

# dependecies
fltklibs_clang = -lfltk.lib -lfltkforms.lib -lfltkgl.lib -lfltkimages.lib \
	-lfltkjpeg.lib -lfltkpng.lib -lfltkzlib.lib
winlibs_clang = -lkernel32.lib -luser32.lib -lgdi32.lib -lwinspool.lib -lcomdlg32.lib -ladvapi32.lib \
	-lshell32.lib -lole32.lib -loleaut32.lib -luuid.lib -lodbc32.lib -lodbccp32.lib \
	-lmsvcrt -llibcmt

all: 1 2 3 4 5 6 8 9 12

# exercise 1
exer1name = 1_rectangle
exer1exec = $(exer1name).exe

.PHONY: run1
run1: 1
	.\$(exer1exec)
	
1: $(exer1name).exe

$(exer1exec): $(exer1name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(exer1name).o $(graphlib_objs) -o $(exer1exec)
	
$(exer1name).o: $(exer1name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" $(exer1name).cpp -o $(exer1name).o

# exercise 2
exer2name = 2_rectangle_text
exer2exec = $(exer2name).exe

.PHONY: run2
run2: 2
	.\$(exer2exec)
	
2: $(exer2name).exe

$(exer2exec): $(exer2name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer2name).o -o $(exer2exec)
	
$(exer2name).o: $(exer2name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer2name).cpp -o $(exer2name).o
	
# exercise 3
exer3name = 3_initials
exer3exec = $(exer3name).exe

.PHONY: run3
run3: 3
	.\$(exer3exec)
	
3: $(exer3name).exe

$(exer3exec): $(exer3name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer3name).o -o $(exer3exec)
	
$(exer3name).o: $(exer3name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer3name).cpp -o $(exer3name).o

# exercise 4
exer4name = 4_tic-tac-toe
exer4exec = $(exer4name).exe

.PHONY: run4
run4: 4
	.\$(exer4exec)
	
4: $(exer4name).exe

$(exer4exec): $(exer4name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer4name).o -o $(exer4exec)
	
$(exer4name).o: $(exer4name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer4name).cpp -o $(exer4name).o

# exercise 5
exer5name = 5_red_frame
exer5exec = $(exer5name).exe

.PHONY: run5
run5: 5
	.\$(exer5exec)
	
5: $(exer5name).exe

$(exer5exec): $(exer5name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(exer5name).o $(graphlib_objs) -o $(exer5exec)
	
$(exer5name).o: $(exer5name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" $(exer5name).cpp -o $(exer5name).o

# exercise 6
exer6name = 6_doesnt_fit
exer6exec = $(exer6name).exe

.PHONY: run6
run6: 6
	.\$(exer6exec)
	
6: $(exer6name).exe

$(exer6exec): $(exer6name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer6name).o -o $(exer6exec)
	
$(exer6name).o: $(exer6name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer6name).cpp -o $(exer6name).o

# exercise 7
exer7name = 7_child_draw
exer7exec = $(exer7name).exe

.PHONY: run7
run7: 7
	.\$(exer7exec)
	
7: $(exer7name).exe

$(exer7exec): $(exer7name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer7name).o -o $(exer7exec)
	
$(exer7name).o: $(exer7name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer7name).cpp -o $(exer7name).o

# exercise 8
exer8name = 8_olympic_draw
exer8exec = $(exer8name).exe

.PHONY: run8
run8: 8
	.\$(exer8exec)
	
8: $(exer8name).exe

$(exer8exec): $(exer8name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer8name).o -o $(exer8exec)
	
$(exer8name).o: $(exer8name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer8name).cpp -o $(exer8name).o

# exercise 8
exer9name = 9_friend_img
exer9exec = $(exer9name).exe

.PHONY: run9
run9: 9
	.\$(exer9exec)
	
9: $(exer9name).exe

$(exer9exec): $(exer9name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer9name).o -o $(exer9exec)
	
$(exer9name).o: $(exer9name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer9name).cpp -o $(exer9name).o

# exercise 10
exer10name = 10_file_diagra
exer10exec = $(exer10name).exe

.PHONY: run10
run10: 10
	.\$(exer10exec)
	
10: $(exer10name).exe

$(exer10exec): $(exer10name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer10name).o -o $(exer10exec)
	
$(exer10name).o: $(exer10name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer10name).cpp -o $(exer10name).o

# exercise 12
exer12name = 12_superellipse
exer12exec = $(exer12name).exe

.PHONY: run12
run12: 12
	.\$(exer12exec)
	
12: $(exer12name).exe

$(exer12exec): $(exer12name).o $(graphlib_objs)
	clang++ -m32 --library-directory "C:/FLTK/lib/" $(fltklibs_clang) $(winlibs_clang) \
	$(graphlib_objs) $(exer12name).o -o $(exer12exec)
	
$(exer12name).o: $(exer12name).cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" --include-directory "../GUI_interface/" \
	$(exer12name).cpp -o $(exer12name).o

# Graph_lib
GUI.o: ../GUI_interface/GUI.cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" ../GUI_interface/GUI.cpp -o GUI.o
	
Graph.o: ../GUI_interface/Graph.cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" ../GUI_interface/Graph.cpp -o Graph.o
	
Window.o: ../GUI_interface/Window.cpp
	clang++ -c -m32 --include-directory "C:/FLTK/" ../GUI_interface/Window.cpp -o Window.o
	
cleanobj:
	rm -f *.o
clean:
	rm -f *.o *.exe