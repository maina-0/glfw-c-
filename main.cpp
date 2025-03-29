#include <iostream>
#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(){ 
    glfwInit();
    glfwDefaultWindowHints();
    if (glfwCreateWindow(1920,720,"OpenGL",nullptr,nullptr) == nullptr){
        std::cout<<"failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    glewExperimental=GL_TRUE;

    if (glewInit()!= GLEW_OK){
        std::cout<<"Glew Failed to initialize\n";
        return -1;
    }

    return 0;
}
