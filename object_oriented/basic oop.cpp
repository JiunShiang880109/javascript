#include<iostream>
#include<string>

using namespace std;

class Cat{
   public://公開成員，可從外部調用
    /*Cat(string name) {
        this->name = name;//this代表指標，調用物件成員的方式是用->
        this->barking = "meow";
    }
    void saySomething() {
        cout << this->name << ": " << this->barking
             << endl;
    }*/
    
   //慣用寫法
    string getName(){
        return this->name;
    }
    /*string getbark(){
        return this->barking;
    } */

    void setName(string name){
        if(name.length()>10){
            cerr<<"name.length() should <=10"<<endl;
        }
        this->name=name;
    }
/*     void setbark(string barking){
        this->barking=barking;
    } */

   private://私人成員，無法從外部調用
    string name;
    string barking;
};

int main() {
    Cat c1;
    Cat c2;

    c1.setName("Alice");
    c2.setName("Bob");
    
    cout<<c1.getName()<<c2.getName()<<endl;//Alice
    
    return 0;
}