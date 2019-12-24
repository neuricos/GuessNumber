#include <iostream>
#include <chrono>
#include <random>

int getRandInt(int low, int high)
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::uniform_int_distribution<long long> dist(low, high);
    std::mt19937 rand_num(seed);
    return dist(rand_num);
}

int main()
{
    std::cout << "Welcome to my guess game!" << std::endl;
    std::cout << "Number X has been generated (1 <= X <= 100)" << std::endl;
    int target = getRandInt(1, 100);
    int guess;
    int num_guess = 0;
    while (true)
    {
        num_guess++;
        std::cin >> guess;
        if (guess == target)
        {
            break;
        }
        if (guess < target)
        {
            std::cout << "Too small!" << std::endl;
        }
        else
        {
            std::cout << "Too large!" << std::endl;
        }
    }
    std::cout << "Correct! You got the right answer after "
        << num_guess << " guess" << (num_guess == 1? "" : "es")
        << "." << std::endl;
    return 0;
}
