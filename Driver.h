//MLB_02.02_05_VehicleRentalSystem
//IT21215810
//Driver class

#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace std;


class Driver: public Employee{

   protected:
        int dID;
        int licenseNo;

  public:
      Driver()
      {
          strcpy(name, "");
          contactNumber = 0;
          strcpy(email, "");
          strcpy(adress, "");
          strcpy(position, "");
          strcpy(NIC, "");
          dID = 0;
          licenseNo = 0;
       };

      void adddriver(const char dname[30], int dcontactNumber, const char demail[50],const char dadress[100], int dID, const char nicNo[12]) ;

      void updatedriver(int dID,int licenseno);
      void requestdriver(int dID,int licenseno);
      
    ~Driver()
      {
        cout << "Driver " << dID << " deleted " << endl;
      };
};