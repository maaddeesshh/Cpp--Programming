#include <iostream>
using namespace std;

class Movie {
private:
    string title;
    string director;
    double rating;

public:
    // Setter functions
    void setTitle(string t) { title = t; }
    void setDirector(string d) { director = d; }
    void setRating(double r) {
        if (r >= 0.0 && r <= 10.0) // Ensuring rating is valid
            rating = r;
        else
            cout << "Invalid rating! Must be between 0 and 10." << endl;
    }

    // Getter functions
    string getTitle() { return title; }
    string getDirector() { return director; }
    double getRating() { return rating; }
};

int main() {
    Movie movie1;

    // Setting values using setter functions
    movie1.setTitle("Inception");
    movie1.setDirector("Christopher Nolan");
    movie1.setRating(9.0);

    // Getting and displaying values using getter functions
    cout << "Movie: " << movie1.getTitle() << endl;
    cout << "Director: " << movie1.getDirector() << endl;
    cout << "Rating: " << movie1.getRating() << "/10" << endl;

    return 0;
}
