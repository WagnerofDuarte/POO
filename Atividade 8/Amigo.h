#include <string>

class Amigo: public Pessoa{

    private:

        string dataDeAniversario;

    public:

        Amigo();

        string getDataDeAniversario();
        void setDataDeAniversario(string data);

};