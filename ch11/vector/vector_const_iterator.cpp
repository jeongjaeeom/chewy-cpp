#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void print_vector(vector<T> &vec) {
    for (typename vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
        cout << *itr << endl;
    }
}

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    // itr은 vec[2]를 가리킨다.
    vector<int>::iterator itr = vec.begin() + 2;

    // vec[2]의 값을 50으로 바꾼다.
    *itr = 50;

    cout << "-------------" << endl;
    print_vector(vec);

    vector<int>::const_iterator citr = vec.begin() + 2;
    // 상수 반복자가 가리키는 값은 바꿀 수 없다. 불가능!
    // *citr = 30;
}