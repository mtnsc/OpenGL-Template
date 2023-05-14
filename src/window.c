#include "window.h"

int loadGLFW() {
    if (glfwInit() != GLFW_TRUE) {
        const char* error_message;
		glfwGetError(&error_message);
		fprintf(stderr, "Failed to initialize GLFW: %s", error_message);
		return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

GLFWwindow* createWindow(int width, int height, const char* title) {
    GLFWwindow* window = glfwCreateWindow(width, height, title, NULL, NULL);

    if (window == NULL) {
		const char* error_message;
		glfwGetError(&error_message);
		fprintf(stderr, "Failed to create window: %s", error_message);
		return NULL;
	}

	glfwMakeContextCurrent(window);

    return window;
}

int bindGL(int width, int height) {
    glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK) {
		fprintf(stderr, "Failed to initialize GLEW.");
		return 1;
	}
    
	glViewport(0, 0, width, height);
}

int destroyWindow(GLFWwindow* window) {
    glfwDestroyWindow(window);
}

int unloadGLFW() {
    glfwTerminate();
}