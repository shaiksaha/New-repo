#include <iostream>
using namespace std;
class HostelRoom(){
     private:
     string  rollNumber;
     int messbalance;
     string StudendentName;
     bool isOccupied;

     public:
     HostelRoom(string room){
        roomNumber = room;
        messbalance = 0;
        isOccupied = false;
     }
     void allotRoom(string name,string roll){
           if(!isOccupied){
              StudendentName = name;
              rollNumber = roll;
              isOccupied = true;
              cout << "Room" << roomNumber << "alloted to " << name << endl;

           }
           else{
               cout << "Room is already occupied" << endl;
           }
     }

     void addMessBalance(int amount){
         messbalance += amount;
         cout << "Mess balance updated: $" << messbalance << endl;
     }

    void showRoomDetails(){
            cout << "\n===Room Number===" << endl;
            cour <<"Room: "<<roomNumber << endl;
            if(isOccupied){
                cout << "Student: " << studentName << "roll "
            }
    }
};
int main(){
     
    return 0;
}
// simple calculator 
// grade calculator 
// 