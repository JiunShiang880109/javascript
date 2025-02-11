#include<iostream>
#include<string>
#include "practice1_virture_class.cpp"


using namespace std;


class Car : public Vehicle {
    private:
    bool engine;

    public:
    Car(string name):Vehicle(name, 60, 4){
        this->engine=false;
    }

    void moveForward(int hours) override{
        cout<<"Car :: move forward"<<endl;
        this->location+=(engine? hours* this->velocity:0);
    }
    void moveBackward(int hours) override{
        cout<<"Car :: move backward"<<endl;
        this->location-=(engine? hours* this->velocity:0);
    }

    void lauchEngine(){
        this->engine=true;
    }
    void flameout(){
        this->engine=false;;
    }
};

class Bicycle: public Vehicle{

    public:
    Bicycle(string name):Vehicle(name, 60, 1){}

    void moveForward(int hours) override{
        cout<<"Bicycle :: move forward"<<endl;
        this->location+=hours* this->velocity;
    }
    void moveBackward(int hours) override{
        cout<<"Bicycle :: move backward"<<endl;
        this->location-=hours* this->velocity;
    }
};

int main(){
    vector<Vehicle*> vehicles;

    vehicles.push_back(new Car("Toyota"));
    vehicles.push_back(new Bicycle("Giant"));

    for(auto vehicle: vehicles){
        vehicle->moveForward(10);
    }

/*     Vehicle* car = new Car("Toyota");
    Vehicle* bicycle = new Bicycle("Giant"); */

/*     car->moveForward(10);
    bicycle->moveForward(10); */

    return 0;
}