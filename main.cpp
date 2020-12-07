#include <windows.h>
#ifdef APPLE_CC
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

static int a1 = 0, a2 = 0, a3 = 0, tx = 0, ty = 0, tz = 0, sx = 1, sy = 1, sz = 1;

void init() {

  // Set a deep purple background and draw in a greenish yellow.
  glClearColor(1, 1, 1, 1.0);

  // Set up the viewing volume: 500 x 500 x 1 window with origin lower left.
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glOrtho(0.0, 500.0, 0.0, 500.0, 0.0, 1.0);
}

void special(int key, int, int) {
  switch (key) {
    case GLUT_KEY_LEFT: (tx -= 1) %= 500; break;
    case GLUT_KEY_RIGHT: (tx += 1) %= 500; break;
    case GLUT_KEY_UP: (ty += 1) %= 500; break;
    case GLUT_KEY_DOWN: (ty -= 1) %= 500; break;
    case GLUT_KEY_F11: (tz += 1) %= 500; break;
    case GLUT_KEY_F12: (tz -= 1) %= 500; break;


    case GLUT_KEY_F2: (a1 += 5) %= 360; break;
    case GLUT_KEY_F3: (a1 -= 5) %= 360; break;
    case GLUT_KEY_F4: (a2 += 5) %= 360; break;
    case GLUT_KEY_F5: (a2 -= 5) %= 360; break;
    case GLUT_KEY_F6: (a3 += 5) %= 360; break;
    case GLUT_KEY_F7: (a3 -= 5) %= 360; break;

    case GLUT_KEY_F8: (sx += 1) %= 500; break;
    case GLUT_KEY_F9: (sx -= 1) %= 500; break;
    case GLUT_KEY_F10: (sx -= 1) %= 500; break;


    default: return;
  }
  glutPostRedisplay();
}

