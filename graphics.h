#ifndef graphics_h
#define graphics_h
#include <glfw/glfw3.h>
#include <stdlib.h>
#include <stdio.h>

// Program initialization NOT OpenGL/GLUT dependent,
// as we haven't created a GLUT window yet
void initClouds();
void initGrass();
void initBuildings();
void initUser();
void init();

// Initialize OpenGL Graphics
void InitGL();

// Callback functions for GLUT

// Draw the window - this is where all the GL actions are
void display();

void initClouds();

void initGrass();
void initBuildings();

void initUser();
void init();

/* Initialize OpenGL Graphics */
void initGL();

void error_callback(int error, const char* description);
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);

void processInput(GLFWwindow *window);
void cloudTimer(int dummy);
void buildingTimer(int dummy);

void kbd(unsigned char key, int x, int y);
void kbdS(int key, int x, int y);
void cursor(int x, int y);
void mouse(GLFWwindow* window, int button, int state, int x, int y);




#endif /* graphics_h */
