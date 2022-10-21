#include <iostream>
#include <map>
#include <string>

template<typename K, typename V>
void print_map(const std::map<K, V> &m) {
    // kv에는 맵의 key와 value가 std::pair로 들어간다.
    for (const auto &kv: m) {
        std::cout << kv.first << " " << kv.second << std::endl;
    }
}

int main() {
    std::map<std::string, double> pitcher_list;

    pitcher_list["오승환"] = 3.58;
    // 류현진의 방어율을 맵에서 검색하였을 때, 0 이라는 값이 나왔습니다.
    // 없는 값을 참조하 였으니 오류가 발생해야 정상인데 오히려 값을 돌려주었네요.
    // 이는 [] 연산자가, 맵에 없는 키를 참조하게 되면,
    // 자동으로 값의 디폴트 생성자를 호출해서 원소를 추가해버리기 때문입니다.
    // 따라서 되도록이면 find 함수로 원소가 키가 존재하는지 먼저 확인 후에, 값을 참조하는 것이 좋습니다.
    std::cout << "류현진 방어율은? " << pitcher_list["류현진"] << std::endl;

    std::cout << "----------------" << std::endl;
    print_map(pitcher_list);
}