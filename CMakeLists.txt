# CMake 프로그램의 최소 버전
cmake_minimum_required(VERSION 3.11)

# 프로젝트 정보
project(
  ModooCode
  VERSION 0.1
  DESCRIPTION "예제 프로젝트"
  LANGUAGES CXX)

# 확인할 디렉토리 추가
add_subdirectory(lib)

add_executable (program main.cc)

# program 에 shape 를 링크
target_link_libraries(program shape)

#add_executable (program main.cc foo.cc)
#target_compile_options(program PUBLIC -Wall -Werror)
#target_include_directories(program PUBLIC ${CMAKE_SOURCE_DIR}/includes)
