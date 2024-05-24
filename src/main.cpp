#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(void) {
  GLFWwindow* win;

  if (!glfwInit()) {
    return -1;
  }

  win = glfwCreateWindow(640, 480, "Hello!", NULL, NULL);

  if (!win) {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(win);

  if (!gladLoadGL()) {
    std::cout << "Can't load GLAD :((" << std::endl;
    return -1;
  }

  std::cout << "OpenGL " << GLVersion.major << "." << GLVersion.minor << std::endl;

  glClearColor(0, 1, 0, 1);

  while (!glfwWindowShouldClose(win)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(win);
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
