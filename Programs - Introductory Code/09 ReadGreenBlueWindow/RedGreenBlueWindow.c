
 #include <GL/gl.h>
 #include <GL/glut.h>

 #include <unistd.h>

 void draw( void )  //Drawing funciton
 {   
   glClearColor(1,0,0,1); //Background color
   glClear(GL_COLOR_BUFFER_BIT );
   sleep(2);  
   glFlush(); //Draw order

   glClearColor(0,1,0,1); //Background color
   glClear(GL_COLOR_BUFFER_BIT );
   sleep(2);  
   glFlush(); //Draw order

   glClearColor(0,0,1,1); //Background color
   glClear(GL_COLOR_BUFFER_BIT );
   sleep(2);  
   glFlush(); //Draw order
 }
 
 int main(int argc, char **argv) //Main program
 {
   glutInit(&argc, argv);   
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB ); //Simple buffer
   glutInitWindowSize (512, 384); 
   glutInitWindowPosition (150, 150); 
   glutCreateWindow ("Example OpenGL Window : Green Window");   
   glutDisplayFunc(draw);//Call to the drawing function
   glutMainLoop();
   return 0;
 }

/* compile as : 
   gcc -o RedGreenBlueWindow RedGreenBlueWindow.c -lglut -lGLU -lGL
   or
   g++ -o RedGreenBlueWindow RedGreenBlueWindow.c -lglut -lGLU -lGL

   Run as :
   ./RedGreenBlueWindow
*/
