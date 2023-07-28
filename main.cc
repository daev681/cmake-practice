#include <iostream>

#include "foo.h"

int main() {
  //int i; 컴파일 옵션 지정하기
  std::cout << "Foo : " << foo() << std::endl;
  return 0;
}