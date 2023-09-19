#include <iostream>
#include <string>
using namespace std;

class InstrumentoMusical {
  public:
    virtual void Tocar() = 0;
};

class Violino : public InstrumentoMusical {
  public:
    void Tocar() override {
      cout << "tocar violino" << endl;
    }
};

class Piano : public InstrumentoMusical {
  public:
    void Tocar() override {
      cout << "tocar piano" << endl;
    }
};

int main()
{
    Piano p;
    Violino v1;
    Violino v2;

    InstrumentoMusical *instrumentos[3];

    instrumentos[0] = &p;
    instrumentos[1] = &v1;
    instrumentos[2] = &v2;

    for (int i =0; i<3; i++) {
      instrumentos[i]->Tocar();
    }

    return 0;
}
