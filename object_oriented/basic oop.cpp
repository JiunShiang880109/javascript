#include<iostream>
#include<string>

using namespace std;

class Cat {
   public://公開成員，可從外部調用
    Cat(string name) {
        this->name = name;//this代表指標，調用物件成員的方式是用->
        this->barking = "meow";
    }
    void saySomething() {
        cout << this->name << ": " << this->barking
             << endl;
    }

   private://私人成員，無法從外部調用
    string name;
    string barking;
};

int main() {
    Cat c1("Alice");
    Cat c2("Bob");

    c1.saySomething();
    c2.saySomething();

    return 0;
}