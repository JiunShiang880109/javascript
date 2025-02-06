#include <string>
#include <iostream>
using namespace std;

class Cat{
    public://空開成員可從外部調用
        Cat(string animalName){//animalName建構子
            //name=animalName;
            this->name=name;//this代表指標，調用物件指標成員的方式是用->
            //barking="meow";
            this->barking="meow";
        }
        void saySomething(){
            cout<<name<<":"<<barking<<endl;

        }
    private://私有成員無法從外部調用
        string name;
        string barking;

};

int main(){
    Cat c1("Alice");
    Cat c2("Bob");

    c1.saySomething();
    c2.saySomething();

    return 0;
}