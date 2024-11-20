3) #include <iostream>
using namespace std;

int main() {
    
    int ar[] = {1, 50, 30, 25, 62, 9, 45, 78, 65, 40, 12, 23};
   
    int highest = ar[0];
    int second_highest = ar[0];

    for (int i = 1; i < 12; i++) {
        if (ar[i] > highest) {
            second_highest = highest;
            highest = ar[i];          
        } else if (ar[i] > second_highest && ar[i] < highest) {
            second_highest = ar[i]; 
        }
    }

    // Check if we have two distinct numbers in the array
    if (highest == second_highest) {
        cout << "No second highest number found." << endl;
    } else {
        cout << "The second highest number is: " << second_highest << endl;
    }

    return 0;
}
