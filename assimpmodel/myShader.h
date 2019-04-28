/*
 *    Copyright 2016 Anand Muralidhar
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef MY_SHADER_H
#define MY_SHADER_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <stdio.h>
#include <string>

void MyGLInits();
void CheckGLError(std::string functionName);

GLuint LoadShaders(std::string vertexShaderCode, std::string fragmentShaderCode);
GLuint GetAttributeLocation(GLuint programID, std::string variableName);
GLint GetUniformLocation(GLuint programID, std::string uniformName);

#endif //MY_SHADER_H
