
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

   glutDisplayFunc (draw); 

   /* Beginning Event Processing : 

      After a GLUT program has done initial setup such as creating windows, 
        GLUT programs enter the GLUT event processing loop by calling glutMainLoop

      glutMainLoop : glutMainLoop enters the GLUT event processing loop

      Usage :
              void glutMainLoop(void);

      glutMainLoop routine should be called at most once in a GLUT program
      Once called, glutMainLoop routine will never return

      It will call as necessary any callbacks that have been registered   */

   // Inform GLUT to start our program, by executing a loop that will continue until the program ends

   glutMainLoop (); //initialize the OpenGL loop cycle

   return(0);
 }

/* compile as : 
   gcc -o StartGLUTEventProcessingLoop StartGLUTEventProcessingLoop.c -lglut -lGLU -lGL
   or
   g++ -o StartGLUTEventProcessingLoop StartGLUTEventProcessingLoop.c -lglut -lGLU -lGL

Run as :
   ./StartGLUTEventProcessingLoop
*/
