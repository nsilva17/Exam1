#include <string>
class Theater1{
	private:
		Theater1();
		Theater1(string name, string Phone);
		void AddMovie(Movie& Movie);
public:
		string GetMovieForHour;
		int Getshowtimeforgenre(int hours);
		bool GetPopcornSize(bool Small, bool Medium, bool Large);
		bool GetCokeSize(bool Small, bool Medium, bool Large);
		int GetPopcornPrice(int $6);
		int GetCokePrice(int $8);
};