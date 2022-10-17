#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    // 전체 벡터를 출력하기
    for (std::vector<int>::size_type i = 0; i < vec.size(); i++) {
        std::cout << "vec의 " << i + 1 << "번째 원소: " << vec[i] << std::endl;
    }

    // int arr[4] = {10, 20, 30, 40}
    // *(arr + 2) == arr[2] == 30;
    // *(itr + 2) == vec[2] == 30;
    vector<int>::iterator  itr = vec.begin() + 2;
    cout << "3 번쨰 원소: " << *itr << std::endl;

}