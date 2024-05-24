#include <GLFW/glfw3.h>

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

  while (!glfwWindowShouldClose(win)) {
    // glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(win);
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
