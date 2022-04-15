#include <iostream>
#include <vector>

using namespace std;

class Camera{
    
    vector<int> coordinate;
    
    void Camera_on(){
        
       // if(bool a = true){
        // return a;
        //}
        //else{
          //  return
        //}
        
    }
    
   
    void Camera_off(){

    }

     void detect() {
    
    }

    void observe(){
       // if(){

       // }

    }

    void signal_robot(){

    }

    void Camera_go_robot(){

    }

};


class Controler {
     public:

    virtual void get_comand(){
        cout << "Controler";
    }
    virtual ~Controler(){}  
};


class Cameracontroler:  public  Controler {
  public:

  void get_comand(){
      cout << "Cameracontroler";
      
      }

};


class Netcontroler: public Controler{
  public:

  void get_comand(){

  }

};

class Consolecontroler : public Controler{
 public:

     void get_comand(string signal){
     cout << "Consolecontroler";
    
    }
     
    
 

};


class Robot {
private:
    
    Controler *ptr;
    int track;
    int poss;

public:

    Robot(Controler*  pcont): ptr(pcont) {}

    void get( ){

        ptr -> get_comand();
    }

    ~Robot(){
        
        delete ptr;

    }
    
    
    void Robot_off(){

    }

    void Robot_on(){

    }

    void Robot_coordinate(){

    }
    
    void  Robot_track() {

    }

    void Robot_go() {

    }

    void Robot_stop(){

    }

    void Robot_clean() {

    }

    void signal_to_Camera(){

    }

};

int main(){
    
    Robot foo(new Consolecontroler);
    foo.get();

    return 0;
}

