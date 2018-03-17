
#include <GL/gl.h>    //include the gl header file
#include <GL/glut.h>  //include the GLUT header file, The OpenGL Utility Toolkit (GLUT) Programming Interface

int main( int argc, char **argv )
 { 

   glutInit (&argc, argv);

   glutInitDisplayMode(GLUT_SINGLE);

   glutInitWindowSize (512, 384); 

   glutInitWindowPosition (150, 150); 

   /*  glutCreateWindow creates a top-level window

   Usage : 
           int glutCreateWindow(char *name);
               name : ASCII character string for use as window name

   The name will be provided to the window system as the window’s name, the window system will label the window with the name

   Each created window has a unique associated OpenGL context, the value returned is a unique small integer identifier for the window

   State changes to a window’s associated OpenGL context can be done immediately after the window is created

   The display state of a window is initially for the window to be shown

   But the window’s display state is not actually acted upon until glutMainLoop is entered

   This means until glutMainLoop is called, rendering to a created window is ineffective because the window can not yet be displayed      */

   glutCreateWindow ("Example OpenGL Window"); //set the caption for the window

   return(0);
 }

/* compile as : 
   gcc -o SetCaptionForWindow SetCaptionForWindow.c -lglut -lGLU -lGL
   or
   g++ -o SetCaptionForWindow SetCaptionForWindow.c -lglut -lGLU -lGL

Run as :
   ./SetCaptionForWindow
*/
