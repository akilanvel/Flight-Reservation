#include <string>

using namespace std;

class Flight {
	public:
		string getTailNumber();
		void setTailNumber(string tailNumber1);
		int getPilotID();
		void setPilotID(int pilotID1);
		int getCopilotID();
		void setCopilotID(int copilotID1);
		int getFirstCabinCrewID();
		void setFirstCabinCrewID(int firstCabinCrewID1);
		int getSecondCabinCrewID();
		void setSecondCabinCrewID(int secondCabinCrewID1);
		int getThirdCabinCrewID();
		void setThirdCabinCrewID(int thirdCabinCrewID1);
		int getStartDate();
		void setStartDate(int startDate1);
		int getEndDate();
		void setEndDate(int endDate1);
		int getStartTime();
		void setStartTime(int startTime1);
		int getEndTime();
		void setEndTime(int endTime1);
		string getStartAirportCode();
		void setStartAirportCode(string startAirportCode1);
		string getEndAirportCode();
		void setEndAirportCode(string endAirportCode1);
		int getNumPassengers();
		void setNumPassengers(int numPassengers1);
		string getStatus();
		void setStatus(string status1);
		Flight();
		Flight(string tailNumber1, int pilotID1, int copilotID1, int firstCabinCrewID1, int secondCabinCrewID1, int thirdCabinCrewID1, int startDate1, int endDate1, int startTime1, int endTime1, string startAirportCode1, string endAirportCode1, int numPassengers1, string status1);
	private:
		string tailNumber;
		int pilotID;
		int copilotID;
		int firstCabinCrewID;
		int secondCabinCrewID;
		int thirdCabinCrewID;
		int startDate;
		int endDate;
		int startTime;
		int endTime;
		string startAirportCode;
		string endAirportCode;
		int numPassengers;
		string status;
};
