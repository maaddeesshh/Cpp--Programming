#include <iostream>
using namespace std;

class Movie {
public:
    string title;
    string director;

private:
    double rating;

public:
    // Constructor
    Movie(string t, string d, double r) {
        title = t;
        director = d;
        setRating(r); // Use setter to validate rating
    }

    // Setter method for rating
    void setRating(double r) {
        if (r >= 0.0 && r <= 10.0) // Validate rating
            rating = r;
        else {
            cout << "Invalid rating! Setting default rating to 0." << endl;
            rating = 0.0;
        }
    }

    // Getter method for rating
    double getRating() { return rating; }

    // Display function
    void showDetails() {
        cout << "Movie: " << title << "\nDirector: " << director << "\nRating: " << rating << "/10\n" << endl;
    }
};

int main() {
    // Creating objects using the constructor
    Movie movie1("Inception", "Christopher Nolan", 9.0);
    Movie movie2("Avatar", "James Cameron", 7.8);
    Movie movie3("Unknown", "Unknown", 12.0); // Invalid rating, should be set to 0

    // Displaying movie details
    movie1.showDetails();
    movie2.showDetails();
    movie3.showDetails();

    return 0;
}
