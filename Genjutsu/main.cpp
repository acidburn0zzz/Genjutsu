#include "main.h"

/*
 * FUNCTION DEFINITIONS
 */

void display(void)
{
    int now = glutGet(GLUT_ELAPSED_TIME);
    if (now - last_frame_time < BOX_MOVE_INTERVAL)
    {
        // It's not yet time to update the frame
        return;
    }
 
    int window_width = glutGet(GLUT_WINDOW_WIDTH);
    
    box_X += move_rate;
    if (box_X > window_width || box_X < 0)
    {
        move_rate = -move_rate;
    }
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glPushMatrix();
    glTranslatef(box_X, 0.0f, 0.0f);
    
    glBegin(GL_QUADS);
    glVertex2f(  0.0f,   0.0f);
    glVertex2f(128.0f,   0.0f);
    glVertex2f( 64.0f, 140.0f);
    glVertex2f(128.0f, 128.0f);
    glVertex2f(  0.0f, 128.0f);
    glEnd();
    glPopMatrix();
    
    glutSwapBuffers();
    
    // Update the last update time
    last_frame_time = now;
}

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, 0, height);
    glMatrixMode(GL_MODELVIEW);
}

void idle(void)
{
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(640, 480);
    
    glutCreateWindow("Genjutsu");
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);
    
    glutMainLoop();
    return EXIT_SUCCESS;
}