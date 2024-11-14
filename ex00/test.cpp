#include <iostream>

class Student {
    private:
        std::string Name;
    public:
        Student() : Name("Hassan"){};
    std::string getName(){
        return Name;
    }
    void setName (std::string name)
    {
        Name = name;
    }
};

int main()
{
    Student student;

    student.setName("Hamza");
    std::cout << "Your name is: " << student.getName() << std::endl;
}