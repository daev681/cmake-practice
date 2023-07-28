#include <iostream>

#include "foo.h"
#include "shape.h"

int main() {
  //int i; 컴파일 옵션 지정하기
  Rectangle* rectangle = new Rectangle(5,20);
  std::cout << "Get size" << rectangle->GetSize() << std::endl;
  return 0;
}