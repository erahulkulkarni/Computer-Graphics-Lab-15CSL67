
#include <GL/gl.h>    //include the gl header file
#include <GL/glut.h>  //include the GLUT header file, The OpenGL Utility Toolkit (GLUT) Programming Interface

int main( int argc, char **argv )
 { 

   glutInit (&argc, argv);

   // glutInitDisplayMode sets the initial display mode
   // void glutInitDisplayMode(unsigned int mode);

   // mode = GLUT_SINGLE Bit mask to select a single buffered window
   // The initial display mode is used when creating top-level windows, subwindows, and
   //   overlays to determine the OpenGL display mode for the to-be-created window or overlay

   // mode values can be or ed |

   // Other mode values : GLUT_RGB , GLUT_DOUBLE
   // GLUT_RGB : alias for GLUT_RGBA , Bit mask to select an RGBA mode window
   //   This is the default if neither GLUT_RGBA nor GLUT_INDEX are specified
   //   RGB : Red Green Blue
   // GLUT_DOUBLE : Bit mask to select a double buffered window
   //   This overrides GLUT_SINGLE if it is also specified
   // GLUT_INDEX : Bit mask to select a color index mode window
   //   This overrides GLUT_RGBA if it is also specified
   // GLUT_DEPTH : Bit mask to select a window with a depth buffer

   glutInitDisplayMode(GLUT_SINGLE);//set up a basic display buffer

   return(0);
 }

/* compile as : 
   gcc -o InitialDisplayMode InitialDisplayMode.c -lglut -lGLU -lGL
   or
   g++ -o InitialDisplayMode InitialDisplayMode.c -lglut -lGLU -lGL

Run as :
   ./InitialDisplayMode
*/
