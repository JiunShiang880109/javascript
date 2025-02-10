#include<iostream>
#include<string>
#include<vector>
#include "oop_practice1.cpp"

using namespace std;
/* 今天考慮說我們要建立一個新的類別叫做 Car，他除了具備交通工具所需要的要素外，
還需要有引擎發動與否的控制處理 (如果引擎沒有發動，那他的移動速率就是零)。 */
class Car: public Vehicle{
    private:
    bool engine;

    public:
    Car(string name):Vehicle(name, 60, 4){
        this->engine=false;
    }

    //override moveForward method
    void moveForward(int hours){
        if(this->engine){
            //call parent methoud written in Vehicle class
            Vehicle::moveForward(hours);
        }
    }

    //override moveBackward method
    void moveBackward(int hours){
        if(this->engine){
            //call parent methoud written in Vehicle class
            Vehicle::moveBackward(hours);
        }
    }

    void lauchEngine(){
        this->engine=true;
    }
    void flameout(){
        this->engine=false;;
    }
};
//showPubliceMessage function is overloaded 繼承不同類別
void showPublicMessage(Car vehicle){
    cout<<"["<<vehicle.getName()<<"]"
        <<"vel: "<<vehicle.getVelocity()<<", "
        <<"loc: "<<vehicle.getLocation()<<", "
        <<"#passengers: "<<vehicle.getPassengers().size()
        <<endl;
}

void showPublicMessage(Vehicle vehicle){
    cout<<"["<<vehicle.getName()<<"]"
        <<"vel: "<<vehicle.getVelocity()<<", "
        <<"loc: "<<vehicle.getLocation()<<", "
        <<"#passengers: "<<vehicle.getPassengers().size()
        <<endl;
}

int main(){
    int hours=10;
    Car car("Toyota");
    Vehicle bicycle("Giant", 10, 1);

    car.pushPassenger("Alice");
    bicycle.pushPassenger("Bob");

    car.moveBackward(hours);
    bicycle.moveForward(hours);

    showPublicMessage(car);
    showPublicMessage(bicycle);

    car.lauchEngine();
    car.moveForward(hours);

    showPublicMessage(car);
    return 0;
}