###Created by Srikala and Co-workers###


#include <iostream>
#include <math>
using namespace std;
int main()
{

//Read the information related to simulation from the users
// ensemble, mass of the atom, temperature, number of atoms, size of the box, sigma, epsilon, time step, number of time steps, 
  // tolerance limit of temperature (alloable temperature)
// 
  
  Step1. Declare variables, Constants and Functions
    
    Step2. 
          Take Users information
    Step3. 
          Build atoms -box  get_model.cpp
    Step4. 
         First generate velocity on all atoms. get_initial_Vel.cpp
    Step5.
         Calculation of Force on each atoms get_force.cpp
    Step6. 
          Calculate the next position. get_position.cpp
    Step7: 
          Ensemble requirements (Temp, pressure, energy) 
            
           If desired_Temp is far from the instantaneous temperature (check after every Tdamp value) : Adjust the temperature by thermostat: call thermostat_Vel-rescale.cpp
            
    Step7: If everything fine, go to the step5 
    
     
      
         
    
  

}
