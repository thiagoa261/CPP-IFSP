#include <iostream>
#include <string>
using namespace std;

template <typename tipo>
    class Conversor {
        private:
            tipo dado;

        public:
            Conversor(tipo d) : dado(d) {}

            int ConverteInt() {
                return static_cast<int>(this->dado);
            }

            float ConverteFloat() {
                return static_cast<float>(this->dado);
            }

            string ConverteString() {
                return to_string(this->dado);
            }
    };

template <>
    class Conversor<string> {
        private:
            string dado;

        public:
            Conversor(string d) : dado(d) {}

            int ConverteInt() {
                return stoi(this->dado);
            }

            float ConverteFloat() {
                return stof(this->dado);
            }
    };

int main()
{
    Conversor<float> c1(1.8);
    cout << c1.ConverteInt() << endl;
    cout << c1.ConverteString() << endl;

    cout << "\n";

    Conversor<int> c2(3);
    cout << c2.ConverteFloat() << endl;
    cout << c2.ConverteString() + "palavra" << endl;

    cout << "\n";

    Conversor<string> c3("132");
    cout << c3.ConverteInt() + 243 << endl;
    cout << c3.ConverteFloat() + 10.93 << endl;

    return 0;
}
