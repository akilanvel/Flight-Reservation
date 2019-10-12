#include <string>

using namespace std;

class Airplane {
	public:
		string getMake();
		void setMake(string make1);
		string getModel();
		void setModel(string model1);
		string getTailNumber();
		void setTailNumber(string tailNumber1);
		int getNumSeats();
		void setNumSeats(int numSeats1);
		int getRange();
		void setRange(int range1);
		string getStatus();
		void setStatus(string status1);
		Airplane();
		Airplane(string make1, string model1, string tailNumber1, int numSeats1, int range1, string status1);
	private:
		string make;
		string model;
		string tailNumber;
		int numSeats;
		int range;
		string status;
};
