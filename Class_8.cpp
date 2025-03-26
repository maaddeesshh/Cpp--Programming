#include <iostream>
using namespace std;

class Movie {
private:
    string title;
    string director;
    double rating;

public:
    // Constructor
    Movie(string t, string d, double r) {
        title = t;
        director = d;
        setRating(r); // Using setter to validate rating
    }

    // Setter methods
    void setTitle(string t) { title = t; }
    void setDirector(string d) { director = d; }
    void setRating(double r) {
        if (r >= 0.0 && r <= 10.0) // Validate rating
            rating = r;
        else {
            cout << "Invalid rating! Setting default rating to 0." << endl;
            rating = 0.0;
        }
    }

    // Getter methods
    string getTitle() { return title; }
    string getDirector() { return director; }
    double getRating() { return rating; }

    // Display function
    void showDetails() {
        cout << "Movie: " << title << "\nDirector: " << director << "\nRating: " << rating << "/10\n" << endl;
    }
};

int main() {
    // Creating objects using the constructor
    Movie movie1("Interstellar", "Christopher Nolan", 8.6);
    Movie movie2("Titanic", "James Cameron", 7.9);
    Movie movie3("Unknown", "Unknown", 12.0); // Invalid rating, should be set to 0

    // Displaying movie details
    movie1.showDetails();
    movie2.showDetails();
    movie3.showDetails();

    return 0;
}
