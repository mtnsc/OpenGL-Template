#pragma once

#include <stdio.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int loadGLFW();
GLFWwindow* createWindow(int width, int height, const char* title);
int bindGL();
int destroyWindow(GLFWwindow* window);
int unloadGLFW();