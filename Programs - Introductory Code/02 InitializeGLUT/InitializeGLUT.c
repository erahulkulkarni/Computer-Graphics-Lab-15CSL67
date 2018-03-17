
#include <GL/gl.h>    //include the gl header file
#include <GL/glut.h>  //include the GLUT header file, The OpenGL Utility Toolkit (GLUT) Programming Interface

int main( int argc, char **argv )
 { 
   // The OpenGL Utility Toolkit (GLUT) Programming Interface
   // Routines beginning with the glutInit- prefix are used to initialize GLUT state

   // primary initialization : routine is glutInit that should only be called exactly once in a GLUT program

   // No non-glutInit- prefixed GLUT or OpenGL routines should be called before glutInit

   // The other glutInit- routines may be called before glutInit

   // routines can be used to set default window initializationstate that might be modified by the command processing done in glutInit

   // For example, glutInitWindowSize(400, 400) can be called before glutInit to indicate 400 by 400 is the program’s default window size
   // Setting the initial window size or position before glutInit allows the GLUT program user to specify the initial size or position using command line arguments


   // glutInit is used to initialize the GLUT library 
   // Usage : void glutInit(int *argcp, char **argv);


   glutInit (&argc, argv);


   // glutInit will initialize the GLUT library and negotiate a session with the window system. 
   // During this process, glutInit may cause the termination of the GLUT program with an error message to the user if GLUT cannot be properly initialized. 
   // Examples of this situation include the failure to connect to the window system, the lack of window system support for OpenGL, and invalid command line options.
   // glutInit also processes command line options, but the specific options parse are window system dependent.

   return(0);
 }

/* compile as : 
   gcc -o InitializeGLUT InitializeGLUT.c -lglut -lGLU -lGL
   or
   g++ -o InitializeGLUT InitializeGLUT.c -lglut -lGLU -lGL

Run as :
   ./InitializeGLUT
*/