void display() {
glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();

int nodi = 1;
int rasta = 1;
int sun = 1;
int megh = 1;
int fish = 1;


if (nodi == 1) {
    glColor3f(0.0,1.0,.0);
    glBegin(GL_POLYGON);

        glVertex3f(0.0,-0.12,0.0);
        glVertex3f(0.1, -0.10,0.0);
        glVertex3f(0.2,-0.12,0.0);
        glVertex3f(0.3, -0.10,0.0);
        glVertex3f(0.4,-0.12,0.0);
        glVertex3f(0.5, -0.10,0.0);
        glVertex3f(0.6,-0.12,0.0);
        glVertex3f(0.7, -0.10,0.0);
        glVertex3f(0.8,-0.12,0.0);
        glVertex3f(0.9, -0.10,0.0);
        glVertex3f(1.0,-0.13,0.0);

        glVertex3f(1.0,-0.62,0.0);
        glVertex3f(0.9, -0.60,0.0);   // NODI
        glVertex3f(0.8,-0.62,0.0);
        glVertex3f(0.7, -0.60,0.0);
        glVertex3f(0.6,-0.62,0.0);
        glVertex3f(0.5, -0.60,0.0);
        glVertex3f(0.4,-0.62,0.0);
        glVertex3f(0.3, -0.60,0.0);
        glVertex3f(0.2,-0.62,0.0);
        glVertex3f(0.1,-0.60,0.0);
        glVertex3f(0.0,-0.62,0.0);

        glVertex3f(-0.1,-0.6,0.0);
        glVertex3f(-0.2, -0.62,0.0);
        glVertex3f(-0.3,-0.6,0.0);
        glVertex3f(-0.4, -0.62,0.0);
        glVertex3f(-0.5,-0.6,0.0);
        glVertex3f(-0.6, -0.62,0.0);
        glVertex3f(-0.7,-0.6,0.0);
        glVertex3f(-0.8, -0.62,0.0);
        glVertex3f(-0.9,-0.6,0.0);
        glVertex3f(-1.0, -0.62,0.0);

        glVertex3f(-1.0,-0.11,0.0);
        glVertex3f(-0.9,-0.12,0.0);
        glVertex3f(-0.8,-0.10,0.0);
        glVertex3f(-0.7,-0.12,0.0);
        glVertex3f(-0.6,-0.10,0.0);
        glVertex3f(-0.5,-0.12,0.0);
        glVertex3f(-0.4,-0.10,0.0);
        glVertex3f(-0.3,-0.12,0.0);
        glVertex3f(-0.2,-0.10,0.0);
        glVertex3f(-0.1,-0.12,0.0);
        glVertex3f(-0.0,-0.10,0.0);

glEnd();

}

glPushMatrix();
    glColor3f(1.0,0.5,1.0);
    glRotatef(30,a1,a2,a3);
    glBegin(GL_POLYGON);

        glColor3f(1.0,0.0,1.0);
        glVertex3f(-0.3,-0.45,0.0);
        glVertex3f(-0.3,-0.25,0.0);     //Boat-bottom
        glVertex3f(-0.55,-0.25,0.0);
        glVertex3f(-0.55,-0.45,0.0);

        glColor3f(1.0,0.0,1.0);
        glVertex3f(-0.55,-0.25,0.0);
        glVertex3f(-0.55,-0.45,0.0);
        glVertex3f(-0.65,-0.40,0.0);    // boat-front-length
        glVertex3f(-0.7,-0.35,0.0);
        glVertex3f(-0.65,-0.30,0.0);
        glVertex3f(-0.55,-0.25,0.0);

        glColor3f(1.0,0.0,1.0);
        glVertex3f(-0.55,-0.45,0.0);
        glVertex3f(-0.55,-0.45,0.15);
        glVertex3f(-0.3,-0.45,0.15);
        glVertex3f(-0.3,-0.45,0.0);
        glVertex3f(-0.55,-0.45,0.0);


        glColor3f(1.0,0.0,1.0);
        glVertex3f(-0.55,-0.25,0.0);
        glVertex3f(-0.55,-0.25,0.15);
        glVertex3f(-0.3,-0.25,0.15);    //opposite-view
        glVertex3f(-0.3,-0.25,0.0);
        glVertex3f(-0.55,-0.25,0.0);

        glColor3f(1.0,0.0,0.0);
        glVertex3f(-0.3,-0.45,0.05);
        glVertex3f(-0.3,-0.25,0.05);
        glVertex3f(-0.3,-0.25,0.0);
        glVertex3f(-0.3,-0.45,0.0);    //back-view
        glVertex3f(-0.3,-0.45,0.05);

        glColor3f(1.0,0.0,0.0);
        glVertex3f(-0.3,-0.45,0.05);
        glVertex3f(-0.3,-0.45,0.10);  //back-first
        glVertex3f(-0.3,-0.40,0.10);
        glVertex3f(-0.3,-0.40,0.05);

        glColor3f(1.0,0.0,0.0);
        glVertex3f(-0.3,-0.25,0.05);
        glVertex3f(-0.3,-0.25,0.10);
        glVertex3f(-0.3,-0.30,0.10);   //back-second
        glVertex3f(-0.3,-0.30,0.05);


        glColor3f(1.0,0.5,1.0);
        glVertex3f(-0.55,-0.25,0.0);
        glVertex3f(-0.55,-0.25,0.15);
        glVertex3f(-0.65,-0.30,0.17);    // boat-front-length
        glVertex3f(-0.73,-0.35,0.19);
        glVertex3f(-0.65,-0.40,0.17);
        glVertex3f(-0.55,-0.45,0.15);
        glVertex3f(-0.55,-0.45,0.0);
        glVertex3f(-0.65,-0.40,0.0);
        glVertex3f(-0.7,-0.35,0.0);
        glVertex3f(-0.65,-0.30,0.0);
        glVertex3f(-0.55,-0.25,0.0);




glEnd();
glPopMatrix();




if (rasta == 1){
    glColor3f(0.5,0.5,1.0);
    glBegin(GL_POLYGON);
        glVertex3f(0.3,0.28,0.0);
        glVertex3f(0.35,0.4,0.0);
        glVertex3f(0.4,0.4,0.0);
        glVertex3f(0.3,0.25,0.0);                  // Rasta
        glVertex3f(0.1,0.1,0.0);
        glVertex3f(-0.1,-0.11,0.0);
        glVertex3f(-0.15,-0.11,0.0);
glEnd();
}


glPushMatrix();
    glColor3f(1.0,0.0,1.0);
    //glRotatef(45,a1,a2,a3);


    glBegin(GL_POLYGON);
        glVertex3f(0.3,0.4,0.0);
        glVertex3f(0.5, 0.4,0.0);
        glVertex3f(0.5, 0.65,0.0);  // Bottom
        glVertex3f(0.3,0.65,0.0);                   // GHOR

        //glColor3f(1.0,0.0,1.0);
        glVertex3f(0.3,0.65,0.0);
        glVertex3f(0.5, 0.65,0.0);    //back
        glVertex3f(0.5, 0.65,0.3);
        glVertex3f(0.3,0.65,0.3);

        //glColor3f(0.0,1.0,1.0);
        glVertex3f(0.3,0.4,0.0);
        glVertex3f(0.3,0.65,0.0);
        glVertex3f(0.3,0.65,0.3);      //left
        glVertex3f(0.3,0.4,0.3);


        //glColor3f(1.0,1.0,0.0);
        glVertex3f(0.3,0.4,0.0);
        glVertex3f(0.5,0.4,0.0);
        glVertex3f(0.5,0.4,0.3);   //front
        glVertex3f(0.3,0.4,0.3);

        //glColor3f(1.0,0.0,1.0);
        glVertex3f(0.5,0.4,0.0);
        glVertex3f(0.5,0.65,0.0);
        glVertex3f(0.5, 0.65,0.3);    //right
        glVertex3f(0.5, 0.4,0.3);


glEnd();

glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);


        glVertex3f(0.28,0.38,0.30);
        glVertex3f(0.52, 0.38,0.30);
        glVertex3f(0.52, 0.67,0.30);                       // top
        glVertex3f(0.28,0.67,0.30);

glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.5,1.0,1.0);
    glVertex3f(0.32,0.4,0.13);
    glVertex3f(0.35,0.4,0.13);
    glVertex3f(0.35,0.4,0.17);    // Janala 1
    glVertex3f(0.32,0.4,0.17);

glEnd();
glBegin(GL_POLYGON);
    glColor3f(0.5,1.0,1.0);
    glVertex3f(0.45,0.4,0.13);
    glVertex3f(0.48,0.4,0.13);
    glVertex3f(0.48,0.4,0.17);    // Janala 2
    glVertex3f(0.45,0.4,0.17);


glEnd();
glPopMatrix();

/*if(fish == 1){
    glBegin(GL_POLYGON);

    //glRotatef(45,a1,a2,a3);
    glColor3f(1.0,1.0,0.0);

    glVertex3f(0.35,-0.3,0.0);
    glVertex3f(0.32,-0.3,0.03);
    glVertex3f(0.29,-0.3,0.05);    // Fish
    glVertex3f(0.26,-0.3,0.07);
    glVertex3f(0.29,-0.3,0.09);
    glVertex3f(0.32,-0.3,0.11);
    glVertex3f(0.35,-0.3,0.13);
    glVertex3f(0.35,-0.3,0.0);

glEnd();
}
*/
if(fish == 1){
    glBegin(GL_POLYGON);
    glVertex3f(0.35,-0.3,0.13);
    glVertex3f(0.38,-0.3,0.11);
    glVertex3f(0.41,-0.3,0.09);
    glVertex3f(0.44,-0.3,0.07);
    glVertex3f(0.41,-0.3,0.05);
    glVertex3f(0.38,-0.3,0.03);
    glVertex3f(0.35,-0.3,0.0);
    glVertex3f(0.35,-0.3,0.13);

glEnd();
}


if (sun == 1){

    glColor3f(1.0,0.0,0.0);

    glTranslatef(0.9,0.9,0.0);
    glutSolidSphere(0.08,36,2);

}




glFlush();
}

// Initializes GLUT, the display mode, and main window; registers callbacks;
// enters the main event loop.
int main(int argc, char** argv) {

  // Use a single buffered window in RGB mode (as opposed to a double-buffered
  // window or color-index mode).
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // Position window at (80,80)-(480,380) and give it a title.
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(500, 500);
  glutCreateWindow("Lake");

  // Tell GLUT that whenever the main window needs to be repainted that it
  // should call the function display().
  glutDisplayFunc(display);

  // Tell GLUT to start reading and processing events.  This function
  // never returns; the program only exits when the user closes the main
  // window or kills the process.
  glutSpecialFunc(special);
  init();
  glutMainLoop();
}
