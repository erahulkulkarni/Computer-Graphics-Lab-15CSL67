
#include <GL/gl.h>    //include the gl header file
#include <GL/glut.h>  //include the GLUT header file, The OpenGL Utility Toolkit (GLUT) Programming Interface

int main( int argc, char **argv )
 { 

   glutInit (&argc, argv);

   glutInitDisplayMode(GLUT_SINGLE);

   // glutInitWindowSize and glutInitWindowPosition set the initial window position and size respectively

   /* Other glutInit- routines may be called before glutInit
      The reason is these routines can be used to set default window initialization state
        that might be modified by the command processing done in glutInit
      For example, glutInitWindowSize(400, 400) can be called before glutInit to indicate
        400 by 400 is the program’s default window size
      Setting the initial window size or position before glutInit allows the GLUT program
        user to specify the initial size or position using command line arguments
   */   

   /* Usage : 
              void glutInitWindowSize(int width, int height);
              void glutInitWindowPosition(int x, int y);

                  width  : Width in pixels
                  height : Height in pixels
                  x      : Window X location in pixels
                  y      : Window Y location in pixels
   */

   glutInitWindowSize (512, 384); //set width and height of the window

   glutInitWindowPosition (150, 150); //set position of the window

   return(0);
 }

/* compile as : 
   gcc -o SetSizeAndPositionOfGLUTWindowOnScreen SetSizeAndPositionOfGLUTWindowOnScreen.c -lglut -lGLU -lGL
   or
   g++ -o SetSizeAndPositionOfGLUTWindowOnScreen SetSizeAndPositionOfGLUTWindowOnScreen.c -lglut -lGLU -lGL

Run as :
   ./SetSizeAndPositionOfGLUTWindowOnScreen
*/
