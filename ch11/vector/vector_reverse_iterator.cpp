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

    cout << "초기 vec 상태" << endl;
    print_vector(vec);

    cout << "역으로 vec 출력하기!!" << endl;
    vector<int>::reverse_iterator r_iter = vec.rbegin();
    for (; r_iter != vec.rend(); r_iter++) {
        cout << *r_iter << endl;
    }
}