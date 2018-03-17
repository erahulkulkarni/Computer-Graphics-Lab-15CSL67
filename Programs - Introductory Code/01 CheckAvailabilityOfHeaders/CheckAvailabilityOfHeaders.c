/* Introduction : OpenGL
   OpenGL, or the Open Graphics Library, is a 3D graphics language developed by Silicon Graphics.
   Before OpenGL, unique 3D graphics code had to be written for each operating system platform as well as different graphics hardware. 
   With OpenGL, software developers can create graphics / special effects that will appear nearly identical on any operating system and any hardware that supports OpenGL.
   Help in Portability - 3D games and programs to port to multiple platforms. */

/* OpenGL code has set of commands. 
   Each command executes a drawing action or creates a special effect. 
   Using OpenGL commands, programmers can create 3D worlds which can include special effects such as texture mapping, transparency (alpha blending), hidden surface removal, antialiasing, fog, and lighting effects. 
   An unlimited amount of viewing and modeling transformations can be applied to the OpenGL objects, giving developers an infinite amount of possibilities. */

/* Required : OpenGL and GLUT header files and libraries : setup covered in "Install freeglut" */

/* Check if following OpenGL library header files are available, generally in /usr/include
   or
   Compile the program to check for availability of OpenGL APIs */

#include <GL/gl.h>    //include the gl header file
#include <GL/glut.h>  //include the GLUT header file, The OpenGL Utility Toolkit (GLUT) Programming Interface

int main( int argc, char **argv )
 {

  return(0);
 }

/* compile as : 

   Use the -lglut linker option with gcc/g++ to compile a program with glut library

   And to use the lower level libraries then use -lGL -lGLU also in the linker options

   To get the binary executable called CheckAvailabilityOfHeaders instead of a.out use 
       -o CheckAvailabilityOfHeaders

   gcc -o CheckAvailabilityOfHeaders CheckAvailabilityOfHeaders.c -lglut -lGLU -lGL
   or
   g++ -o CheckAvailabilityOfHeaders CheckAvailabilityOfHeaders.c -lglut -lGLU -lGL

Or

   gcc -o CheckAvailabilityOfHeaders CheckAvailabilityOfHeaders.c -lglut
   or
   g++ -o CheckAvailabilityOfHeaders CheckAvailabilityOfHeaders.c -lglut


Run as :

   ./CheckAvailabilityOfHeaders

*/
