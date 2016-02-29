#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
using namespace std;

void printMat4(glm::mat4 mat)
{
    printf("%f %f %f %f\n", mat[0][0], mat[0][1], mat[0][2], mat[0][3]);
    printf("%f %f %f %f\n", mat[1][0], mat[1][1], mat[1][2], mat[1][3]);
    printf("%f %f %f %f\n", mat[2][0], mat[2][1], mat[2][2], mat[2][3]);
    printf("%f %f %f %f\n", mat[3][0], mat[3][1], mat[3][2], mat[3][3]);
}

void printVec3(glm::vec3 vec)
{
    printf("%f %f %f\n", vec.x, vec.y, vec.z);
}

int main (int argc, char *argv[])
{

    glm::mat4 Projection = glm::perspective(45.0f, 4.0f / 3.0f, 0.1f, 100.0f);

    glm::mat4 View = glm::lookAt(
            glm::vec3(4,3,3),
            glm::vec3(0,0,0),
            glm::vec3(0,1,0)
            );
    glm::mat4 Model = glm::mat4(1);

    glm::mat4 identity = glm::mat4(1);

    glm::mat4 inter = Projection * View * Model;
    printMat4(inter);

    return 0;
}

