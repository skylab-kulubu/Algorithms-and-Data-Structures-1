#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long num_games, aziz_dolar;
    cin >> num_games >> aziz_dolar;
    long games_numbers[num_games], num_of_queries;
    for(long i = 0; i < num_games; i++)
        cin >> games_numbers[i];
    cin >> num_of_queries;
    long queries[num_of_queries];
    for(long i = 0; i < num_of_queries; i++)
        cin >> queries[i];
    unsigned long left, right;
    for (size_t i = 0; i < num_of_queries; i++)
    {
        left =aziz_dolar - queries[i];
        right = aziz_dolar + queries[i];
        long count = 0;

        for (size_t j = 0; j < num_games; j++)
        {
            if(games_numbers[j] >= left && games_numbers[j] <= right)
                count++;
        }
        cout << count << "\n";
    }
    

	return 0;
}
