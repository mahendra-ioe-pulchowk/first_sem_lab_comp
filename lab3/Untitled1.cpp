#include <iostream>
#include <vector>


class tictactoe {
public:
    tictactoe* ch = nullptr;
    int sz;

    tictactoe() {
        sz = 0;
    }
    tictactoe(tictactoe* c, int sz) {
        ch = c;
        std::cout << "Initialized\n";
    }

};

int main() {
    tictactoe t1 = tictactoe();
    tictactoe t2 = tictactoe(&t1, 3);

    std::cout << "t1 sz:" << t1.sz << ", t2 sz : " << t2.sz << "\n";
}
