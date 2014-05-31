#include "Movie1_H_"
#include "Theater1_H_"
#include <string>
using namespace std;
int main(){
	class Movie{
		Movie(string title, string genre, int showtime, int storehours);
		string Gettitle();
		string Getgenre();
		int Getshowtime();
	};
	string Action;
	string Comedy;
	string Horror;

}