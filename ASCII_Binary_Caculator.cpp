#include <vector>
#include <algorithm>
#include <iostream>
std::string s_input;
std::string new_s;
void ASCII_ENCODE() {
    std::cout<<"ASCII encoding"<<std::endl;
    std::cin>>s_input;
    int n = static_cast<int>(s_input.length());
    std::cout<<"number of charcters: " + n<<std::endl;
    for (int i = 0; i <= n; i++) {
        int number = static_cast<int>(s_input[i]);
        new_s = "";
        while (number > 0) {
            if (number % 2) {new_s.push_back('1');}
            else { new_s.push_back('0'); }
            number /= 2;
        } std::reverse(new_s.begin(), new_s.end());
        std::cout<<"0"+new_s;
    }
      std::cout<<" "<<std::endl;
}
int main() { ASCII_ENCODE(); }
