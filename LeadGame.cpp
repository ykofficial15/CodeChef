#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxLead = 0;
    int winner = 0;
    int lead = 0;

    for (int i = 0; i < N; ++i) {
        int player1, player2;
        cin >> player1 >> player2;

        lead += (player1 - player2);

        if (abs(lead) > maxLead) {
            maxLead = abs(lead);
            if (lead > 0) {
                winner = 1;
            } else {
                winner = 2;
            }
        }
    }

    cout << winner << " " << maxLead << endl;

    return 0;
}
