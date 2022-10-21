#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void print_vector(vector<T> &vec) {
    for (typename vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
        cout << *itr << endl;
    }
}

template<typename T>
void print_vector_range_based(vector<T> &vec) {
    for (const auto& elem : vec) {
        cout << elem << endl;
    }
}

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "print_vector" << endl;
    print_vector(vec);

    cout << "print_vector_range_based" << endl;
    print_vector_range_based(vec);
}