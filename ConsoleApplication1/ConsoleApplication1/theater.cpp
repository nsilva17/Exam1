#include "Movie1_H_"
#include "Theater1_H_"
#include <string>
using namespace std;
class Theater {
private:	
	Theater Garland();
	Theater(string name, string Phone);
	void AddMovie(Movie& Movie);
public:	
	string GetMovieForHour; 
	int Getshowtimeforgenre(int hour);
	bool GetPopcornSize(bool Small, bool Medium, bool Large);
	bool GetCokeSize(bool Small, bool Medium, bool Large);
	int GetPopcornPrice(int $6);
	int GetCokePrice(int $8);
	int GetShowTimeForGenre;
};
string Fletch;
int GetMovieTimeForGenre = 9;
