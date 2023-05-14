#include "window.h"

#define WINDOW_TITLE "OpenGL Template"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

int main()
{
	loadGLFW();
	GLFWwindow* window = createWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
	bindGL();

    while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
		glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
	}

	destroyWindow(window);
	unloadGLFW();

	return 0;
}