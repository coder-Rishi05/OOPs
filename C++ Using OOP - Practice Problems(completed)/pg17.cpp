/*17. Write a C++ program to create a class called "Movie" with attributes for title, director, actors, and reviews, and methods for adding and retrieving reviews. */

#include <iostream>
#include <string>

using namespace std;

// Review structure to hold review details
struct Review {
    string reviewerName;
    string comment;
    int rating;
};

const int MAX_REVIEWS = 20;

class Movie {
private:
    string title;
    string director;
    string actors[3]; 
    Review reviews[MAX_REVIEWS];
    int reviewCount;

public:
   
    Movie(const string& t, const string& d, const string& actor1, const string& actor2, const string& actor3)
        : title(t), director(d), reviewCount(0) {
            actors[0] = actor1;
            actors[1] = actor2;
            actors[2] = actor3;
    }

    void addReview(const string& reviewerName, const string& comment, int rating) {
        if (reviewCount < MAX_REVIEWS) {
            Review review = {reviewerName, comment, rating};
            reviews[reviewCount++] = review;
        } else {
            cout << "Maximum number of reviews reached. Cannot add more reviews." << endl;
        }
    }

    void displayMovieDetails() const {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Actors: ";
        for (int i = 0; i < 3; ++i) {
            if (!actors[i].empty()) {
                cout << actors[i];
                if (i < 2 && !actors[i + 1].empty()) {
                    cout << ", ";
                }
            }
        }
        cout << endl;
    }

    void displayReviews() const {
        cout << "Reviews:" << endl;
        for (int i = 0; i < reviewCount; ++i) {
            cout << "Reviewer: " << reviews[i].reviewerName << ", Rating: " << reviews[i].rating << ", Comment: " << reviews[i].comment << endl;
        }
    }
};

int main() {

    Movie movie("Movie Title", "Director Name", "Actor1", "Actor2", "Actor3");

    movie.addReview("Reviewer1", "Great movie!", 5);
    movie.addReview("Reviewer2", "Enjoyed it.", 4);

    movie.displayMovieDetails();

    movie.displayReviews();

    return 0;
}

/* OUtput: 

Title: Movie Title
Director: Director Name
Actors: Actor1, Actor2, Actor3
Reviews:
Reviewer: Reviewer1, Rating: 5, Comment: Great movie!
Reviewer: Reviewer2, Rating: 4, Comment: Enjoyed it.

*/