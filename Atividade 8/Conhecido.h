#include <string>

class Conhecido: public Pessoa{

    private:

        string email;

    public:

        Conhecido();

        string getEmail();
        void setEmail(string email);

        ~Conhecido();

};