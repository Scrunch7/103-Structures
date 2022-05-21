#include <iostream>
#include <string>



struct Person { //A1--
    std::string name = "";
    int age = 0;
    std::string bloodtype = "";

    int grades[5] = { 0, 0, 0, 0, 0 };
};

struct PersonConstructed { //A1--
    std::string name = "";
    int age = 0;
    std::string bloodtype = "";




    //Person(std::string n, int a, std::string bt) { //A2--
    //    name = n;
    //    age = a;
    //    bloodtype = bt;
    //}
};

int main() {
    
    //created an instance of our structure with the nameof the person we are creating
    Person rob; //A1--  the brackets are A2--
    rob.name = "Rob"; //A1--
    rob.age = 24;
    rob.bloodtype = "O";

    for (int i = 0; i < 5; i++){
        std::cin >> rob.grades[i];
    }


    std::cout << sizeof(rob);
    std::cout << "hello";



    /*Person people[5] = {
        rob("Rob", 24, "O");
    }*/
}

