#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(void)
{
   /* Initialize the library */
    if (!glfwInit()) return -1;

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* pWindow = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!pWindow)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(pWindow);


    if (glewInit() != 0) return -1;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(pWindow))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
            glVertex2f(0.5f, 0.3f);
            glVertex2f(0.4f, -0.3f);
            glVertex2f(-0.5f, 0.6f);
            
            glVertex2f(0.9f, -0.1f);
            glVertex2f(-0.5f, -0.85f);
            glVertex2f(0.6f, -0.12f);
        glEnd();


        /* Swap front and back buffers */
        glfwSwapBuffers(pWindow);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}