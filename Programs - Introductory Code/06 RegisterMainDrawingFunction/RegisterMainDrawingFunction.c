#include <GL/gl.h>    //include the gl header file
#include <GL/glut.h>  //include the GLUT header file, The OpenGL Utility Toolkit (GLUT) Programming Interface

void draw( )
 {

 }

int main( int argc, char **argv )
 { 

   glutInit (&argc, argv);

   glutInitDisplayMode(GLUT_SINGLE);

   glutInitWindowSize (512, 384); 

   glutInitWindowPosition (150, 150); 

   glutCreateWindow ("Example OpenGL Window");

   /* To be able to draw to created window : inform GLUT which method will be main drawing method
      If main drawing method is a void method called display() , then calling glutDisplayFunc with argument as display registers main drawing function

      glutDisplayFunc : sets the display callback for the current window

      When a window is created, no display callback exists for the window
      It is the responsibility of the programmer to install a display callback for the window before the window is shown

      Usage : 
               void glutDisplayFunc(void (*func)(void));

      func : The new display callback function

      When GLUT determines that the normal plane for the window needs to be redisplayed, 
          the display callback for the window is called

      Before the callback, the current window is set to the window needing to be redisplayed
          and (if no overlay display callback is registered) the layer in use is set to the
          normal plane

      The display callback is called with no parameters

      The entire normal plane region should be redisplayed in response to the callback

      GLUT determines when the display callback should be triggered based on the window’s redisplay state

      The redisplay state for a window can be either set explicitly by calling glutPostRedisplay 
      or 
      implicitly as the result of window damage reported by the window system

      A display callback must be registered for any window that is shown

      Passing NULL to glutDisplayFunc is illegal as of GLUT 3.0; there is no way
to “deregister” a display callback     */
           
   glutDisplayFunc (draw); //call the display function to draw

   return(0);
 }

/* compile as : 
   gcc -o RegisterMainDrawingFunction RegisterMainDrawingFunction.c -lglut -lGLU -lGL
   or
   g++ -o RegisterMainDrawingFunction RegisterMainDrawingFunction.c -lglut -lGLU -lGL

Run as :
   ./RegisterMainDrawingFunction
*/
