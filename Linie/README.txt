1. Install free glut on windows (optional):

from http://www.transmissionzero.co.uk/software/freeglut-devel/ get the freeGlut binaries and
include files, and integrate them in codeblocks

OR just take the freeglut.dll from the zip file to run EngineGlut

2.integrate EngineGlut in codeblock:
create new project console application
copy and add to your project the file EngineGlut.h and libEngineGlut.a
copy libEngineGlut.dll and freeglut.dll into bin/Debug folder

Project -> Build options -> Linker settings -> Add
libEngineGlut.a (NO RELATIVE PATH)
