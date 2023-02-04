#include <iostream>

int main()
{   
    int x;
    std::cin >> x; // 값을 입력 받음 
    std::cout << "입력 받은 값은 " << x << std::endl;
    
    std::cout << "Hello World" << std::endl;
    std::cout << "hi";
 
    return 0;
}

// std::cout는 화면에 출력을 시켜주는 역할을 함 
// std::cout를 하고 뒤에 << std::endl을 하면 줄바꿈이 된다.
// std::cin를 하고 >> (원래는 <<) 이렇게 하면 콘솔에서 입력을 받는다.
