#include <string.h>

class User
{
    private:
    char* name = new char[20];
    int* score = new int;

    public:
    int getScore()
    {
        return *score;
    }

    char* getName()
    {
        return name;
    }

    void increaseScore()
    {
        (*score)++;
    }

    void resetScore()
    {
        (*score) = 0;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    ~User()
    {
        delete []name;
        delete score;
    }
};