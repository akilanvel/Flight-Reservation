#include <string>

using namespace std;

class CrewMember {
	public:
		string getName();
		void setName(string name1);
		int getID();
		void setID(int ID1);
		string getStatus();
		void setStatus(string status1);
		virtual void printInfo();
		CrewMember();
		CrewMember(string name1, int ID1, string status1);
	private:
		string name;
		int ID;
		string status;
};
