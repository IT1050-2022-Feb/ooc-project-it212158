//MLB_02.02_05_VehicleRentalSystem
//IT21215810
//class Admin

#include <iostream>
#include <cstring>
#include "Feedback.h"
#include "Employee.h"

using namespace std;

class Admin : public Employee{
    protected:
        int adminID;
        Feedback* Fb[5];
    
    public :
        Admin()
        {
          strcpy(name, "");
          contactNumber = 0;
          strcpy(email, "");
          strcpy(adress, "");
          strcpy(position, "");
          strcpy(NIC, "");
          adminID = 0;
        };
        
        char replyFeedback();
        void viewFeedback();
        
        ~Admin()
        {
            cout << "Admin " << adminID << "deleted " << endl ;
        };
};
