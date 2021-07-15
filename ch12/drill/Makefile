# -*- MakeFile -*-

all: drill.exe
# fltk libs  -lfltkforms.lib -lfltkgl.lib -lfltkimages.lib \
	-lfltkjpeg.lib -lfltkpng.lib -lfltkzlib.lib 
drill.exe: drill.o GUI.o Graph.o Window.o
	clang++ -m32 -L"C:/FLTK/lib/" -lfltk.lib -lfltkforms.lib -lfltkgl.lib -lfltkimages.lib \
	-lfltkjpeg.lib -lfltkpng.lib -lfltkzlib.lib \
	-lkernel32.lib -luser32.lib -lgdi32.lib -lwinspool.lib -lcomdlg32.lib -ladvapi32.lib \
	-lshell32.lib -lole32.lib -loleaut32.lib -luuid.lib -lodbc32.lib -lodbccp32.lib \
	-lmsvcrt -llibcmt \
	drill.o GUI.o Graph.o Window.o -o drill.exe
	
drill.o: drill.cpp
	clang++ -c -m32 -I"C:/FLTK/" drill.cpp -o drill.o
	
GUI.o: ../GUI_interface/GUI.cpp
	clang++ -c -m32 -I"C:/FLTK/" ../GUI_interface/GUI.cpp -o GUI.o
	
Graph.o: ../GUI_interface/Graph.cpp
	clang++ -c -m32 -I"C:/FLTK/" ../GUI_interface/Graph.cpp -o Graph.o
	
Window.o: ../GUI_interface/Window.cpp
	clang -c -m32 -I"C:/FLTK/" ../GUI_interface/Window.cpp -o Window.o
	
clean:
	rm -f *.o test.exe