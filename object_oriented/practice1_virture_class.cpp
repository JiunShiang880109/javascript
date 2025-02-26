#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Vehicle{
    public:
    Vehicle(string name, int velocity, int capacity){
        this->name=name;
        this->velocity=velocity;
        this->capacity=capacity;
    }
    string getName(){
        return this->name=name;
    }
    int getVelocity(){
        return this->velocity=velocity;
    }
    int getLocation(){
        return this->location=location;
    }
    vector<string> getPassengers(){

        return this->passengers=passengers;
    }
    int getCapacity(){
        return this->capacity=capacity;
    }

    /* void moveForward(int hours){
        this->location=hours;
    }
    void moveBackward(int hours){
        this->location=hours;
    } */
    //改成抽象函數，就會讓類別變成抽象類別
    virtual void moveForward(int hours)=0;
    virtual void moveBackward(int hours)=0;

    void pushPassenger(string person){
        this->passengers.push_back(person);
    }
    void popPassenger(){

    }

    private:
    string name;
    //int velocity;
    //int location=0;
    vector<string> passengers;
    int capacity;

    protected:
    int velocity;
    int location;
        
};

/* void showPublicMessage(Vehicle vehicle){
    cout<<"["<<vehicle.getName()<<"]"
        <<"vel: "<<vehicle.getVelocity()<<", "
        <<"loc: "<<vehicle.getLocation()<<", "
        <<"#passengers: "<<vehicle.getPassengers().size()
        <<endl;
} */

/* int main(){
    int hours=10;

    Vehicle car("Toyota", 60, 4);
    Vehicle bicycle("Giant", 10, 1);

    car.pushPassenger("Alice");
    bicycle.pushPassenger("Bob");

    car.moveBackward(hours);
    bicycle.moveForward(hours);

    showPublicMessage(car);
    showPublicMessage(bicycle);

    return 0;
} */